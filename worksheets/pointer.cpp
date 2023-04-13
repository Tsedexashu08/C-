#include<iostream>
using namespace std;

 /*double ToFarenhiet(){
    double Tf;
    cout<<"enter temprature: ";
    cin>>Tf;
    return ((5.0/9.0)*(Tf-32));
 }*/
 int main(){
      /*double x=ToFarenhiet();
      cout<<x<<endl;*/
      int* g,p
      int e,*A=new int,*t,*h,a=4,b=6;//"new" key word is used to declare nameless variables & point to that variable.
      //they are dynamic variables(created and destroyed while program is running).
      g=&a;
      cout<<*g;
      delete g;
      t=&a;
      h=t;
     cout<<"enter pointer value: ";
      cin>>*A ;

     cout<<"t points to var a with value of: "<<*t<<'\n';
         cout<<"h points to var b with value of: "<<*h<<'\n';
         cout<<t<<'\t'<<h<<endl;
         cout<<*A;


 }
