#include <stdio.h>

int main() {
   unsigned int a = 0010;
   unsigned int b = 1000;
                       1



   // Bitwise AND operator
   unsigned int c =  a&b ;
   printf("a & b = %d\n", c);

   // Bitwise OR operator
   unsigned int d =  a|b ;
   printf("a | b = %d\n", d);


   // Bitwise XOR operator
   unsigned int e = a ^ b;
   printf("a ^ b = %d\n", e);


   // Bitwise NOT operator
   unsigned int f = ~a;
   printf("~a = %d\n", f);

   // Left shift operator
   unsigned int g = a << 2;
   printf("a << 2 = %d\n", g);

   // Right shift operator
   unsigned int h = b >> 2;
   printf("b >> 2 = %d\n", h);

   return 0;
}
