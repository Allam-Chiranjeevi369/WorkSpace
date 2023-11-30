#include<iostream>
using namespace std;

int peakElemnt(int a[], int size){

    int start = 0, end = (size - 1);
    while(start < end){

        int mid = start + (end - start)/2;
        if(a[mid] < a[mid + 1])
            start = mid + 1;

        else if(a[mid] > a[mid + 1])
            end = mid;

    }
    return end;

}

int main(){

    int a[10] = {0,2,3,6,5,3,1};
    // int a[10] = {7,9,1,2,3};
    int size = 7;
    cout << peakElemnt(a,size);

}