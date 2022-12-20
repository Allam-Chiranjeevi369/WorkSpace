//Program to find weather given number is prime or not prime.
#include<iostream>
using namespace std;
int main(){
    int n,i=2;
    cout<<"Enter a number:";
    cin>>n;
    if(n==2){
        cout << "prime number";
        exit(0);
    }
    while (i<n)
    {
        if(n%i==0){
            cout<<"Not a prime number!!";
            exit(0);

        }else{
            i++;
        }
    }cout<< "Prime number";
    
}