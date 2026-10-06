// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     for (int i = 1; i <= 3; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for (int i = 1; i <= 4; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// void greeting(){

// }
// int main()
// {

//    }

#include <iostream>
using namespace std;
void StarTriangle(int x)
{
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

    int main()
    {

     // function call
        StarTriangle(3);
        StarTriangle(4);
        StarTriangle(5);
    }
