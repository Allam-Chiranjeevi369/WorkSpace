/*FINDING MINIMUM AND MAXIMUM NUMBER IN GIVEN ARRAY*/

#include<bits/stdc++.h>
using namespace std;

//FUNCTION TO FIND MAX

int getMax(int num[], int size){

    int max = INT_MIN;

    for(int i = 0 ; i < size ; i++){

        if( num[i] > max){

            max = num[i];

        }

    }
    return max;

}

//FUNCTION TO FIND MIN

int getMin(int num[], int size){

    int min = INT_MAX;

    for(int i = 0 ; i < size ; i++){

        if( num[i] < min){

            min = num[i];

        }

    }
    return min;

}

int main(){

    int n;
    cout << "Enter the size of Array : ";
    cin >> n;
    
    int num[100];

    for(int i = 0 ; i < n ; i++){

        cin >> num[i];

    }
    cout << "Max : " << getMax(num, n);
    cout << " Min : " << getMin(num, n);

}