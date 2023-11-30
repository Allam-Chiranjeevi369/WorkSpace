/*FIND ALL DUPLICATES IN ARRAY*/
/*Given an integer array nums of length n where all the integers of nums are in the range [1,n] and each integer appears once or twice, return an array of all the integers that appears twice*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int a[10]={4,3,2,5,6,2,3,1}, n = 0, x;

    // cout << "Enter size of array : ";
    // cin >> n;
    sort(a,a+8);

    for(int i = 0 ; i < 8 ; i++){

        if(a[i] == a[i+1]){

            x = a[i];
            cout << x << " ";

        }
        
    }
        
}