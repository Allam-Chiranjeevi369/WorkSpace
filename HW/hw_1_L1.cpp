#include<iostream>
using namespace std;
main(){
    //code for finding weather its a triangle or not
    int a,b,c;
    cout << "enter dimensions of triangle(A,B,C):\n";
    cin>> a>>b>>c;
    if(a+b<=c||b+c<=a||c+a<=b){
        cout<< "its not a triangle";
    }else{
        cout<<"it is a triangle";
    }
}