/* write a program to make sum of all digits in given number
    input : 12345  / 10 1234 /10 123
    sum : 15
    steps
    ---------------------------------
    1) create variable number,reminder,sum=0
    2) accept number from user

    3) get last digit of number
        reminder(5) = number % 10
    4) add reminder into sum
        sum = sum  + reminder
    5) number(1234) = number / 10

    6) get last digit of number
       reminder(4) = number % 10
    7) sum(9) = sum + remainder
    8) number(123) = number / 10

    9) reminder(3) = number % 10
    10) sum(12) = sum + remainder
    11) number(12) = number / 10
*/
#include <stdio.h>
void main()
{
    int number, remainder, sum = 0;
    printf("enter number");
    scanf("%d", &number);
    for(sum=0;number>0;number = number / 10)
    {
        remainder = number % 10;
        sum = sum + remainder;
    }

    printf("%d", sum);
}
