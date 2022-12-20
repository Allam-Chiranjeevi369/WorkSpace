//program for adding sequence of numbers
#include<iostream>
using namespace std;
main(){
    int n,i=0,sum=0;
    cout<<"enter a number:"<<"\n";
    cin>>n;
    while (i<=n)
    {
        sum=sum+i;
        cout<<sum<<" " ;
        i++;
    }
    cout<<"\ntotal sum ="<<sum;
    
}