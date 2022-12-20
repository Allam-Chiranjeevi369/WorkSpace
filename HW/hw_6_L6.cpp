#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cout << "Enter an negative integer:";
    cin >> n;

    unsigned long long int i = 0, a = 0;
    if(n < 0){
        n = pow(2, 16) + n;
    }    
    cout << n << "\n";
    while (n)
    {
        
        int bit = n & 1;
        a = (pow(10, i) * bit) + a;
        n = n >> 1;
        i++;
        cout << a << "\n";

    }
    // cout << a ;

}