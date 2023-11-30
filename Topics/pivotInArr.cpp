/* PIVOT IN ARRAY */
/* To find small value in sorted and rotated array */

#include<bits/stdc++.h>
using namespace std;

int findPivot(int a[],int size){

    int ans, start = 0, end = size - 1, mid;
    while(start < end){

        mid = start + (end - start)/2;
        if(a[mid] >= a[0]){

            start = mid + 1;

        }else {

           end = mid;

        }

    } 
    return start;

}
int main(){

    int arr[10] = {7,7,1,2,3};
    int size = 6;
    cout << "Pivot is at index : " << findPivot(arr, size) ;

}