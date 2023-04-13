#include<iostream>
using namespace std;
 struct coordinate{
  float x;
  float y;
 };
 struct product{
   string name;
   float price;
   float weight;

 };

int main(){
    product a={"biscut",102,1.2},b={"water",111,1.2},c={"bread",12,1.2},d={"chocolate",100,11.2};
  product s[4]={a,b,c,d};
  for(int i=0;i<4;i++){
    cout<<s[i].name;
    cout<<s[i].price;
    cout<<s[i].weight;
  }

}
