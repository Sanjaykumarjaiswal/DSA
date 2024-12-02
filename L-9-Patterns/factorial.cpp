//calculate factorial using for loop

#include<iostream>
using namespace std;
int main(){
    int multiply=1;
    int n;
    cout<<"enter the number for factorial: "<<endl;
    cin>>n;
    for(int i=n;i>=1;i--){
        multiply=multiply*i;
    }
    cout<<multiply<<endl;
    return 0;
}