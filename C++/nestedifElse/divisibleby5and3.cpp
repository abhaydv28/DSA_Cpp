#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    if (n % 5 == 0)
    {
        if (n % 3 == 0)
        {

            cout << "The number is divisible by 5 and 3 both";
        }

        cout<<"Not matching condition";
    }

    else
    {

        cout << "Not matching condition";
    }
}
