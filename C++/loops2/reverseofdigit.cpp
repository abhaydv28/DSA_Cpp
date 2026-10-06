#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int rev = 0;
    int lastdigit = 0;
    while (n > 0)
    {
        rev = rev * 10;
        lastdigit = n % 10;
        rev = lastdigit + rev;
        n = n / 10;
    }
    cout << rev;
}