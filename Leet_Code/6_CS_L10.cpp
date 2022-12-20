/*FIND UNIQUE*/

/*You have been given an array, where size of array N is equal to[2M + 1]. Now, in this given array, 'M' numbers are present twice and one number is present only once. You've to return the number tht is unique */

#include<bits/stdc++.h>
using namespace std;

int unqNum(int a[],int n){

    int count = 0;
    for(int i = 0 ; i < n ; i++){

        count = (count^a[i]);

    }
    return count;

}

int main(){

    cout << "Enter the size of array : ";
    int n;
    cin >> n;

    cout << "Enter array : ";
    int a[100];
    for(int i = 0 ; i < n ; i++ ){

        cin >> a[i];

    }

    cout << " Unique of list is : " << unqNum(a,n);

}