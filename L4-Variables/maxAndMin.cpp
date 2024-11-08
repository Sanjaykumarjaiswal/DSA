// #include<iostream>
// #include<climit>
// using namespace std;
// int main(){
//     cout<<INT_MAX<<endl;
//     cout<<INT_MIN<<endl;
//     cout<<CHAR_MAX<<endl;
//     cout<<CHAR_MIN<<endl;
//     cout<<FLT_MAX<<endl;
//     cout<<FLT_MIN<<endl;

// }

#include<iostream>
#include<climits>  // for INT_MAX, INT_MIN, CHAR_MAX, CHAR_MIN
#include<cfloat>   // for FLT_MAX, FLT_MIN
using namespace std;

int main() {
    cout << "INT_MAX: " << INT_MAX << endl;
    cout << "INT_MIN: " << INT_MIN << endl;
    cout << "CHAR_MAX: " << CHAR_MAX << endl;
    cout << "CHAR_MIN: " << CHAR_MIN << endl;
    cout << "FLT_MAX: " << FLT_MAX << endl;
    cout << "FLT_MIN: " << FLT_MIN << endl;

    cout<<UCHAR_MAX<<endl;
    // cout<<UCHAR_MIN<<endl;
    // It is undefined

    return 0;
} 