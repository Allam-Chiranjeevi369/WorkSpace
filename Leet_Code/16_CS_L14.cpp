/* FIND KEY IN ROTATED SORTED ARRAY */
/* You have been given a sorted array/list ARR containing n elements, rotated with some unknown pivot find whether k is present in it or not */

#include<bits/stdc++.h>
using namespace std;

int Pivot(int a[], int size){

    int start = 0, end = size - 1, mid;
    while (start < end)
    {
        
        mid = start + (end - start)/2;
        if (a[0] <= a[mid]){
            
            start = mid + 1;

        }
        else if(a[0] > a[mid]){

            end = mid;

        }

    }
    return start;

}

int binaryS( int a[], int key, int start, int end){

    int mid;
    while( start < end){
            
        mid = start + (end - start) / 2;
        if(a[mid] >= key){

            end = mid;

        }
        else if(a[mid] < key){

            start = mid + 1;

        }
    }
    return start;

}

int main(){

    int a[10] = {8,9,10,1,2,3,4,5,7};
    int n = 9, key = 10, start = 0, end = n - 1;
    int pivot = Pivot(a, n), ans;

    if(a[pivot] == key){

        ans = pivot;

    }
    else if(key <= a[end]){

        ans = binaryS(a, key, pivot, end);

    }
    else if(a[start] <= key){

        ans = binaryS(a, key, 0, pivot);

    }
    cout <<"Your key " << key << ", is at index : " << ans;

}