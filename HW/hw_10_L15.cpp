/* EKO - Eko */

#include<bits/stdc++.h>
using namespace std;

int possibleSol(int a[], int size, int height, int mid){

    int ans = 0;
    for(int i = 0 ; i < size ; i ++){

        if ( (a[i] - mid) < 0 ){

            continue;

        }else{

            ans = ans + (a[i] - mid);

        }

    }
    return ans;

}

int binSearch(int a[], int size, int height){

    sort(a,a + size);
    int start = 0, end = a[size - 1];
    int mid;

    while(start < end){

        mid = start + (end - start)/2;

        if(possibleSol(a, size, height, mid) == height){

            return mid;

        }else if(possibleSol(a, size, height, mid) < height){

            end = mid;

        }else{

            start = mid + 1;

        }

    }

}

int main(){

    int a[10] = {4, 42, 40, 26, 46};
    int size = 5, height = 3;
    cout << "Required height setting of chainsaw is : " << binSearch(a, size, height);

}

/* In this problem, we are ramdomly choosing a number {from number line with required 'start' and 'end' postitions of array} using 'binSearch()' and tallying with the answer, if 'true' then return 'mid' (the random value thats been picked up) */