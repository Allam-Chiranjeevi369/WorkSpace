#include<iostream>
using namespace std;

int pivot(int a[], int size){

    int start = 0, end = size - 1;
    while(start < end){

        int mid = start + (end - start)/2;
        if(a[mid] < a[0])
            end = mid;
        
        else
            start = mid + 1;

    } 
    return end;

}

int findElement(int a[], int size, int key){

    int Pivot = pivot(a,size);
    int start, end;

    if(key > a[0])
        start = 0, end = Pivot;
    
    else if(key < a[0])
        start = (Pivot + 1), end = (size - 1);

    else
        return 0;
    
    while(start < end){

        int mid = start + (end - start)/2;
        if(a[mid] < key)
            start = mid + 1;

        else 
            end = mid;

    }
    return end;

}

int main(){

    int a[10] = {6,7,8,1,3,5};
    int size = 6;

    cout << findElement(a,size,6); 

}