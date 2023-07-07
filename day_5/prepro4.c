#include <stdio.h>
#define hello 100

int main()
{
#ifdef hi
    {
        printf("Hi is not defined but we will define is now\n"); 
        #define hi 300//we can even define here 
    }
#else
    {
        printf("Hi is defined\n"); 
    }

#endif // this is important as it shows that ifdef ends here without this it will not generate output
    return 0;
}