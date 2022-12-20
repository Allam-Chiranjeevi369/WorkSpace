//Printing count from 1-n
#include<iostream>
using namespace std;
int main(){
    int n,i,sum=0;
    cout << "Enter number :";
    cin>>n;
    for(i=0;i<=n;i++){
        sum=sum+i;
        cout<<"\n"<<sum<<"\n";
    }
    cout<<"Total ="<<sum;
}
 