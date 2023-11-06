#include <iostream>
using namespace std;

// class Book{
//     public:
//         Book(){
//             cout << "This is a constructor!!!"<<endl;//constructor is used to initialize an object for a class
//         }
//         ~Book()
//         {
//             cout << "This is the destructor!!!"<<endl;//destructor is used to destroy the object created by instructor
//         }
// };
// int main(){
//     Book b1;
//     Book b2;
//     return 0;
// }

/*
    !Write a program to print the names of students by creating a student class. If no name is passed while creating
    !an object of the student class, then the name should be "Unknown", otherwise the name should be equal to the
    !string value passed while creating the object of the student class.
*/
class Student
{
public:
    string name;
    Student(string name)
    {
        this->name = name; // -> is a pointer and (this) basically point towards the latest created object
    }
};
int main()
{
    Student s1("John");
    if (s1.name == "")
    {
        cout << "Unknown";
    }
    else
    {
        cout << s1.name;
    }
    return 0;
}

/*
    !Suppose you have a Piggie Bank with an initial amount of $50 and you have to add some more amount to it.
    !create a class 'AddAmount' with a data member named 'amount' with an initial value of $50.
    !make two constructors of this class as follows: -
    !1. without any parameter - no amount will be added to the Piggie Bank
    !2. having a parameter which is the amount that will be added to the Piggie Bank
    !3. Create an object of the 'AddAmount' class and display the final amount in the Piggie Bank.
*/

class AddAmount
{
public:
    int amount = 50;

    AddAmount()
    {
        cout << "No amount is added" << endl;
    }

    AddAmount(int add)
    {
        this->amount = amount + add;
    }
};
int main()
{
    AddAmount a1(20);
    cout << a1.amount;
    return 0;
}

/*
    !Create a class named 'Rectangle' with two data members - length and breadth and a function to calculate the
    !area which is 'length*breadth'. the class has three constructors which are :
    !1. having no parameter - values of both length and breadth are assigned zero.
    !2. having two numbers as parameters - the two numbers are assigned as length and breadth respectively.
    !3. having one number as parameter - both length and breadth are assigned that number.
    !create objects of the 'Rectangle' class having none, one and two parameters and print their areas.
*/

class Rectangle
{
public:
    int length;
    int breadth;

    Rectangle()
    {
        this->length = 0;
        this->breadth = 0;
    }
    Rectangle(int length, int breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }
    Rectangle(int lb)
    {
        this->length = lb;
        this->breadth = lb;
    }
};
int main()
{
    Rectangle r1(4, 5);
    int area = r1.length * r1.breadth;
    cout << area;
    return 0;
}