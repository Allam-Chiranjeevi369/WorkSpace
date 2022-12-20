/*FIBONACCI SERIES USING FOR LOOPS*/

#include<iostream>
using namespace std;
int main(){
    int p=0,n=1,t=0,x;
    cout<<"Enter a number : ";
    cin>>x;
    for(int i=0;i<=x;i++){
        cout<<" "<<p<<" ";
        t=p+n;
        p=n;
        n=t;
        
    }
}