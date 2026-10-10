#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Ente the number of students :";
  cin>>n;
    int marks[n];
    cout<<"Enter the marks of the students : ";

    //Taking input
    for(int i = 0 ; i<=n-1;i++){
        cin>>marks[i];

    }

    // Output 

    for(int i = 0;i<=n-1;i++){
        if(marks[i]<=35){
            cout<<i<<" ";
        }
    }
}