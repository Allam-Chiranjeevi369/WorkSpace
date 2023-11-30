/* INSERTION SORT */
/* TIME COMPLEXITY : O(n)(BEST CASE (ALREADY SORTED)) */
/* TIME CPMPLEXITY : O(n**2)(WORST CASE(SORTED IN DECENDING)) */
/* STABLE ALGORITHM */


#include<bits/stdc++.h>
using namespace std;

int InsertionSort(int a[],int size){

    for(int i = 1 ; i < size ; i++){

        int temp = a[i],j = i - 1;
        while(a[j] > temp){

            a[j + 1] = a[j];
            j--;

        } 
        a[j + 1] = temp;

    }

}

int main(){

    int a[10] = {4,1,6,2,0};
    int size = 5;
    InsertionSort(a,size);

    for(int i = 0 ; i < size ; i++){

        cout << a[i] << " ";

    }

}