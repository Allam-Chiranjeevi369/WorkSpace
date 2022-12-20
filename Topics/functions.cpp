#include<bits/stdc++.h>
// #include<iostream>
using namespace std;

// POWER FUNCTION


/*int power(int a, int b){
    
    int i, ans = 1;
    for(i = 1;i <= b;i++){
        ans = a * ans;
    }
    return ans;

}

int main(){

    int x, y;
    cout << "Enter two numbers:";
    cin >> x >> y;

    cout << power(x,y);

}*/

/*******nCr FUNCTION*******/


//FACTORIAL FUNTION

int fact(int n){

    int m = 1;

    for(int i = n;i >= 1;i--){

        m = n * m;
        n--;

    } return m;

}

//nCr FUNCTION

int nCr(int a, int b){

    int c = a - b, x;
    
    x = (fact(a)) / ((fact(b))*fact(c));

    return x;

}

int main(){

    int a,b;
    cout << "Enter the combination you want:";
    cin >> a;
    cout << "C";
    cin >> b;

    cout << "/n Value of " << a << "C" << b << " is:" << nCr(a,b);

}