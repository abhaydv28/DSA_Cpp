#include <iostream>
using namespace std;
int main()
{

    int a, b, c;
    cout << "Enter 1st side : ";
    cin >> a; 
    cout << "Enter 2nd side : ";
    cin >> b;  
    cout << "Enter 3rd side : ";
    cin >> c;



    // if ((a + b > c))
    // {

    //     cout << "Side of triangle is valid";
    // }
    // else if (b + c > a)
    // {
    //     cout << "Side of triangle is valid";
    // }
    // else if (c + a > b)
    // {

    //     cout << "Side of triangle is valid";
    // }
    // else{
    //     cout<<"Side of trianle is not valid";
    // }


    if((a+b>c) && (b+c>a) && (c+a>b)){
        cout<<"they can be the side of traingle";
    }

    else{
        cout<<"they can not be the side of triangle";
    }
}
