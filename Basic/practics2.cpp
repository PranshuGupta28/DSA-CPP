#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter no of row";
    cin>>n;
for(int r=0;r<n;r++){
    for(int c=0;c<n-r;c++){
        cout<<" ";
    }
    for(int i=0;i<2*r+1;i++){
        if (i==0 || i==2*r){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
        cout<<endl;

}
for(int r=0;r<n;r++){
    for(int c=0;c<r;c++){
        cout<<" ";
}
for(int i=0;i<2*n-2*r-1;i++){
        if (i==0 || i==2*n-2*r-2){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
        
}
        cout<<endl;
}
}