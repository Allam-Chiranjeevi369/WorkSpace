/*TRIPLET WITH GIVEN SUM*/
/*Given a list/array ARR with size N. You have to find out all the elements which sum up to give no. K*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int a[10] = {5,2,1,4,3};
    int k = 12;
    sort(a,a+5);
    for(int i = 0 ; i < 5 ; i++){

        int x = a[i] + a[i+1];
        for(int j = i+2 ; j < 5 ; j++){

            if ((x + a[j]) == k)
            {
                
                cout << a[i] << "," << a[i + 1] << "," << a[j] ;                

            }
            

        }

    }

}