#include <iostream>
using namespace std;
int main () {
int a,b,c ;
cout<<"enter a : ";
cin>>a;
cout<<"enter b : ";
cin>>b;
cout<<"enter c : ";
cin>>c;

if (a+b >c && b+c>a && a+c>b){
    cout<<"Side Of Triangle";
}
else {
     cout<<"NOt Side Of Triangle";

}

}