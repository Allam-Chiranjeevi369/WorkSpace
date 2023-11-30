/*PAIR SUM*/
/*You are given an array Arr of size N and an integer S. you've to return the list of all pairs of elements  such that their sum is equal to S*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    int a[10] = {2,-3,3,-2};
    int s = 0;
    for (int i = 0 ; i < 4 ; i++){

       for (int j = i + 1 ; j < 4 ; j++)
       {
        
            if((a[i] + a[j]) == s){

                if(a[i] >= a[j]){

                    cout << a[j] << " , " << a[i] << "\n";

                }else{

                    cout << a[i] << " , " << a[j] << "\n";

                }

            }

       }
       
    }

}