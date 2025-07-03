#include <iostream>
using namespace std;
 
 void CheckPrime( int n){
    for(int i=2;i<n;i++)

        if(n%i==0)
      cout<<"Prime";
    else {cout<<"Non Prime";}
 }

int main() {
    int n ;
    cout<<"Enter the Num: ";
    cin>>n;
     CheckPrime (n);
         return 0;
    }