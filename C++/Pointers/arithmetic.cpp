#include<iostream>
using namespace std;
int main(){

// int x = 7;
// int*ptr = &x;
// cout<<ptr<<endl;//0x61ff08
// ptr = ptr + 1;
// cout<<ptr<<endl;//0x61ff0c

int x = 4;
int* ptr = &x;
cout<<*ptr<<endl;
//  this is wrong ptr = ptr + 1;

*ptr = *ptr + 1;
cout<<*ptr;


}