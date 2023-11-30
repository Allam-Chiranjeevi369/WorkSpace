/* SORT 012 */
/* You are given an array containing only `0,1 & 2 integers, sort them accordingly */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int a[10] = {0,1,1,0,2,0,1,2,2};
    int i = 0, j = 8;

    while(i < j){

        if(a[i] == 0){

            i++;

        }else if (a[i] > a[j])
        {
            swap(a[i], a[j]);
            i++; j--;

        }else if (a[i] < a[j])
        {
            
            i++;

        }else if ((a[i] == a[j] == 0) || (a[i] == a[j] == 1))
        {

            i++;

        }else if(a[i] == a[j] == 2){

            j--;

        }

    }for (int i = 0; i < 9; i++)
    {
        
        cout << a[i] << " ";
    }
    

}