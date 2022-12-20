#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    /*FOR REVERSE NUMBER TRIANGLE*/
    
    // int i=1;
    // while(i<=n){
    //     int j=i;
    //     while(j<=n){
    //         cout<<j;
    //         j++;
    //     }cout<<"\n";
    //     i++;
    //}

    /*FOR RIGHT NUMBER TRIANGLE*/

     int i=1;
    while(i<=n){
        int j=0;
        while(j<i){
            cout<<" "<<(i-j)<<" ";
            j++;
        }cout<<"\n";
        i++;
    }
}