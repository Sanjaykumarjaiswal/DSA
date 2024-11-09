#include<iostream>
using namespace std;
int main(){
    char s[6]="hello";
    // cout<<s;
    cout<<s[0]<<endl;
    cout<<s[1]<<endl;
    cout<<s[2]<<endl;
    cout<<s[3]<<endl;
    cout<<s[4]<<endl;
    cout<<s[5]<<endl;
    
    /*
    char s1[];
    s1="hello";
    cout<<s1;

    wont't ren as the size of array is not defined. and also not initialized at the time of declaration.

    it could have run if we would have initialized it at the time when we declared the array even without defining its size.
    */

    return 0;
}