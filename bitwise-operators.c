#include <stdio.h>

int main() {
   unsigned char a = 0x0F;
   unsigned char b = 0x0F;

   // Bitwise AND operator
   unsigned char c = a & b;
   printf("a & b = %d\n", c);

   // Bitwise OR operator
   unsigned char d = a | b;
   printf("a | b = %d\n", d);

   // Bitwise XOR operator
   unsigned char e = a ^ b;
   printf("a ^ b = %d\n", e);

   // Bitwise NOT operator
   unsigned char f = ~a;
   printf("~a = %d\n", f);

   // Left shift operator
   unsigned char g = a << 2;
   printf("a << 2 = %d\n", g);

   // Right shift operator
   unsigned char h = b >> 2;
   printf("b >> 2 = %d\n", h);

   return 0;
}
