#include <stdio.h>
#define hello 100

int main()
{
#ifdef hello
    {
        printf("Hello is defined\n"); // if hello is defined it will print this
    }
#else
    {
        printf("Hello is not defined\n"); // if hello is not defined it will print this
    }

#endif // this is important as it shows that ifdef ends here without this it will not generate output
    return 0;
}