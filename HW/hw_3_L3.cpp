//finding sum of "n" even integers.
#include<iostream>
using namespace std;
int main(){
    int sum=0,i=0,n;
    cout<<"Enter a number :";
    cin>>n;
    while(i<=n){
        if(i%2==0){
            sum=sum+i;
        }
        i++;
    }
    cout<<sum;
}