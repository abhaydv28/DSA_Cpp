#include <iostream>
using namespace std;
int main()
{

    int x = 122;
    int* p = &x;
    cout<<x<<endl;
    //cout<<p;//0x61ff08  print add of x without star
   // cout<<*p;//with star print value of x
  *p = 6;
  cout<<x;

}