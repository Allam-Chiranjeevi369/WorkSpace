#include<iostream>
using namespace std;
int main(){
    string a= "hello world";
    int size = sizeof(a);
    cout<<"hello world\n";
    for(int i=0;i<=10;i++){
        cout<< a <<endl;
    }
    cout<< size;
}