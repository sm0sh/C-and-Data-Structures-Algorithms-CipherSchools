#include<iostream>
using namespace std;

int main()
{
    /*int a,b;
    int c,d;

    cout<<"Input 4 integers a,b,c and d"<<endl;

    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;

    //statement : a>b  c>d


    cout<<(a>b || c>d);

    //C++ interprets true as 1
    //C++ interprets false as 0 


    float a,b;

    cout<<"Give 2 floating point numbers as input"<<endl; 
    cin>>a>>b;

    if(a>0.01 || b>a) // 1 and 0 // The first statement is true and the second statement is false : a=2 and 1.9=b
    {
        cout<<"The condition in if statement is correct"; // WIll only be printed if the is the if condition is true
    }
    else
    {
        cout<<"The condition is false ";
    }

    int marks;

    cout<<"Student, please enter the marks to calculate the grade : ";
    cin>>marks;

    if(marks>90)
    {
        cout<<"A";
    }
    else if(marks>80)
    {
        cout<<"B";
    }
    else if(marks>70)
    {
        cout<<"C";
    }
    else
    {
        cout<<"Pass";
    }

    return 0;

    int a,b,c,d;

    cout<<"Give three integers as input : a,b,c,d"<<endl;
    cin>>a>>b>>c>>d;

    if(a>b && c>d)
    {
        cout<<"haha";   
    }
    else if(a>b && c<d)
    {
        cout<<"hehe";
    }
    else(a<b && c>d);
    {
        cout<<"huhu";
    } */

    int a;

    cout<<"enter an integer a ";
    cin>>a;

    switch(a)// to the condition in this paranthesis // It will first evaluate the value inside the switch paraenthesis 
    {
    case 1:
        cout<<"The value of a is 1 ";
        break;
    case 2:
        cout<<"The value of a is 2 ";
        break; 
    case 3:
        cout<<"The value of a is 3 ";  

    default:
        cout<<"default will be always printed";
    
    }

    
}