#include<iostream>
using namespace std;

int sum(int a,int b); // I have declared that a function called sum exists but the body is not formed yet

/*{
    int c;
    c = a+b;


    a = 10;
    b = 11;
   

    return c;
}*/


int main()
{
    int a,b,c;
    a=3;
    b=5;

    cout<<a<<" "<<b<<endl;   // these values are before I call the function "sum"
 
    a=3;
    b=5;

    c = sum(a,b);
    // int sum(int a,int b)  // int a ---> 3, int b -----> 5

    cout<<c<<endl;
    cout<<a<<" "<<b<<endl;   // these values of a,b are after I call the function "sum"

    return 0;
}

int sum(int a, int b)
{
    return a+b;
}