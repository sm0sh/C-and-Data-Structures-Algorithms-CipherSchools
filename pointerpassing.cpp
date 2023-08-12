#include<iostream>
using namespace std;

void swap(int *x, int *y) 
{
    int c;      // x and y are the pointers to a,b --> they store the address of a and b
                
    c = *x;          // To get a,b from x and y we need to dereference the pointer
    *x = *y;
    *y = c;
    

    cout<<"The swapping is complete"<<endl;

}

int main()
{
    int a,b;

    a=3;
    b=4;

    /* int c;
    
    c=a;
    a=b;
    b=c; */

    swap(&a,&b);   // passing the address of a and b

    cout<<"The values of a and b after the swap are : "<<a<<" "<<b;

    return 0;
}