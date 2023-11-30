// Finding square root of a number using binary search
#include<iostream>
using namespace std;

int SqrRoot(int n){

    int start = 0, end = (n/2),ans = 0;
    while(start < end){

        int mid = start + (end - start)/2;
        
        if((mid*mid) < n){
            ans = mid;
            start = mid + 1;
        }
        else if((mid*mid) > n)
            end = mid - 1;
            
        else 
            return mid;

    }
    return ans;

}

int main(){

    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << SqrRoot(n);

}