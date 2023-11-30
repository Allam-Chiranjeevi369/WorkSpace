// BOOK ALLOCATION PROBLEM
#include<iostream>
using namespace std;

bool isPossible(int a[], int size, int mid){

    int sum = 0, count = 0, i = 0;
    while(count <= 1 && i < size){

        sum = sum + a[i];
        if(sum > mid){

            count = count + 1;
            sum = 0;

        }
        else
            i++;

    }
    if(count == 1)
        return 1;
    else 
        return 0;

}

int binSearch(int a[], int size){

    int start = 0, end = 0, ans;
    for(int i = 0 ; i < size ; i++)
        end = end + a[i];

    while(start <= end){

        int mid = start + (end - start)/2;
        if(isPossible(a,size, mid)){

            end = mid - 1;
            ans = mid;

        }
        else
            start = mid + 1;

    }
    return ans;

}

int main(){

    int a[10] = {10,20,30,70};
    int size = 4;
    cout << binSearch(a,size);
    // cout << isPossible(a,size,60);

}