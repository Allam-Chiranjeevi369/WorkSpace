/*DUPLICATE IN ARRAY*/

/*You are given an array "ARR" of size 'N' containing each number between 1 and N - 1 at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int a[100] = {5,2,5,4,3,1,6}, j = 1;
    sort(a, a+7);
    for(int i = 0 ; i < 7 ; i++){

        if ((a[i] ^ j) != 0)
        {
            cout << a[i];
            break;
        }
        j++;
        // j = j ^ a[i];
        
    }
    // for (int i = 0; i < 7; i++)
    // {
    //     j = j ^ i;
        
    // }
    // cout << j ;

}