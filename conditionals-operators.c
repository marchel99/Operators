#include <stdio.h>

int main()
{
    typedef struct
    {
        int a;
        int b;

    } myStruct;

    myStruct s;

    s.a = 2;
    s.b = 3;

    myStruct *ptr_myStruct = &s;
    printf("%d %d \n ", s.a, s.b);

    ptr_myStruct->a += 1;
    ptr_myStruct->b += 1;

    printf("%d %d \n ", ptr_myStruct->a, ptr_myStruct->b);

    return 0;
}