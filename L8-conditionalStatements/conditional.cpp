#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the value of a,b,c"<<endl;
    cin>>a>>b>>c;
    cout<<a<<b<<c<<endl;



    // int a=4,b=5,c=6;
    if(a>b){
        if(a>c){
            cout<<"a is the largest"<<endl;
        }
        else{
            cout<<"c is the largest"<<endl;
        }
    }
    else if(b>c){
        if(b>a){
            cout<<"b is the largest"<<endl;
        }
        else{
            cout<<"a is the largest"<<endl;
        }
    }
    else{
        cout<<"c is the largest"<<endl;
    }
    return 0;
}
