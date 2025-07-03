#include <iostream>
using namespace std;
 
 void findevenORodd( int r){
    if(r%2==0){
      cout<<"Even";
}
    else {cout<<"Odd";}
 }

int main() {
    int n ;
    cout<<"Enter the Num: ";
    cin>>n;
     findevenORodd (n);
         return 0;
    }