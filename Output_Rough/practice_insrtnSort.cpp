#include<bits/stdc++.h>
using namespace std;

int InsrtnSort(int a[], int size ){

    for(int i = 1 ; i < size ; i++){

        int temp = a[i];
        int j = i - 1;
        while(j >= 0){

            if(temp < a[j]){

                a[j + 1] = a[j];            
                j--;

            }else
                break;
            
        }
        a[j + 1] = temp;

    }

}

int main(){

    int a[10] = {1,0,10,29,14,1,99,12};
    InsrtnSort(a,8);

    for(int i = 0 ; i < 8 ; i++){

        cout << a[i] << " ";

    }

}
