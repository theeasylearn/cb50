/*
    write a program to findout whether given number is prime or not
    input : 11
    steps
    ----------------------
    1) create variable number, remainder, divisor
    2) accept input from user into number
    3) divisor = 2
    4) remainder = number % divisor
    5) if remainder == 0 then
        print number is not prime number
        break
    6)  divisor = divisor + 1

    7) remainder = number % divisor
    8) if remainder == 0 then
        print number is not prime number
        break
    9) divisor = divisor + 1

    10) remainder = number % divisor
    11) if remainder == 0 then
        print number is not prime number
        break
    12) divisor = divisor + 1
*/
#include <stdio.h>
void main()
{
    int number, remainder, divisor;
    printf("Enter number");
    scanf("%d", &number); //
    divisor = 2;
    do
    {
        remainder = number % divisor;
        if (remainder == 0 && number!=2)
        {
            printf("it is not prime number");
            break;
        }
        divisor = divisor + 1;
    }while(divisor<number);
    if(divisor == number || number <=2)
    {
        printf("it is prime number");
    }
}