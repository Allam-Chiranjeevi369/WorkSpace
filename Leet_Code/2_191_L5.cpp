/*NUMBER OF 1 BITS*/ /*HAMMING WEIGHT*/

//Write a function that takes an unsigned integer and returns the number of '1' bits it has (also known as hamming weight).

#include<iostream>
using namespace std;
int main(){
    unsigned int n,c=0;
    cout<<"Enter a number :";
    cin>>n;
    while(n>0){
        if(n&1){
            c=c+1;
        }
        n = n>>1;
        
    }
    cout<<"\n"<<"number of 1's :"<<c;
}
