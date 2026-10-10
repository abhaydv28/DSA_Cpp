#include <iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter thr size of array : ";
cin>>n;
int arr[n];
//input
for(int i = 0 ; i<= n-1;i++){
cin>>arr[i];

}
int x;
cout<<"Enter the number x which is used to compare :";
cin>>x;
int count = 0;
for(int i = 0;i<=n-1;i++){

    if( arr[i]> x) {
        count++;
    }


}
cout<<"total no of greater element"<<" "<<count;



}


