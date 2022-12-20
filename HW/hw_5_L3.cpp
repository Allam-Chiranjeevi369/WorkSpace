/*PATTERNS USING WHILE LOOPS*/


#include<iostream>
using namespace std;

/*FOR BOX PATTERN*/

// int main(){
//     int n,i=1,j=1;
//     cout<< "Enter number:";
//     cin>>n;
//     while (i<=n)
//     {
//         while(j<=n){
//             cout<<"*";
//             j++;
//         }cout<<"\n";
//         i++;
//         j=1;
//     }
    
// }

/*FOR NUMBER BOX PATTERN*/

// int main(){
//     int n;
//     cout<<"Enter a number:";
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         char ch ='A';
//         while(j<=n){
//             cout<<ch;
//             ch = ch+1;
//             j++;
//         }
//         cout<<"\n";
//         i++;
//     }
// }
 
/*FOR AAA BBB CCC TYPE BOX*/

// int main(){
//     int n,i=1;
//     cout << "Enter a value:";
//     cin>>n;
//     char ch ='A';//for number box int x = 0 or 1;
//     while(i<=n){
//         int j=1;
//         while (j<=n)
//         {
//             cout<<ch;
//             j++;
//         }cout<<"\n";
//         ch=ch+1;
//         i++;
//     }

// }

/*FOR TRIANGLE PATTERN*/


// int main(){
//     int n,i=1;
//     cout << "Enter a value:";
//     cin>>n;
//     // char ch ='A';//for number box int x = 0 or 1;
//     while(i<=n){
//         int j=1;
//         while (j<=i)
//         {
//            // cout<<ch;
//            cout<<"*";
//             j++;
//         }cout<<"\n";
//         //ch=ch+1;
//         i++;
//     }

// }

/*REVERSE LEFT TRIANGLE*/


// int main(){
//     int n;
//     cout << "Enter a value:";
//     cin>>n;
//     // char ch ='A';//for number box int x = 0 or 1;
//     int i=1;
//     while(i<=n){
//         int j=i;
//         while(j<=n){
//             cout<<" * ";
//             j++;
//         }cout<<"\n";
//         i++;
//     }
// }

/*FOR REVERSE RIGHT TRIANGLE*/

int main(){
    int n;
    cout <<"Enter a number :";
    cin>>n;
    int i=1,x=1;
    while(i<=n){
        int j=1;
        while(j<i){
            cout<<" ";
            j++;
        }
        int k=i;
        while(k<=n){
            cout<<" "<<x<<" ";
            k++;
            x++;
        }
        cout<<"\n";
        i++;
    }
}