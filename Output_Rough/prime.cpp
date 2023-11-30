#include <bits/stdc++.h>
using namespace std;

int prime(int n){    

    if(n == 1)
        cout << 1 << " " << 0;
        
    if(n == 0)
        cout << 0;

    for(int j = n ; j > 1 ; j--){

        if(j == 2)
            cout << 2 << " " << 1 << " " << 0;

        for(int i = j-1 ; i > 1 ; i-- ){

                if((j % i) == 0)
                    break;
                
                if(i == 2)
                    cout << j << " ";
            
        }    

    } 

}

int main(){

    int n;
    cout << "Enter a number : ";
    cin >> n;
    prime(n);

}