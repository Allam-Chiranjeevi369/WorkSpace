#include<iostream>
using namespace std;

int FirstOcc(int a[], int size, int key){

    int start = 0, end = (size - 1);
    
    for(int i = 0 ; i < size ; i++){

        int mid = start + (end - start)/2;
        if( a[mid] < key )
            start = mid;
        else
            end = mid;

    }
    return end;

}

int SecondOcc(int a[], int size, int key){

    int start = 0, end = (size - 1);
    
    for(int i = 0 ; i < size ; i++){

        int mid = start + (end - start)/2;

        if( a[mid] <= key )
            start = mid;
        else
            end = mid;

    }
    return start;

}

int main(){

    int a[20] = {0,1,2,2,2,4};
    int key = 2;
    cout << FirstOcc(a,6,key) << "\n";
    cout << SecondOcc(a,6,key);
}