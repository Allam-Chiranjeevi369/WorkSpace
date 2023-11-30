/* MERGE TWO ARRAYS */

#include<bits/stdc++.h>
using namespace std;

int Merged(int a1[], int m, int a2[], int n){

    int i = 0, j = 0,k = 0;
    vector<int>arr;    
    while (i < m && j < n)
    {

        if(a1[i] < a2[j])
            arr.push_back(a1[i++]) ;

        else
            arr.push_back(a2[j++]) ;

    }
    while (i < m)
    {
        
        arr.push_back(a1[i++]) ;
        
    }
    while (j < n)
    {
        
        arr.push_back(a2[j++]) ;
        
    }
    int s = arr.size();
    a1 = {0};
    for(int i = 0 ; i < s ; i++){

        a1[i] = arr[i];

    }  

}

int main(){

    int arr1[10] = {4,5,6,0,0,0}, m = 3;
    int arr2[10] = {1,2,3}, n = 3;
    cout << "Merged array : ";
    Merged(arr1,m,arr2,n);
    for(int i = 0 ; i < 6 ; i++){

        cout << arr1[i] << " ";

    }

}