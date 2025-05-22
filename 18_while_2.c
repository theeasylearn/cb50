/*
    write a program to display multiplication table of given number as below
    input : 5
    output :
    5 X 1 = 5
    5 X 2 = 10
    5 X 3 = 15
    5 X 3 = 15
    ...
    ...
    5 X 10 = 50
    steps
    1    create variable number and multiplier and answer
    2    accept number from user
    3    multiplier = 1

    4    answer = number * multiplier
    5    print number X multiplier = answer (5 X 1 = 5)
    6    multiplier = multiplier + 1

    7    answer = number * multiplier
    8    print number X multiplier = answer (5 X 2 = 10)
    9    multiplier = multiplier + 1

    10  answer = number * multiplier
    11  print number X multiplier = answer (5 X 3 = 15)
    12  multiplier = multiplier + 1
*/
#include <stdio.h>
void main()
{
    int number, multiplier, answer;
    printf("enter number");
    scanf("%d", &number);

    multiplier = 1;

    while(multiplier<=10)
    {
        answer = number * multiplier;
        printf("%d X %2d = %3d \n", number, multiplier, answer);
        multiplier = multiplier + 1;
    }
}