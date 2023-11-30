/*ARRAY INTERSECTION*//*2-POINTER APPROACH SOL.(INTERVIEW)*/
/*You are given two arrays A & B of size N & M respectively, sorted in non-decreasing order. You have to find the intersection of these two */

#include <bits/stdc++.h>
using namespace std;

int main(){

    int a[10] = {1,4,4,8,9,10};
    int b[10] = {3,4,6,7,9};

    for(int i = 0,j = 0 ; i <= 5 && j <= 4 ; ){

        if(a[i] == b[j]){

            cout << b[j] << " ";
            i++ ;
            j++ ;
            continue;

        }else if (a[i] < b[j])
        {
            
            i++;
            continue;

        }else if (a[i] > b[j])
        {
            
            j++;
            continue;            

        }
        
    }

}
