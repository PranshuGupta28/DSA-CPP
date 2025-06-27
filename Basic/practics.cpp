#include <iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[]={1,0,1,1,8,9,45,85,74,45,82,99,154,667474,44654,656};
    int size=16;
    int Maxi=INT_MIN;
    int SecondMaxi=INT_MIN;
     for(int i=0;i<size;i++){
        if(arr[i]> Maxi)
        Maxi=arr[i];
        SecondMaxi<Maxi ;

      // if(arr[i]>SecondMaxi && arr[i]!=Maxi)
      //   SecondMaxi=arr[i];
      }
      // for(int i=0;i<size;i++){
      //   if(arr[i]>SecondMaxi && arr[i]!=Maxi)
      //   SecondMaxi=arr[i];
      // }
      cout<<"Largest no is :"<<Maxi<<endl;
      cout<<"2nd Largest no is :"<<SecondMaxi;
   return 0;
}
