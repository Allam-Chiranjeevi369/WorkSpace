/* BUBBLE SORT */
/* BEST CASE (Already sorted) : O(n) */
/* WORST CASE (Sorted in decreasing order) : O(n**2) */


#include<bits/stdc++.h>
using namespace std;

int bubbleSort( int a[], int size ){

    for(int i = 1 ; i < size ; i++){

        bool swapped = false;
        for(int j = 0 ; j < (size - i) ; j++){

            if(a[j] > a[j + 1])
                swap(a[j],a[j + 1]);
                swapped = true;

        }
        if(swapped == false)//already sorted
            break;

    }

}

int main(){

    int size = 7;
    int arr[10] = {1,0,9,1,53,5,3};
    // int arr[10] = {4,5,56,1,2,3};

    bubbleSort(arr, size);

    for(int c = 0 ; c < size ; c++){

        cout << arr[c] << " ";
 
    }

}