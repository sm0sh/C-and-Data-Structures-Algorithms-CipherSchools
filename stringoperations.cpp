#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a;
    string b;
    string c;

    //int a;
    //int b;
    //int c;


    // Instead of using cin, you use something called a getline
    
    cin>>a; 
    getline(cin,a);
    // getline is a function which is why you can see (), (cin,variable where you want to store the value of the line which is being taken as input )

    cout<<"Your full name is "<<a<<endl;
    
    //c = a+b;  // This is called string concatination // Or in simple terms string addition
    //cout<<"The combined word is "<<c;
    //cout<<"The length of the combined name is "<<c.length();
    
    return 0;
}