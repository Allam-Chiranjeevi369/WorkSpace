/* COOKING NINJAS */

#include<bits/stdc++.h>
using namespace std;

int possibleSol(int a[], int size, int mid, int dishes){

    int temp = 0;
    for(int i = 0 ; i < size ; i++){

        int dish = 0;
        int time = 0, total_time = 0 ;

        while((total_time) <= mid){
            time = time + a[i];
            total_time = time + total_time;
            dish = dish + 1;
            
        }
        dish = dish - 1;
        temp = temp + (dish);

        if(temp >= dishes)
            return 1;

    }
    return 0;

}

int binSearch(int a[], int size, int dishes){

    int sum = 0;

    for(int i = 0 ; i < size ; i++)
        sum = sum + a[i];

    int start = 0, end = (2*sum), mid;

    while( start < end ){

        mid = start + (end - start)/2;
        if(possibleSol(a,size,mid,dishes))
            end = mid;

        else
            start = mid + 1;

    }
    return start;
}

int main(){

    // int a[10] = {1,1,1,1,1,1,1,1,};
    // int size = 8, dishes = 8;

    int a[10] = {1,2,3,4};
    int size = 4, dishes = 10;

    // int a[10] = {10};
    // int size = 1, dishes = 1;

    cout << "It takes minimum " << binSearch(a,size,dishes) << " MINUTES, to cook " << dishes << " DISHES";
    // cout << possibleSol(a,size,0,dishes);

}