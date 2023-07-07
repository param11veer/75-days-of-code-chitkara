/*Now operators are totally same like relational operator comparison operator logical operator */

// #include<iostream>
// using namespace std;

// int main(){
//     int num1 = 6;
//     int num2 = 3;

//     cout<<num1+num2<<endl;
//     cout<<num1-num2<<endl;
//     cout<<num1*num2<<endl;
//     cout<<num1/num2<<endl;
//     cout<<num1%num2<<endl;

//     cout<<(num1==num2)<<endl;
//     cout<<(num1!=num2)<<endl;
//     cout<<(num1>=num2)<<endl;

//     return 0;
// }

/*Logical operator*/

// #include<iostream>
// using namespace std;
// int main()
// {
//     bool exp1 = true;
//     bool exp2 = false;

//     cout<<(exp1&&exp2)<<endl;
//     cout<<(exp1||exp2)<<endl;
//     cout<<(!exp1)<<endl;
//     return 0;
// }

/*Assignment operators*/

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num1 = 6;
//     int num2 = 10;
//     //+=, -=, *=, /=

//     /*Increment and decrement operators */

//     ++num1;
//     --num2;

//     cout << num1 << endl;
//     cout << num2 << endl;

//     return 0;
// }

/*Bitwise Operator*/

//#include <iostream>
//using namespace std;
//int main()
//{
//    int num1 = 5; // 0101 binary representation

//    cout << (num1 << 1) << endl; // left shift operator
    // when left shifting a number it gets multiplied by 2
//    cout << (num1 >> 1) << endl; // right shift operator
    // when right shifting a number it gets divided by 2

//    int num2 = 8;                  // 1000 binary representation
//    cout << (num1 & num2) << endl; // bitwise and operator
    // if both true then true
    // output will be 0 because 0101 and 1000 no number is same to print 1 as true
//    cout << (num1 | num2) << endl; // bitwise or operator
    // if any one true then true
    // 13(1101) will be the output because 0101 and 1000 will be 1101 as 1 or 0 gives 1
//    cout << (~(num1)) << endl; // bitwise not operator

//    return 0;
//}

/*
    Misc Operators
        1. size operator
        2. condition ? expression1(true) : expression2(false)
        3. comma operator (if int y = (4,5,6) then y = 6 last comma separated value is taken)
        4. Dot and arrow operator
        5. Casting operator
        6. & Address operator
        7. *pointer operator
*/

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 4;
//     cout << sizeof(a) << endl; // 4 bec int is of 4bytes

//     char name = 'a';
//     cout << sizeof(name) << endl; // 1 bec char is of 1 byte

//     bool flag;
//     a == name ? flag = true : flag = false;
//     cout << flag << endl; // false(0) bec int and char cannot be equal

//     cout << (&a) << endl; // prints the address

//     return 0;
// }

/*
    Unary operators
        1. + unary plus
        2. - unary minus
        3. ++increment operator
        4. --decrement operator
        5. ! logical complement operator

*/

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 6;
//     cout << (a++) << endl;
//     cout << (a) << endl;
//     cout << (++a) << endl;
//     cout << (a) << endl;

//     int b = 5;
//     cout << (b--) << endl;
//     cout << (b) << endl;
//     cout << (--b) << endl;
//     cout << (b) << endl;

//     return 0;
// } 
