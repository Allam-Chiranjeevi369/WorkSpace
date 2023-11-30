/* BOOK ALLOCATION PROBLEM */

/* In this problem, we are ramdomly choosing a number {from number line with required 'start' and 'end' postitions of array} using 'binSearch()' and tallying with the answer, if 'true' then return 'mid' (the random value thats been picked up) */

#include<bits/stdc++.h>
using namespace std;

int possibleSol(int a[],int size, int m, int mid){

    int pgs = 0 ;
    int students = 1;

    for (int i = 0 ; i < size ; i++)
    {
        
        if( (pgs + a[i]) <= mid){

            pgs = pgs + a[i];

        }   
        else {

            students++;
            if(students > m || a[i] > mid){

                return false;

            }
            pgs = a[i];

        }

    }
    return true;

}

int binSearch(int a[], int size, int m){

    int start = 0, end = 0, mid;
    int ans = -1;
    for(int i = 0 ; i < size ; i++){

        end = end + a[i];

    }
    while (start <= end)
    {
        
        mid = start + (end - start)/2;
        if(possibleSol(a,size,m,mid)){

            ans = mid;
            end = mid - 1;

        }
        else{

            start = mid + 1;

        }

    }
    return ans;

}

int main(){

    int a[100] = {10,20,30,40};
    int size = 4, m = 2;
    cout << binSearch(a, size, m);

}