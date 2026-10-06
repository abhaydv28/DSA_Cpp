
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 100;

//     // 100, 97, 94, 91, 88, ...... 4, 1 ---> 34 terms
//     for (int i = 1; i <= 34; i++)
//     {
//         cout << a << " ";
//         a = a - 3;
//     }

//     return 0;
// }



//print this AP 100,97,93....only positive term.....
#include <iostream>
using namespace std;
int main()
{

    int a = 100;
    // 100,97,94,91,88,........
    for (int i = 1; i <= 34; i++)
    {
        cout << a << " ";
        a = a - 3;
    }
}
