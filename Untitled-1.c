#include <stdio.h>
#include <stdlib.h>

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
 
 
//int (*functons[2])()= {dodaj,odejmij};



int (*tablica[5])(int, int)={dodaj, odejmij};


int wynik=functions[0](2,3);

wynik==5 ? printf("OK\n\n") :   printf("ZLE!\n\n");

// 1%5  2%5 3%5 4%5 5%5
// 6%5  7%5 8%5  9%5  10%5

7%5==2 ? printf("OK\n\n"):printf("NIE!\n\n") ;


    return 0;
}