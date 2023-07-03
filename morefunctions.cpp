/*int compare(int a,int b)       // compares 2 integers and returns the greater one
{
    /*if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }*/

    /*if(a==5)
    {
        return 1;
    }
    return 0;
}*/

#include<iostream>
using namespace std;

int sum(int a,int b)
{
    int c;

    c = a+b;
   
    return c;
}


int main()
{
    int a,b,c;

    a=3;
    b=5;

    c = sum(a,b);

    cout<<c;

    return 0;
}