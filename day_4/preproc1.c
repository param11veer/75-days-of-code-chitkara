#include <stdio.h>
int main()
{
    printf("Name of file you are working in: %s \n", __FILE__); // prints the file name
    printf("Current date is : %s \n", __DATE__);                // prints today's date
    printf("Current time is : %s \n", __TIME__);                // prints today's time
    printf("This line number is: %d \n", __LINE__);             // prints line number
    printf("ANSI : %d \n", __STDC__);

    return 0;
}