// SUM OF TWO ARRAYS

#include<bits/stdc++.h>
using namespace std;

int number(int a[], int size){

    int number = 0;
    for(int i = 0 ; i < size ; i++){

        number = number*10 + a[i] ;

    }
    return number;

}

int digit(int number, int a[], int size){

    int digit = 0;
    for(int i = (size - 1) ; i >= 0 ; i--){

        int digit = number % 10;
        a[i] = digit;
        number = number / 10;

    }

}

int sum(int a1[], int size1, int a2[], int size2, int a[]){

   int ar1 = number(a1, size1);
   int ar2 = number(a2, size2);
   int arr_sum = ar1 + ar2;
   int size = size1 + size2;
   digit(arr_sum, a, size);
  
}

int main(){

    int arr1[10] = {1,1,1,1,1};
    int arr2[10] = {9,9};
    int result[10] = {0};
    sum(arr1, 5, arr2, 2, result);

    for(int i = 0 ; i < 7 ; i++){

        cout << result[i] << " ";

    }

}