#include<iostream>
#include<math.h>
using namespace std;

int main(){

     int n;
     cout << "Enter an integer:";
     cin >> n;

     float a = 0;
     int i = 0;
     while (n != 0)
     {
        
        int digit = n%10;
        a = (a * pow(10, i)) + digit;
        n = n/10;
        i++;

     }
     cout << "Your answer is :" << a;

}