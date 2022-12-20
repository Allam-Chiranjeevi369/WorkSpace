/*SWAPING ALTERNATE NUMBERS IN ARRAY*/

#include<bits/stdc++.h>
using namespace std;

int alterSwap(int a[]){

    for(int i = 0 ; i < 4 ; i = i + 2){

        swap(a[i], a[i + 1]);

    }

}

int main(){

    int a[5] = {9,4,12,44,0};
    
    alterSwap(a);

    for(int i = 0 ; i < 5 ;i++){

        cout << a[i] << " ";

    }

}


