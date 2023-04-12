#include <stdio.h>

int main(){

int x=10;
x+=5;

int y=10;
y-=5;

int z=10;
z*=5;

int a=10;
a/=5;

int b=10;
b%=5;


printf("+: %d\n",x);
printf("-: %d\n",y);
printf("*= %d\n",z);
printf("/= %d\n",a);
printf("modulo= %d\n",b);

return 0;
}