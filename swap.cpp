#include<iostream>
using namespace std;

void PrintHi()  // No parameters are required
{
    cout<<"Hi"<<endl;
    return;
}

int sum(int a, int b)
{
    int c;

    c = a+b;   //a+b will result in 10 therefore, the value of c over here is 10
    cout<<"The value of c is"<<" "<<c<<endl;


    return c;
}

//    void swap(int a, int b)
      void swap(int &a, int &b) 

      // By including the keyword & After the name of the data type and before the variable name we are able to change the actual parameters  
{
    int c;

    c=a;
    a=b;
    b=c;

    cout<<"The value of a and b after swapping inside the function are: "<<a<<" "<<b<<endl;
    
    return;
}

void fun(int&a, int b)
{
    a=99999;
    b=99999;

    cout<<"The value of a and b inside the fun function are: "<<a<<" "<<b<<endl;

}

int main()
{
    PrintHi();  // First calling the printHi function
    
    int a,b;
    int c;

    a=4;
    b=6;

    cout<<"The value of a and b before passing into the fun function are: "<<a<<" "<<b<<endl;


    //c=75;   // The value of c over here in the main function is 75

    //int d;
    //d = sum(a,b);

    //cout<<"The sum is equal to "<<d<<" "<<"The value of a is"<<a;  //
    //cout<<"The value of c is"<<" "<<c;

    fun(a,b);

    cout<<"The value of a and b after passing into the fun function are: "<<a<<" "<<b; 

    return 0;
}