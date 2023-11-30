#include<bits/stdc++.h>
using namespace std;

int Bubble(int a[], int size){

    int z = 0;
    while(z < size){

        bool x = false;
        for(int i = (z + 1) ; i < (size - z) ; i++){

            if(a[z] > a[i]){
                swap(a[z], a[i]);
                x = true;
            }

        }
        z++;
        
        if(x == false)
            break;

    }

}

int main(){

    int a[100] = {1,0,9,1,53,5,3};
    Bubble(a,7);

    for(int i = 0 ; i < 7 ; i++ ){

        cout << a[i] << " ";

    }

}