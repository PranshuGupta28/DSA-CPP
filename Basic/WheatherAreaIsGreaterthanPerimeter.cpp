#include <iostream>
using namespace std;
int main () {
int l ,b ,area ,perimeter ;
cout<<"enter length :";
cin>>l;
cout<<"enter breadth :";
cin>>b;
area = l*b;
perimeter = 2*(l+b);

if (area > perimeter){
    cout<<"area is Greater than Perimeter";
}
else {
     cout<<"Perimeter is Greater than Area";

}

}