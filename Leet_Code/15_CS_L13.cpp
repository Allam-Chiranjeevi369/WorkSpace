/* PEAK INDEX IN MOUNTAIN ARRAY */

#include<bits/stdc++.h>
using namespace std;

int main(){

    // int a[10] = {1,3,4,4,4,5,3,2,1}; ---> is not a mountain array(due to repetition of elements)

    // THIS CODE ONLY WORKS FOR NON-REPETING ELEMENTS 
    
    int a[10] = {1,3,4,5,6,2,1,0}; // ---> is a mountain array
    
    int start = 0, end  = 7, mid ;
    while(start < end){

        mid = start + (end - start)/2;
        if(a[mid] < a[mid + 1]){

            start = mid + 1;

        }else{

            end  = mid;

        }

    }
    cout << "Peak value : " << a[start] << "\nIs at index : " << start ;

}