#include<iostream>
using namespace std;
int main(){

int a,b;
int temp;
cout<<"Enter the number : ";
cin>>a;
cin>>b;

// temp = a;
// a = b;
// b = temp;

a = a + b;
b= a - b;
a= a-b;

cout<<a<<" "<<b;


}