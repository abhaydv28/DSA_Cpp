#include<iostream>
using namespace std;
int main(){

    int cp,sp;
    cout<<"Enter the cost price :";
    cin>>cp;
      cout<<"Enter the selling price :";
        cin>>sp;
        if(sp>cp){


            cout<<"Profit = "<<sp-cp;

        }

if(sp<cp){

    cout<<"loss = "<<cp-sp;
}


        if(sp==cp){


            cout<<"NO loss no profit";


}
}