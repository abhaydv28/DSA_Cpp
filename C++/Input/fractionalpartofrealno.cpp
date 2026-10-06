#include<iostream>
using namespace std;
int main(){

float x;
cout<<"Enter float value :";
cin>>x; //9.5
 

int y;
y = (int)x;//9

if(y<0) y = y - 1;
float z = (float)y;//9
x = x - z;
cout<<x;





}