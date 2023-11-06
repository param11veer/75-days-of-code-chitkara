#include<iostream>
using namespace std;

// class MyClass{
//     public:
//         int A = 100;
//         void normalFunc(){
//             cout << "Cannot accessed by constant object!" << endl;
//         }
//         void fun() const {
//             //A = A + 50;
//             cout << "Value of A: "<< A << endl;
//         }
// };

// int main(){
//     const MyClass obj;
//     obj.fun();
//     //obj.normalFunc();
// }

/*
    *Q.11 (constant member function)
    *Create a class called Rectangle with private member variables length and width. Implement a constant member function called calculateArea() that calculates
    *and returns the area of the rectangle. You have to call this constant function using a constant object.
*/

// class Rectangle {
//     private:
//         int length;
//         int width;

//     public:
//         Rectangle(int len, int wid) : length(len), width(wid) {}

//         // Declare a constant member function called calculateArea()
//         int calculateArea() const {
//             return length * width;
//         }
// };



// int main() {
//     const Rectangle r(4, 5); // Declare a constant object r of class Rectangle

//     // Call the constant member function calculateArea() on the constant object r
//     cout << "The area of the rectangle is: " << r.calculateArea() << endl;

//     return 0;
// }


/*
    *(Copy constructor)
    *Create a class product with two public data members as product_name and product_id.
    *Pass product name and id with the help of constructor of Product class.
    *Now create an object called pr1 of product class.
    *Then create a copy of this object as pr2.
    *Now print the values fo product_name and product_id using pr2 object.
*/


class Product {
    public:
        string product_name;
        int product_id;

        // Parameterized constructor
        Product(string name, int id) {
            product_name = name;
            product_id = id;
        }

        // Copy constructor
        Product(const Product &p) {
            product_name = p.product_name;
            product_id = p.product_id;
        }
};

int main() {
    // Creating an object of Product class
    Product pr1("Mobile", 1);

    // Creating a copy of pr1
    Product pr2(pr1);

    // Printing product_name and product_id of pr2
    cout << "Product Name: " << pr2.product_name << endl;
    cout << "Product ID: " << pr2.product_id << endl;

    return 0;
}