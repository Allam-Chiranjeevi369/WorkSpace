#include<iostream>
using namespace std;

int main(){

    int n;
    cout << " Enter a number : ";
    cin >> n;
    int i = n;
    while(i >= 3){

        for(int j = 2 ; j < i ;){

            if(i % j != 0){

                cout << i;
                j++;

            }
            else{

                i--;
                j = 2;
                break;

            }

        }

    }

}