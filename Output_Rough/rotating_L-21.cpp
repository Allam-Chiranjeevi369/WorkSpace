// ROTATING AN ARRAY

#include<bits/stdc++.h>
using namespace std;

int rotate(int a[], int size, int r){

    int temp, count = 0 ;
    temp = a[size - 1];
    for(int i = 1 ; i <= size ; i ++){

        if(i == size){

            a[0] = temp;
            count = count + 1;
            if( count != r){

                temp = a[size - 1];
                i = 1;

            }
            else
                break;

        }
        a[size - i] = a[size - i - 1];

    }

}

int main(){

    int arr[10] = {1,2,4,5,7,9};
    cout << "Rotated array : " ;
    rotate(arr, 6, 3);
    for(int i = 0 ; i < 6 ; i++){

        cout << arr[i];

    }

}