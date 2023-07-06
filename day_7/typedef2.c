#include <stdio.h>
#include <string.h> //included this bec. in line 17 we called a library to assisgn array of characters as string
typedef struct legends
{
    int id;
    float marks;
    char fav_char;
    char name[50];
} star;

int main()
{
    star lebron, curry, durant;
    lebron.id = 6;
    curry.id = 30;
    durant.id = 35;
    strcpy(durant.name, "Kevin the slim reaper easy money Durant");

    lebron.marks = 50;
    curry.marks = 55;
    durant.marks = 33;

    printf("durant has got %f marks \n which means he failed in the exam", durant.marks);
    printf("\ndurant's full name is %s \n", durant.name);
    return 0;
}