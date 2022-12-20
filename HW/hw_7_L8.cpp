/*PROGRAM TO COUNT NO. OF 100's, 50's, 20's & 1's PRESENT I  TOTAL AMOUNT USING SWITCH-CASE*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, a;
    cout << "Enter the total amount:";
    cin >> n;

    switch (1)
    {

    case 1:
        a = n/100;
        n = n%100;
        cout << "Requires " << a << " 100 notes\n";
        
    case 2:
        a = n/50;
        n = n%50;
        cout << "Requires " << a << " 50 notes\n";

    case 3:
        a = n/20;
        n = n%20;
        cout << "Requires " << a << " 20 notes\n";

    case 4:
        a = n/1;
        n = n%1;
        cout << "Requires " << a << " 1 coins\n";

    
    default:
        break;
    }

}