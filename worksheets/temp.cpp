#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
void accept(char str[],int n){
   cout<<"enter a word or line:  ";
   cin.getline(str,n,'#');
}

 void write(char str[],ofstream &out){
    if(out.is_open()){
      out<<str;
    }
    else{
      cout<<"error!file doesn't exist";
    }
 }
 int main(){
  int n;
  cout<<"enter lenght of string: ";
  cin>>n;
     char x[n];
     ofstream out;
     out.open("file,txt",ios::out);
     accept(x,n);
     write(x,out);
      string x;
      x>>out;
      cout<<out;
      return 0;

 }
