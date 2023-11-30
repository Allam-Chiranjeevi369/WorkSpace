#include<bits/stdc++.h>
using namespace std;

int select_sort(int a[], int size){

    for(int i = 0 ; i < size ; i++){

        int min_value = i;

        for(int j = i + 1 ; j < size ; j++){

            if(a[j] < a[min_value])
                min_value = j;

        }
        swap(a[i], a[min_value]);
    }

}

int main(){

    int a[100] = {1,4,9,1,3,99};
    select_sort(a,6);
    for(int i = 0 ; i < 6 ; i++){

        cout << a[i] << " ";

    }

}