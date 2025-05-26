/*
    write a program to findout reverse of given number
    -----------------------------------------------------
    input : 12345
    output : 54321
    steps
    1) create variable number,reverse=0,remainder
    2) accept input from user into number

    3) get last digit of amount
        remainder(5) = number(12345) % 10
    4) reverse(5) = (reverse * 10) + remainder
    5) number(1234) = number(13235) / 10;

    6) remainder(4) = number(1234) % 10
    7) reverse = (reverse * 10) + remainder
    8) number(1234) = number(13235) / 10;


    9) remainder(3) = number(123) % 10
    10) reverse(543) = (reverse * 10) + remainder
    11) number(12) = number(123) / 10;


*/
#include <stdio.h>
void main()
{
    int number, remainder, reverse;
    reverse = 0;
    printf("Enter number");
    scanf("%d", &number); // 12345

    do
    {
        remainder = number % 10; // 5
        reverse = (reverse * 10) + remainder;
        number = number / 10;
    }while(number>0);

    printf("%d", reverse);
}