#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;

    if (n >= 0)
    {
        cout << n;
    }
    else
    {

        n = n * (-1); // cout<<-n;
        cout << n;
    }
}