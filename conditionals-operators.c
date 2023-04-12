#include <stdio.h>

void funW();
void funL();
int main()
{

typedef void (*pf)();
pf myFunctions[]={funW,funL};









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

    (ptr_myStruct->a == ptr_myStruct->b) ? funW() : funL(); // !!!



    return 0;
}

void funW()
{

    printf("PRAWDA\n");
}

void funL()
{
    printf("FALSZ\n");
}