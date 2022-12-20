/*SIMPLE CALCULATER USING SWITCH-CASE STATEMENTS*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,b;
    cout << "Enter two integers:";
    cin >> a >> b;

    char ch;
    cout << "Enter the operation to be performed:";
    cin >> ch;

    switch (ch) // NOTE : We cannot use float or string value 
    {
    case '+':
        cout << "Sum of " << a <<" and " << b << "  is: " << a+b; 
        break;
    
    case '*':
        cout << "Product of " << a <<" and " << b << "  is: " << a*b;
        break;
    
    case '/':
        cout << "Remainder of " << a <<" and " << b << "  is: " << a/b;
        break;

    case '-':
        cout << "Difference of " << a <<" and " << b << "  is: " << a-b;
        break;

    default:
        cout << "Wrong input";
        break;
    }

}
