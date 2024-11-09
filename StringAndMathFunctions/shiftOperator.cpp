#include<iostream>
using namespace std;
int main(){
    int a=10;
    //left shift operator
    int b=a<<1;
    int c=a<<2;
    int d=a<<3;
    cout<<"b:"<<b<<endl;
    cout<<"c:"<<c<<endl;
    cout<<"d:"<<d<<endl;

    //right shift operator

    int e=a>>1;
    int f=a>>2;
    int g=a>>3;
     cout<<"e:"<<e<<endl;
     cout<<"f:"<<f<<endl;
     cout<<"g:"<<g<<endl;
    return 0;
}