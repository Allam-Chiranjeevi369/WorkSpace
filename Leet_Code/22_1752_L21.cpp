// CHECK WHETHER THE GIVEN ARRAY IS ROTATED & SORTED OR NOT

#include<bits/stdc++.h>
using namespace std;

bool check(int a[], int size){

    int count = 0;
    
    for(int i = 0 ; i < (size - 1) ; i++){

        if (a[i] > a[i + 1])
            count = count + 1;
        
    }
    if(a[0] < a[size - 1])
        count = count + 1;
        
    return(count <= 1);

}

int main(){

    int arr[10] = {2,3,4};
    if(check(arr, 3))
        cout << "YES";
    else
        cout << "NO";

}