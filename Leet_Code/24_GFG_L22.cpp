// RETURN MAXIMUM OCCURING CHARACTER IN A INPUT STRING

#include<bits/stdc++.h>
using namespace std;

int Maxi(int a[]){

    int max = -1, store;
    for(int i = 0 ; i < 26 ; i++){

        if(a[i] > max){
            max = a[i];
            store = i;
        }

    }
    return store;

}

int MaxCharacter(char word[]){

    int a[26] = {0};
    for(int i = 0 ; i < 26 ; i++){

        a[word[i] - 'a'] = a[word[i] - 'a'] + 1;

    }
    char ch = Maxi(a) + 'a';
    cout << char(ch); // ASCII TO CHARACTER

}

int main(){

    char word[20];
    cout << "Enter a word : ";
    cin >> word; 
    MaxCharacter(word);

}