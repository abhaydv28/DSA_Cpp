#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char op;
    // cout<<"Enter the problem : ";
    // cin>>a>>op>>b;//sabse pahle a input hoga then op then b
    // if(op=='+'){
    //     cout<<a+b;
    // }
    // if(op=='-'){
    //     cout<<a-b;
    // }
    // if(op=='*'){
    //     cout<<a*b;
    // }
    // if(op=='/'){
    //     cout<<a/b;
    // }
    cout << "Enter the problem ";
     cin >> a >> op >> b;
    switch (op)
    {

    case '+':
        cout << a + b;
        break;
        

        case '-':
            cout << a - b;
        break;
        

        case '*':
            cout << a * b;
        break;
       

        case '/':
            cout << a / b;
        break;
    }
}
