/*
    write a program to do addition or subtraction or multiplication or division on given two number based upon user choice.

    steps
    -----------------
    1) create variable num1, num2,choice as integer variable
    2) create variable result as float variable
    3) accept input from user in num1 variable
    4) accept input from user in num2 variable
    5) accept user choice into choice variable

    6) decide operation upon user choice
    7) if choice == 1 then
        7.1 result = num1 + num2
    8) if choice == 2 then
        8.2 result = num1 - num2
    9) if choice == 3 then
        8.3 result = num1 * num2
    10) if choice == 4 then
        8.4 result = num1 / num2
    11) otherwise
        print invalid choice
    12) display result
*/
#include <stdio.h>
void main()
{
    int num1, num2, choice;
    float result;
    printf("Enter num1");
    scanf("%d", &num1);

    printf("Enter num2");
    scanf("%d", &num2);

    printf("Enter choice");
    scanf("%d", &choice);
    if (choice >= 1 && choice <= 4) //outer decision making
    {
        switch (choice) //inner decision making statement
        {
            case 1:
                result = num1 + num2; // process
                break;

            case 2:
                result = num1 - num2; // process
                break;

            case 3:
                result = num1 * num2;
                break;

            case 4:
                result = (float)num1 / num2;
                break;
        }
        printf("result = %11.2f", result);
    }
    else 
    {
        printf("invalid choice");
    }
}
