#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
//     if((n%5==0 || n%3==0) && n%15!=0){

//         cout<<"The number is divisible by 5 or 3";

//     }//Or n%15==0
// else{
//     cout<<"The number is divisible bt 5 or 3 but not 15";
// }




if(n%5==0 || n%3==0){

    if(n%15!=0){
        cout<<"The number is div by 5 or 3 but not 15";
    }

    else{
        cout<<"Not matching condition";
    }
}
}


