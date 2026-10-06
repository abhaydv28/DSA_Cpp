#include <iostream>
using namespace std;
int main()
{
    int n;
    int a = 5;
   
    cout << "Enter number of rows";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if(i%2!=0) a = 1;//odd row number
        else a = 0;//row  number even
        for (int j = 1; j <= i; j++)
        {
            cout << a;
            if(a==1) a = 0;
            else a = 1;
        }
        cout << endl;
    }
}