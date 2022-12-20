/*COUNTING NUMBER OF SETBITS OF GIVEN TWO NUMBERS*/

#include<bits/stdc++.h>
using namespace std;

int setBit(int n){

    if(n == 0){
        return(0);
    }

    int count = 0;
    while(n != 0){

        int bit = n&1;
        if (bit == 1){
            count = count + 1;
        }
        n = n >> 1;

    }
    return(count);

}


int main(){

    int a, b;
    cout << "Enter two integers : ";
    cin >> a >> b;
    cout << "Total number of setbits in " << a << " and " << b << " are : " << setBit(a) + setBit(b);

}