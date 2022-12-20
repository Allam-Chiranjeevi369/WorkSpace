/*SUBSTRACT THE PRODUCT AND SUM OF DIGITS OF AN INTEGER*/

#include<iostream>
using namespace std;
int main(){
    int pro=1,sum=0,i=0,n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"\n";
    while(n!=0){
            i=n%10;
            pro=pro*i;
            sum=sum+i;
            n=n/10;
    }
    cout<<"Result:"<<pro-sum;

}