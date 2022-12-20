/*TO INITIALIZE SAME NUMBER TO WHOLE ARRAY*/

#include<iostream>
using namespace std;

int main(){

    int array[100];

    fill_n(array,100,100); // COMMAND TO DO THAT JOB

    for(int i = 0; i < 100 ; i++){

        cout << array[i] << "\n";

    }

}