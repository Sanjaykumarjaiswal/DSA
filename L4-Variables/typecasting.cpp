#include<iostream>
using namespace std;

int main(){
    /*Typecasting:

    Widening typecasting
    Narrowing typecasting

    widening typecasting:
      -there is no data loss
      -small sized datatype is being converted to big sized datatype

    Narrowing Typecasting:
      -there is data loss
      -big sized datatype is converted to small sized datatype.

    */

   int a = 7;
   double b=a;
   cout<<"a : "<<a<<endl;
   cout<<"b : "<<b<<endl;

   double c=7.8;
   int d=(int) c;
   cout<<"c : "<<c<<endl;
   cout<<"d : "<<d<<endl;

   //conversion to string:
   string s1=to_string(a);
   cout<<s1<<endl;

   //string to integer conversion
   string f="12";
   string g="1";
   int h=stoi(f);
   int i=stoi(g);
   cout<<(h+i);

  return 0; 
}