/*PROGRAM TO CONVERT BITS TO DECIMAL*/
#include<iostream>
#include<math.h>
using namespace std;


int main(){
    
    int n;
    cout << "Enter a bit value:";
    cin >> n;

    int i = 0;
    float a = 0;
    while (n != 0)
    {
        int bit = n % 10;
        a = (bit * pow(2, i)) + a;
        n = n / 10;
        i++;
    }
    cout << "Answer is :" << a;

}