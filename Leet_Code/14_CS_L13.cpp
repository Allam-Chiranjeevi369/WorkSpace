/* FIND FIRST AND LAST POSITION OF ELEMENT IN SORTED ARRAY (in O(logn))*/
/* You hve been given a sorted array/list ARR consisting of N elements. you also given an integer k. Now your task is to find first and last occurance of k in ARR */

#include<bits/stdc++.h>
using namespace std;

int firstOccurance(int a[], int size, int k){

    int start = 0, end = size - 1, mid, ans = -1;
    for(int i = 0 ; start < end ; i++){

        mid = start + (end - start)/2;
        if(a[mid] == k){

            ans = mid;
            end = mid - 1; 

        }
        else if(a[mid] < k){

            start = mid + 1;    

        }else{

            end = mid - 1;

        }

    }
    return ans;

}
int lastOccurance(int a[], int size, int k){

    int start = 0, end = size - 1, ans = -1, mid;
    while(start < end){

        mid = start + (end - start)/2;
        if(a[mid] == k){

            ans = mid;
            start = mid + 1;

        }else if( a[mid] < k){

            start = start + 1;

        }else{

            end = mid - 1;

        }

    }
    return ans;

}
int main(){

    int arr[20] = {1,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,6};
    int key = 3;
    cout << "First occurance of 3 is at index : " << firstOccurance(arr , 19 , key) ;
    cout << "\nLast occurance of 3 is at index : " << lastOccurance(arr , 19 , key) ;

}