#include <stdio.h>
void main()
{
    int a = 10;
    int b = 0;

    // b = a;
    // a = a + 1;

    // OR
    b = a++; // postfix
    printf("a = %d b = %d", a, b);

    // b = a; // 11
    // a = a - 1; // 10
    //
    b = a--; // postfix
    printf("\n a = %d b = %d", a, b);

    // a = a + 1;
    // b  = a;

    b = ++a;
    printf("\n a = %d b = %d", a, b);

    // a = a - 1;
    // b = a;
    // 
    b = --a; //prefix 
    printf("\n a = %d b = %d", a, b);
}