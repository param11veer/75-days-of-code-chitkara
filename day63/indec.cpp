#include<iostream>
using namespace std;

/*
    !FRIEND FUNCTION: GLOBAL
*/
// class Product{
//     private:
//         string name, id;
//     public:
//         Product(string pname, string pid){
//             name = pname;
//             id = pid;
//         }
//         friend void friendFunc(Product& pr1);
// };

// void friendFunc (Product& pr1){
//     cout << "Product name: " << pr1.name << endl;
//     cout << "Product id: " << pr1.id << endl;
// }

// int main(){
//     Product prod1("iPhone", "pr007");
//     friendFunc(prod1);
// }

/*
    !FRIEND FUNCTION: MEMBER
*/

// class Product;
// class Category{
//     public:
//         void friendFunc(Product& pr1);
// };
// class Product{
//     private:
//         string name, id;
//     public:
//         Product(string pname, string pid){
//             name = pname;
//             id = pid;
//         }
//         friend void Category::friendFunc(Product& pr1);
// };

// void Category::friendFunc(Product& pr1){
//     cout << "Product name: " << pr1.name << endl;
//     cout << "Product id: " << pr1.id << endl;
// }

// int main(){
//     Product prod1("iPhone", "pr007");
//     Category cat1;
//     cat1.friendFunc(prod1);
// }

/*
    *Q8. FRIEND FUNCTION
    *Create two classes Length and width with two private members (integers) length and width, respectively.
    *You have to pass numbers in the respective classes for length and width through their constructors.
    *Now create a friend function area() to calculate the area of rectangle?
*/

// class Length {
// private:
//    int length;

// public:
//    Length(int len) : length(len) {}

//    friend int area(Length l, Width w);
// };

// class Width {
// private:
//    int width;

// public:
//    Width(int wid) : width(wid) {}

//    friend int area(Length l, Width w);
// };

// int area(Length l, Width w) {
//    return l.length * w.width;
// }

// int main() {
//    Length l(10);
//    Width w(5);

//    cout << "Area of rectangle: " << area(l, w) << endl;

//    return 0;
// }