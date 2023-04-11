#include <stdio.h>


int dodaj(int a, int b)
{
return a+b;
}

int odejmij(int a, int b)
{
return a-b;
}


int main(){
    




typedef int (*pf)();

 pf functions[2] = {dodaj,odejmij};

 printf("%d",functions[0](2,3) );

    return 0;
}