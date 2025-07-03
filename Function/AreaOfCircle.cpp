#include <iostream>
using namespace std;
 
 float AreaOfCircle( float r){
    return 3.14*r*r;
 }

int main() {
    float r;
    cout<<"Enter radius Of Circle: ";
    cin>>r;
  float area = AreaOfCircle(r);
    cout<<"Area of Circle: "<<area;
    
    }
