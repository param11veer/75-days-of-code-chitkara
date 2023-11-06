#include<iostream>
using namespace std;
// class topics{
//     static int number;
//     string stream = "Geometry";
//     public:
//         static void total_topics(){
//             cout << "Topics covered: "<<number << endl;
//         }
// };
// int topics::number = 7;

// int main(){
//     topics t1;
//     t1.total_topics(); // using object
//     topics::total_topics(); // using class

// }

/*
    *PASSING OBJECTS
*/

// class Student{
//     public:
//         double marks;
//         Student(double m){
//             marks = m;
//         }
// };
// void calculateAverage(Student stud1, Student stud2){
//     double average = (stud1.marks + stud2.marks)/2;
//     cout << "Average Marks = " << average << endl;
// }

// int main(){
//     Student s1(85.5), s2(90.5);
//     calculateAverage(s1, s2);
// }

/*
    *RETURNING OBJECT
*/

// class Student {
//     public:
//         double marks, average;
// };
// Student calculateAverage(Student stud1, Student stud2){
//     Student result;
//     result.average = (stud1.marks + stud2.marks) / 2;
//     return result;
// }
// int main(){
//     Student st1, st2, avg;
//     st1.marks = 98.2;
//     st2.marks = 98.5;
//     avg = calculateAverage(st1, st2);
//     cout << "Average: " << avg.average;
// }

/*
    *PASSING AN OBJECT BY VALUE TO A FUNCTION
*/

// class Employee{
//     public:
//         string name, ecode;
//         Employee(string nm, string ec){
//             name = nm;
//             ecode = ec;
//             cout << "Employee name: " << name << endl;
//             cout << "Employee code: " << ecode << endl;
//         }
// };

// void editInfo(Employee obj, string nm, string ec){
//     obj.name = nm;
//     obj.ecode = ec;
//     cout << "Inside function obj.name: " << obj.name << endl;
//     cout << "Inside function obj.ecode: " << obj.ecode << endl;
// }

// int main(){
//     string nm, ec;
//     Employee e1("Ram", "emp001");
//     cout << "Edit employee name: " << endl;
//     cin >> nm;
//     cout << "Enter new employee code: " << endl;
//     cin >> ec;
//     editInfo(e1, nm, ec); // passing by value to a function
//     cout << "After editing the object in function" << endl;
//     cout << "obj.name: " << e1.name << endl;
//     cout << "obj.ecode: " << e1.ecode << endl;
// }

/*
    *FRIEND CLASS
*/

// class Product{
//     private:
//         string name, id;
//     public:
//         Product(string pname, string pid){
//             name = pname;
//             id = pid;
//         }
//         friend class Category;
// };

// class Category{
//     public:
//         string category = "Electronics";
//         void display(Product& p1){
//             cout << "Product category: " << category << endl;
//             cout << "Product name: " << p1.name << endl;
//             cout << "Product id: " << p1.id << endl;
//         }
// };

// int main(){
//     Product prod1("hello", "hi");
//     Category cat1;
//     cat1.display(prod1);
// }

/*
    !(Friend class)
    !Create two classes Number and table. Pass the user entered number in number class constructor and print its table through a member
    !function showTable() of class Table?
*/


class Number {
private:
   int num;

public:
   Number(int n) : num(n) {}

   friend class Table;
};

class Table {
public:
   void showTable(Number num) {
       for (int i = 1; i <= 10; i++) {
           cout << num.num << " * " << i << " = " << num.num * i << endl;
       }
   }
};

int main() {

    
   return 0;
}