/*PRINTING THE SUM OF ELEMENTS IN ARRAY*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[10], size;
    cout << "Enter size of array : ";
    cin >> size;

    cout << "\nEnter array elements : ";
    int sum = 0;
    for(int i = 0 ; i < size ; i++){

        cin >> arr[i];
        sum = sum + arr[i];

    }
    cout << sum;

}