#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the numbers of rows";
    cin>>n;

   for(int i = 1;i<=n;i++){
    //first i odd numbers
    for(int j=1;j<=2*i-1; j=j+2){
        cout<<j;
    }
    cout<<endl;
    
   }
     
}