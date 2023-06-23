#include<iostream>
using namespace std;

int main()
{
    //int x;     // variable name x of type int ---> It can store a single integer  which means x can store 1 or 2 only a single integer

    //Arrays can be used to store multiple values in a single variable name

    //int a[5];  // This means it is an array of name a which can store multiple integers , It can store 6 integers
                // Note: The indexing of the array starts from 0 not 1



        //  elemets staring from 0-5

        // The first elements will have an index 0 --> a[0]
        // The second element will have an index 1 --> a[1]

        // And goes till a[5]

    int a,b,c,d,e;

    cout<<"Give 5 integers as input"<<endl;
    cin>>a>>b>>c>>d>>e;

    cout<<"The integers in reverse order are: "<<e<<d<<c<<b<<a;

    return 0;    
}