/*FINDING KEY USING LENEAR SEARCH*/


#include<bits/stdc++.h>
using namespace std;

bool search(int a[], int size, int key){

    for(int i = 0 ; i < size ; i++){

        if(a[i] == key){

            return 1;

        }

    }
    return 0;

}

int main(){

    int n, a[100], key;
    cout << "Enter size of array :";
    cin >> n;
    cout << "Enter array : ";
    for(int i = 0 ; i < n ; i++){

        cin >> a[i];

    }
    cout << "Enter key to search : ";
    cin >> key;
    if(search(a,n,key)){

        cout << "Key is found!!!";

    }
    else
        cout << "No key found";

}