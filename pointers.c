#include <stdio.h>
#include <stdlib.h>

 int main() {
   // #1
   int a = 421;
   long b = 40111;
   char c = 'a';

   // #2
   printf("a : %d, address of a in hexadecimal: %p\n", a, &a);
   printf("b : %ld, address of b in hexadecimal: %p\n", b, &b);
   printf("c : %c, address of c in hexadecimal: %p\n", c, &c);
   printf("a : %d, address of a in decimal: %lu\n", a, &a);
   printf("b : %ld, address of b in decimal: %lu\n", b, &b);
   printf("c : %c, address of c in decimal: %lu\n", c, &c);
   // the memory address of c and a are next to each other. a's is 4 less than b

   // #3
   int *p = &a;
   long *q = &b;
   char *r = &c;

   // #4
   printf("point *p : %p\n ", p);
   printf("point *q : %p\n ", q);
   printf("point *r : %p\n ",r);

   // #5
   *p = 6121;
   *q = 78121;
   *r = 'z';
   printf("Modified values are : %d %ld %c\n", a, b, c);

   // #6
   unsigned int i = 123123;
   int *y = &i;
   char *z = &i;

   // #7
   printf("y: %p y points to %d.\n", y, *y);
   printf("z: %p z points to %d.\n", z, *z);

   // #8
   printf("decimal : %u, hex : %x\n", i, i);

   // #9
   printf("each individual byte of i in decimal: %hhu %hhu %hhu %hhu\n", *z, *(z+1), *(z+2), *(z+3) );
   printf("in hex: %hhx %hhx %hhx %hhx\n", *z, *(z+1), *(z+2), *(z+3) );

   // #10
   *z += 1;
   printf("decimal : %u, hex : %x\n", i, i);
   *(z+1) += 1;
   printf("decimal : %u, hex : %x\n", i, i);
   *(z+2) +=  1;
   printf("decimal : %u, hex : %x\n", i, i);
   *(z+3) += 1;
   printf("decimal : %u, hex : %x\n", i, i);
   printf("each individual byte of i in decimal: %hhu %hhu %hhu %hhu\n", *z, *(z+1), *(z+2), *(z+3) );
   printf("in hex: %hhx %hhx %hhx %hhx\n", *z, *(z+1), *(z+2), *(z+3) );

   // #11
   *z += 16;
   printf("decimal : %u, hex : %x\n", i, i);
   *(z+1) += 16;
   printf("decimal : %u, hex : %x\n", i, i);
   *(z+2) +=  16;
   printf("decimal : %u, hex : %x\n", i, i);
   *(z+3) += 16;
   printf("decimal : %u, hex : %x\n", i, i);
   printf("each individual byte of i in decimal: %hhu %hhu %hhu %hhu\n", *z, *(z+1), *(z+2), *(z+3) );
   printf("in hex: %hhx %hhx %hhx %hhx\n", *z, *(z+1), *(z+2), *(z+3) );

   return 0;
 }
