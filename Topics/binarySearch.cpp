#include <bits/stdc++.h>
using namespace std;

int binSearch(int a[], int size, int key){
    int mid, end = size, start = 0;
    for( int i = 0 ; i < size ; i++){
        
        mid = start + (end - start)/2 ;//(start + end)/2;
        if(a[mid] == key){

            return mid +1;
            break;

        }else if( a[mid] <= key){

            start = mid + 1;

        }else if( a[mid] >= key){

            end = mid - 1;

        }else{

            return 0;

        }

    }

}

int main(){

    int a[10] = {1,2,5,10,34,39,50}, size = 7;
    int key = 1;
    cout << "Your key is at index " << binSearch(a,size,key );

}
