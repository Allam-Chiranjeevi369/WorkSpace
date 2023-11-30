/* ROTATED ARRAY */

#include<bits/stdc++.h>
using namespace std;

int rotate(int a[], int k, int size){

    int temp[10];
    for(int i = 0 ; i < size ; i++){

        temp[(i+k)%size] = a[i]; // MODULUS OF "n" LIES IN RANGE OF "0 - (n - 1)"

    }
    for(int i = 0 ; i < size ; i++){

        a[i] = temp[i];

    }

}

int main(){

    int arr[10] = {1,2,3,4,5,6};
    rotate(arr, 3, 6);

    for(int i = 0 ; i < 6 ; i++){

        cout << arr[i] << " ";

    }

}