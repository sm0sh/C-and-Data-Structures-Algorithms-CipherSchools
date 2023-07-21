#include<iostream>
using namespace std;


//We achive this using something called a "class"
// A class is a user defined datatype which can be customized however we want

class student
{
    public:

    string name;
    int mids;
    float ends;
    bool pre_abs;

};

class vehicle
{
    public:

    string car_name;
    string tyre_name;
    int number_of_tyres;
    int Number_of_seats; 

};

int main()
{
    // There are a class of 30 students and each student has the following data associated with him :

    student a,b,c;  // here a,b,c are type of student

    int d,e,f; // here d,e,f are of type int 

    vehicle hyundai, toyota, ferrari;

    // a,b,c over here are objects of the particular class

}