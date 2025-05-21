/*
    write a program to print following pattern
    1   3   5   7   9   11  13  15  17  .... 99
    use variable to display value
    steps
    1   create variable number
    2   store 1 in number

    3   print number
    4   number(3) = number + 2

    4   print number
    5   number = number + 2

    6   print number
    7   number = number + 2
1 3 5
*/
#include <stdio.h>
void main()
{
    int number;
    number = 1;

    while(number<=99)
    {
        printf("%5d", number); // 1
        number = number + 2;
    }
    
    printf("\n number = %d",number);
}