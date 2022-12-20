/*AP QUESTION (3*N+7) FIND nTH TERM*/

#include<iostream>
using namespace std;


int ap(int n){

    int x = 3*n+7;
    return(x);

}


int main(){

    int n;
    cout << "Enter an integer : ";
    cin >> n;
    cout << n << "th term of progression (3n+7) is : " << ap(n);

}