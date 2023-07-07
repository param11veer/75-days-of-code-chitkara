#include <stdio.h>
#include <string.h>

struct dob // this is made afterwards struct student was made first
{
    int day;
    int month;
    int year;
};

struct student
{
    int id; // system defined data structure
    char name[30];
    struct dob d1; // nested
};

int main()
{
    struct student s1;
    printf("Enter the date of birth :\n");
    scanf("%d%d%d", &s1.d1.day, &s1.d1.month, &s1.d1.year); // this is way to access the nested variables just like we access files over there we use / over here .
    printf("Date of birth is %d-%d-%d", s1.d1.day, s1.d1.month, s1.d1.year);
    return 0;
}

#include <stdio.h>
#include <string.h>

struct student
{
    int id; // system defined data structure
    char name[30];
    struct dob // this is an another way of declaring nested structures
    {
        int day;
        int month;
        int year;
    } d1; // over here we have declared d1 here the traditional way
};

int main()
{
    struct student s1;
    printf("Enter the date of birth :\n");
    scanf("%d%d%d", &s1.d1.day, &s1.d1.month, &s1.d1.year); // this is way to access the nested variables just like we access files over there we use / over here .
    printf("Date of birth is %d-%d-%d", s1.d1.day, s1.d1.month, s1.d1.year);
    return 0;
}
