#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
     for(int r=0;r<n;r++){
        for(int c =0;c<n-r+3;c++){
        cout<<"*";}
         for(int i=0;i<2*r+1;i++)
         if ( i%2==0){
             cout<<r+1;}
         else
         {
         cout<<"*"; }
    for(int c =0;c<n-r+3;c++){
        cout<<"*";}

      cout<<endl;
     }
}

