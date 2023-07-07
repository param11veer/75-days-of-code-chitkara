#include <stdio.h>
#define max(x, y) ((x) > (y) ? (x) : (y)) // this is a way to write if else statement in one line
int main()
{
    printf("Max of 20 and 10 is : %d\n ", max(20, 10)); // this prints the max of 20 and 10
    return 0;
}