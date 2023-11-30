/* SELECTION SORT */
/* Useful only when size of array is small */
/* TIME COMPLEXITY : O(n**2)(same for best & worst case) */
/* SPACE COMPLEXITY : O(1) */

#include<bits/stdc++.h>
using namespace std;

int selectionSort(int a[], int size){

    for(int j = 0 ; j < (size - 1) ; j++){

        int MinIndex = j;
        for(int i = j + 1 ; i < size ; i++){

            if(a[i] < a[MinIndex])
                MinIndex = i;           

        }

        swap(a[j], a[MinIndex]);

    }

}

int main(){

    int a[10] = {1,20,2,0}, n = 4;

    cout << "\nSorted array : ";
    selectionSort(a, n);
    
    for(int i = 0 ; i < n ; i++){

        cout << a[i] << " ";

    }

}