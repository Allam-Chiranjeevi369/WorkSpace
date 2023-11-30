/*COMPLIMENT OF BASE 10 INTEGER*/

/*The complement of an integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation*/

#include<iostream>
#include<math.h>
using namespace std;

main(){

    int n;
    cout << "Enter an integer:";
    cin >> n;

    float a = 0; 
    int i = 0 ;
    while(n != 0){

        int bit = (n & 1);
        // int x = bit ^ 1;
        // a = (x * pow(2, i)) + a;
        // n = n >> 1;
        // i++;
        if (bit == 0){

            a = pow(2, i) + a;

        }
        n = n >> 1;
        i++;
    }
    cout << a;

}

                        /*   OR   */
// int main(){

//     int m, n = m ;
//     cout << "Enter an integer:";
//     cin >> m;
    
//     int mask = 0000000000;
//     while (n != 0)
//     {
//         mask = (mask << 1) | 1;
//         n = n >> 1;
//     }
//     int a = (~m) & mask;
//     cout << a;

// }