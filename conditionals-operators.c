#include <stdio.h>

int main()
{
    typedef struct {
        int a;
        int b;

    } x;

 x s;
 
 s.a=2;
 s.b=3;

 



    printf("%d %d \n ",s.a,s.b);

    return 0;
}