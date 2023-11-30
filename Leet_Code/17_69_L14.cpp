/* FIND SQRT(x) USING BINARY SEARCH */

#include<bits/stdc++.h>
using namespace std;

int SqRt(int x){

    int start = 0, end = x/2, mid, ans = 0 ;
    while(start < end){

        mid = start + (end - start) / 2;
        int square = mid * mid;
        if ( square == x )
        {
    
            ans = mid;
    
        }
        else if( square > x ){

            end = mid - 1; 

        }
        else if( square < x ){

            start = start + 1;
            ans = start;

        }

    }
    return ans;

}
int main(){

    int x;
    cout << "Enter an integer : ";
    cin >> x;
    cout << " Square root of " << x << " is : " << SqRt(x);

}