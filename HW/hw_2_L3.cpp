// input=ch,if 'ch' lies between 'a'-'z' print lowercase,
// if 'ch' lies between 'A'-'Z' print uppercase, 
// if 'ch' lies between '0'-'9' print numric.
#include<iostream>
using namespace std;
main(){
    char ch;
    cout<<"Enter a value:";
    cin>>ch;
    if(ch>=97&&ch<=122){
        cout<<"Lowercase";
    }
    else if(ch>=65&&ch<=90){
        cout<<"Uppercase";
    }
    else if(ch>=48&&ch<=57){
        cout<<"numeric";
    }
}