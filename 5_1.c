#include <stdio.h>

int main()
{
    int a = sizeof(char);
    int b = sizeof(int);
    int c = sizeof(float);
    int d = sizeof(double);

   printf("Char = %d\n", a);
   printf("Int = %d\n", b);
   printf("Float = %d\n", c);
   printf("Double = %d\n", d);

    return 0;
}