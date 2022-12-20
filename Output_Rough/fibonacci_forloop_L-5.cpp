//fibonacci series using for loops
#include<iostream>
using namespace std;
int main(){
    int n,i,temp=0,p=0,x=1;
    cout<<"Enter the limit:";
    cin>>n;
    cout<<"\n";
    for(i=0;i<=n;i++){
        cout<<" "<<p;
        temp=p+x;
        p=x;
        x=temp;
    }
}