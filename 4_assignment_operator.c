#include <stdio.h>
void main()
{
    int a, b, c;
    printf("enter value for a");
    scanf("%d", &a);
    printf("enter value for b");
    scanf("%d", &b);
    // a = a + b; OR 
    a +=b;
    printf("a = %d",a);

    // a = a - b; OR 
    a -=b;
    printf("\na = %d",a);

    // a = a * b; OR 
    a *=b;
    printf("\na = %d",a);

    // a = a / b; OR 
    a /=b;
    printf("\na = %d",a);

    //a = a % b; OR 
    a%=b;
    printf("\na = %d",a);
}
