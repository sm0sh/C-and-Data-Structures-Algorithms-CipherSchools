#include<iostream>
using namespace std;

int main()
{
    /*int a,b,c,d,e;

    cout<<"Give 5 integers as input"<<endl;
    cin>>a>>b>>c>>d>>e;

    cout<<"The integers in reverse order are: "<<e<<d<<c<<b<<a;*/

    int a[9];
    int i;

    std::cout<<"Give 10 integers as input"<<endl;

    for(i=0;i<9;i++)
    {
        std::cin>>a[i];
    }

    std::cout<<"The 10 given inputs are : "<<endl;

    for(i=9;i>=0;i--)
    {
        std::cout<<a[i]<<" ";
    }

    return 0;    
}