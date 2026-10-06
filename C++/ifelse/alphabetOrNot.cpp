#include<iostream>
using namespace std;
int main(){
char ch;
cout<<"Enter the character";
cin>>ch;
//a,b,c,A,B,C,!,@,#,&
// a to z --> 97  to 122
// A to Z ---> 65 TO 90

int ascii = (int)ch;
if(ascii>=97 && ascii<=122){

    cout<<"The character is lower case alphabet";
}


if(ascii>=65 && ascii<=90){

    cout<<"The character is upper case alphabet";
}




}