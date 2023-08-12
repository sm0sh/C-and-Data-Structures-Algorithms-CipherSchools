#include<iostream>
using namespace std;

int main()
{
   /* int i,j,k;
    i=0;
    j=0;
    k=0;

    cout<<i<<" "<<j<<" "<<k<<endl; 
    j = i++;
    cout<<i<<" "<<j<<" "<<k<<endl; 
    k = ++i;
    cout<<i<<" "<<j<<" "<<k<<endl;*/

    //int i;

    /*for(i=1;i<101;i++)//called the update which happens after the iterations(part of a loop is completed)) 
    {
        cout<<i<<" ";
    }*/

    //i=1;       //initialization
    //while(i<101)   //condition
    //{
    //    cout<<i<<" ";    //loop
    //    i++;             //update
    //}

    int i;
    int input;


    // guess the number 65
    // the user has 100 chances
    i=100;

    for(i=1;i<101;i++)
    {
        cin>>input;
        if(input == 65)  // only takes place if the input is exactly 65
        {
            cout<<"congrats you have guessed correct ";
            break;
        }
    }

}