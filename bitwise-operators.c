#include <stdio.h>

void clear()
{
     printf("\n");
}

void printBinary(int num)
{
     for (int i = 8; i >= 0; i--)
     {
          int bit = (num >> i) & 1;
          printf("%d", bit);
     }
     clear();
}

int main()
{

     unsigned int a = 0b0010; // 2
     unsigned int b = 0b1100; // 12

     // Bitwise AND operator
     unsigned int c = a & b;
     printf("a & b = %d\n", c);
     printBinary(c);
     clear();

     // Bitwise OR operator
     unsigned int d = a | b;
     printf("a | b = %d\n", d);
     printBinary(d);
     clear();

     // Bitwise XOR operator
     unsigned int e = a ^ b;
     printf("a ^ b = %d\n", e);
     printBinary(e);
     clear();

     // Bitwise NOT operator
     unsigned int f = ~a;
     printf("~a = %d\n", f);
     printBinary(f);
     clear();

     // a=0000 0010 before change
     // a=0000 1000 after change
     // Left shift operator
     unsigned int g = a << 2;
     printf("a << 2 = %d\n", g);
     printBinary(g);
     clear();

     // a=0000 1100 before change
     // a=0000 0011 after change
     // Right shift operator
     unsigned int h = b >> 2;
     printf("b >> 2 = %d\n", h);
     printBinary(h);
     clear();

     return 0;
}
