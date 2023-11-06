#include <iostream>
using namespace std;

    /*
        *ABSTRACTION :- It will only provide those functions to the user which are enough for him to know about the object
        *ENCAPSULATION :- Encapsulation in C++ is the process of combining data members and functions into a single unit 
                          called a class, which
        *---------------  helps in data hiding and prevents direct access to the data.
        *POLYMORPHISM :- we can use two functions having the same name if they have different parameters (either types or number of arguments)
        *INHERITANCE :-  The capability of a class to derive properties and characteristics from another class is called Inheritance.

    */

// class Book{
//     public:
//     string title;
//     string author;
//     float price;
// };

// int main(){
//     Book b1;
//     b1.title = "400 days";
//     b1.author = "Dan Brown";
//     b1.price = 550;

//     cout << "Title: " << b1.title << endl;
//     cout << "Author: " << b1.author << endl;
//     cout << "Price: " << b1.price << endl;
// }



// class employee{
//     public:
//     string name;
//     string ecode;
//     int age;

//     void showInfo(){
//         cout << "Title : " << name << endl;
//         cout << "ecode : " << ecode << endl;
//         cout << "age : " << age << endl;
//     }
// };

// int main(){
//     employee emp;
//     emp.name="Ramesh";
//     emp.ecode="e001";
//     emp.age = 34;

//     emp.showInfo();
// } 


// class Student {
//     public:
//     string name;
//     string stud_id;
//     int course;

//     void showInfo(){
//         cout << "Name : " << name << endl;
//         cout << "studId : " << stud_id << endl;
//         cout << "course : " << course << endl;
//     }
// };

// int main(){
//     Student s1;
//     s1.name = "John Doe";
//     s1.stud_id = "SID-2020-00789";
//     s1.course = 3;

//     s1.showInfo();
// }


// class Addition {
//     public:
//         Addition(float n1, float n2){
//             cout << "Sum: " << n1+n2;
//         }
// };

// int main(){
//     Addition a1(5,6);
// }


class Table {
    public:
        Table(int n1){
            for(int i=1; i<=10; i++){
                cout << n1 << " X " << i << " = " << i*n1 <<endl;
            }
        }
};

int main(){
    Table a1(5);
}