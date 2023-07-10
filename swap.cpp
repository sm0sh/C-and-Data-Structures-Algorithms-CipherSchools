#include<iostream>
using namespace std;

void PrintHi()  // No parameters are required
{
    cout<<"Hi"<<endl;
    return;
}

int sum(int a, int b)
{
    int d;

    d = a+b;   //a+b will result in 10 therefore, the value of c over here is 10
    cout<<"The value of c is"<<" "<<c<<endl;


    return c;
}


int main()
{
    PrintHi();  // First calling the printHi function
    
    int a,b;
    int c;

    a=4;
    b=6;
    c=75;   // The value of c over here in the main function is 75

    int d;
    d = sum(a,b);

    //cout<<"The sum is equal to "<<d<<" "<<"The value of a is"<<a;  //
    cout<<"The value of c is"<<" "<<c;

    return 0;
}