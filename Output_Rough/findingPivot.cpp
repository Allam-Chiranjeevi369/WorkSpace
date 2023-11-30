#include<iostream>
using namespace std;

int findingPivot(int a[], int size){

    int s = 0, e = (size - 1);
    while(s < e){

        int mid = s + (e - s)/2;

        if(a[mid] < a[0])
            e = mid;
        
        else
            s = mid + 1; 

    }    
    return a[e];

}

int main(){

    int a[10] = {2,3,7,9,1};
    int size = 6;
    cout << findingPivot(a,size);

}