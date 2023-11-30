/*SORTING ARRAY OF 0 & 1*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int a[10] = {1,1,0,0,0,1,1,0};
    int i = 0, j = 7;
    while((i != j) && (i < j)){

        if(a[i] > a[j]){

            swap(a[i],a[j]);
            i++; j--;

        }
        else if (a[i] < a[j]){
           
           j--; i++;

        }
        else if (a[i] == a[j] == 1)
        {
            
            j--;

        }else{

            i++;

        }
        
    }
    for (int i = 0; i < 8; i++)
    {
        
        cout << a[i] << " ";

    }
    

}