#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
int x;
int y;

    int temp = x;
    x = y;
    y = temp;

    return;
}

int main()
{

    int a = 5;
    int b = 6;
    swap(a, b);
    cout << a << " " << b;
}