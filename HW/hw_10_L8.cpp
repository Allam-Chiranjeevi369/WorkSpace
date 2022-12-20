/*FIBONACCI SERIES USING FUNCTIONS*/

#include<bits/stdc++.h>
using namespace std;

int fib(int n){

    int i = 0, p = 0, c = 1, t = 0;
    while(i <= n){

        cout << p << " ";
        t = p + c;
        p = c;
        c = t;
        i++;

    }

}

int main(){

    int n;
    cout << "Enter an integer : ";
    cin >> n;
    cout << "Fibonacci series : ";
    fib(n);

}