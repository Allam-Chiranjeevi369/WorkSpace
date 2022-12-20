/*POWER OF TWO*/
/*Given an integer n, return true if it is a power of two. Otherwise, return false.*/


#include<bits/stdc++.h>
using namespace std;

int main(){

    float n, m = n;
    cout << "Enter an integer :";
    cin >> n;

    while(n >= 1){
        m = n;
        n = n/2;

    }
    if(m == 1.00){

        cout << "true";

    }else {

        cout << "false";

    }

}