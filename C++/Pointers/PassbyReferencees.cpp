// #include<iostream>
// using namespace std;


// void swap(int a ,int b){

//     int temp = a;
// }
// int main(){

// int a,b;
// int temp;
// cout<<"Enter the number : ";
// cin>>a;
// cin>>b;

//  temp = a;
//  a = b;
// b = temp;

// }




// #include<iostream>
// using namespace std;
// int main(){

// int a;
// int b;
// int temp;
 
// cout<<"Enter first  number : ";
// cin>>a;
// cout<<"Enter second number : ";
// cin>>b;


// temp = a;
// a = b;
// b = temp;

// }



// #include<iostream>
// using namespace std;

// void swap( int* x , int* y){

// int temp = *x;
// *x = *y;
// *y = temp;
// return ;

// }

// int main(){

// int a = 5;
// int b = 6;
// swap(&a,&b);
// cout<<a<<" "<<b; 


// }




#include<iostream>
using namespace std;

void swap(int* x,int*y){

int temp = *x;
*x = *y;
*y = temp;


return;
}

int main(){

int a = 5;
int b = 6;
swap(&a,&b);
cout<<a<<" "<<b;

}