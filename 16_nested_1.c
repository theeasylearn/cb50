/*
    write a program to display month name from given month number
    steps
    ----------------------------
    1) create variable month
    2) accept input in month variable
    3) if month is >=1 and month<=12 then
        4)  check month number
                3.1 if month == 1 then
                    print it is january
                3.2 if month == 2 then
                    print it is february
                3.3 if month == 3 then
                    print it is march
                3.4 if month == 4 then
                    print it is april
                3.5 if month == 5 then
                    print it is may
                3.6 if month == 6 then
                    print it is june
                3.7 if month == 7 then
                    print it is july
                3.8 if month == 8 then
                    print it is august
                3.9 if month == 9 then
                    print it is september
                3.10 if month == 10 then
                    print it is October
                3.11 if month == 11 then
                    print it is November
                3.12 if month == 12 then
                    print it is December
    else
        rint it is not valid month number
*/
#include <stdio.h>
void main()
{
    int month;
    printf("enter month (1 to 12)");
    scanf("%d", &month);
    if (month >= 1 && month <= 12) //outer decision making 
    {
        if (month == 1) //inner decision making statement
        {
            printf("it is january");
        }
        else if (month == 2)
        {
            printf("it is february");
        }
        else if (month == 3)
        {
            printf("it is march");
        }
        else if (month == 4)
        {
            printf("it is april");
        }
        else if (month == 5)
        {
            printf("it is may");
        }
        else if (month == 6)
        {
            printf("it is June");
        }
        else if (month == 7)
        {
            printf("it is july");
        }
        else if (month == 8)
        {
            printf("it is August");
        }
        else if (month == 9)
        {
            printf("it is September");
        }
        else if (month == 10)
        {
            printf("it is October");
        }
        else if (month == 11)
        {
            printf("it is November");
        }
        else if (month == 12)
        {
            printf("it is December");
        }
    }
    else 
    {
        printf("it is not valid month");
    }
}
