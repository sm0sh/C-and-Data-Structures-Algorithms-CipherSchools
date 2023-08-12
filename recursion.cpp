#include<iostream>
using namespace std;

int fib(int input)  // the point at which you want the fibonacci sequence to exist
{   

    // BASE CASE, THAT IS THE POINT WHERE THE RECURSION STOPS, AND IS REALLY IMPORTANT
    
    if(input==0 || input ==1)
    {
        return 1;
    }
    
    int Final_answer;

    Final_answer = fib(input-1)+fib(input-2);  // For which we have used the same function again and again
    return Final_answer;
}


int main()
{
    int input;

    cout<<"Enter the number you want to find the fibonacci series to: ";
    cin>>input;

    cout<<fib(input);

    return 0;
}