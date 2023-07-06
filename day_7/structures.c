// #include<stdio.h>
// struct employee
// {
//     int id;
//     char name;
//     float marks;
// }; //a,b,c; //these are the variables of struct
// // struct employee a; like this also you can define variable

// int main()
// {
//     struct employee m; //you can define variable here also
//     //rn we using the above variable so i commented the other variables
//     m.id = 12;
//     m.name = 'a';
//     m.marks = 2.4; //like this defined_variable.assigned_variable is the format of providing the data

//     printf("Marks : %f\n",m.marks); //it will print the marks
//     printf("Name : %c\n",m.name);
//     return 0;
// }

#include <stdio.h>
struct employee
{
    int id;
    char name;
    float marks;
}; // a,b,c; //these are the variables of struct
// struct employee a; like this also you can define variable

int main()
{
    struct employee m = {3, 'B', 46.2}; // it is an another way of assigning values to the variables
    printf("Marks : %f\n", m.marks);    // it will print the marks
    printf("Name : %c\n", m.name);
    return 0;
}
