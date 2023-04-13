#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
void accept(char str[],int n){
   cout<<"enter a word or line:  ";
   cin.getline(str,n,'.');//accepts string till fullstop is encountered.
}//acccepts string.
void write(char str[],ofstream &out){
    if(out.is_open()){
      out<<str;
    out.close();
    }
    else{
      cout<<"error!file doesn't exist";
    }
 }//writes the string into a file.
void count(int &v_count,int &c_count,ofstream &out){
      ifstream in;
      in.open("file.txt",ios::in);
      char x[1000];
      if(in.is_open()){
    while(!in.eof()){
      in.getline(x,1000,'.');}}
for(int i = 0; x[i]!='\0'; ++i)
    {if(x[i]=='a' || x[i]=='e' || x[i]=='i' ||
           x[i]=='o' || x[i]=='u' || x[i]=='A' ||
           x[i]=='E' || x[i]=='I' || x[i]=='O' ||
           x[i]=='U'){
            ++v_count;
           }
       else{
        ++c_count;
       }}}//counts the number of vowels and consonants in the file.
 void copy(int vcount,int ccount,char x[],ofstream &result){
      if(result.is_open()){
        result<<"the string is: "<<x<<endl;
        result<<"the number of vowels is: "<<vcount<<endl;
        result<<"the number of constants is: "<<ccount<<endl;
      }else{
        cout<<"error opening file!";
      }
 }
 void display(ifstream &result){
     result.open("result.txt",ios::in);
     char x[1000];
     while(result.getline(x,1000)){
     cout<<x<<endl;
     }
}//displays the content of the result file.
 int main(){
int n=100,v_count=0,c_count=0;
     char x[n];
     ofstream out;
     out.open("file.txt",ios::out);
     accept(x,n);
     write(x,out);
     count(v_count,c_count,out);
     ofstream result;
     result.open("result.txt",ios::out|ios::app);//writes and appends the text in file every time program is run.
     copy(v_count,c_count,x,result);
     result.close();
     ifstream r;
     display(r);
  return 0;
}
