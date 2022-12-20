/*REVERSING INTEGER*/

/*Given a signed 32 bit integer x, return with it's digtis reversed. if reversing x causes the value to go outside the signed 32-bit range [-2^32,2^32-1], then return 0 */


#include<bits/stdc++.h>
using namespace std;

main(){

    int x;
    cout << "Enter an integer:";
    cin >> x;

    if( (x <= (INT_MAX/10)) && (x >= (INT_MIN/10))){

        int i = 0, a = 0;

        while(x != 0){

            int digit = x%10;
            a = a * 10 + digit;
            x = x/10;
            i++;

        }
        cout << a;
    }
    else{

        return(0);

    }

}