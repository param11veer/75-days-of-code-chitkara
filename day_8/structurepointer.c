#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    char name[20];
    float marks;
};

struct student s1 = {1, "ABC"};

int main(int argc, char const *argv[])
{
    struct student *ptr = &s1;                                   // declaring pointer
    printf("Roll number of %s is %d\n", (*ptr).name, (*ptr).id); // calling values using pointers
                                                                 // this is the best way to call values using pointers (*ptr).userdefined/systemdefined variable
    return 0;
}
