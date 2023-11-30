#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, digit = 0;
    cin >> n;
    
    for(int i = 0 ; i != 0 ; i++){

        int bit = n&1;
        digit = (digit*pow(10,i)) + bit;
        n = n >> 1;
        cout << digit;

    }
    // cout << digit;
}