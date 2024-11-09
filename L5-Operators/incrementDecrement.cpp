#include<iostream>
using namespace std;

int main(){
    int a = 7;
    cout<<a++<<endl;
    //-->o/p: 7
//first it will print the value then increase it by 1.

    cout<<++a<<endl;//--->o/p:9
    // first it will increase the value by one then print it

    int b=5;
    int c=b++;
    // first asssignment to "c" then decrement 
    cout<<b<<endl;
    cout<<c<<endl;

    int d=9;
    int e= ++d;
    cout<<d<<endl;
    cout<<e<<endl;






    
    return 0;

}