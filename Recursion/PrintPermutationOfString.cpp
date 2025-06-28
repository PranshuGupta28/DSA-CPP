#include<iostream>
using namespace std;

void Printpermutation(string&str , int i){
    //Base case
    if(i>=str.length()){
        cout<<str<<" ";
    return;
}

    //swaping

    for (int j=i;j<str.length();j++){
         swap(str[i],str[j]);

//Recusion call
         Printpermutation(str ,i+1);
//BackTracking

         swap(str[i],str[j]);
         
        }
}

int main (){
    string str ="abc";
    int i=0;
    Printpermutation(str ,i);
}
