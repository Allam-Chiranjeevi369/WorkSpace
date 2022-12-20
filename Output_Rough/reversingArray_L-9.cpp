#include<bits/stdc++.h>
using namespace std;

int reverseArr(int a[],int n){

        for(int i = 0 ; i < n ; i++){

        if(i == n/2){
            break;
        }

        swap(a[i], a[(n-1) - i]);
        
        // a[i] = a[i] + a[4 - i];
        // a[4 - i] = a[i] - a[4 - i];
        // a[i] = a[i] - a[4 - i];

        // int temp = 0;
        // temp = a[i];
        // a[i] = a[9 - i];
        // a[9 - i] = temp;
        // cout << a[i] << " ";

    }

}

int printArr(int a[], int size){

     for(int i = 0 ; i < size ; i++){

        cout << a[i] << " ";

    }


}

int main(){

    // int a[5] = {-6,-7,5,-10,1};
    // int a[10] = {1,0,9,5};
    cout << "Enter size of array : ";
    int n;
    cin >> n;

    cout << "Enter the array : ";
    int a[10];
    for(int i = 0 ; i < n ; i++){

        cin >> a[i];

    }
    reverseArr(a,n);
    printArr(a,n);

   
}