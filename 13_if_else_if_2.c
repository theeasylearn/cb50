/*
    write a program to accept body temperature from user in fahrenheit and then display fever level as per below chart
    Fahrenheit (°F)	Fever Level
    102.9	         HIGH FEVER
    101.2	         FEVER
    99.3	         LOW GRADE FEVER
    95.0	         NORMAL
    steps 
    --------------------------------
    1) create variable fh 
    2) accept fahrenheit user into fh variable
    3) calculate fever level as per above rules
*/
#include <stdio.h>
void main()
{
    float fh; /* fh means Fahrenheit*/
    printf("Enter body temperature in Fahrenheit");
    scanf("%f", &fh);
    if (fh >= 102.9)
    {
        printf("you have high grade fever");
    }
    else if (fh >= 101.2)
    {
        printf("you have fever");
    }
    else if (fh >= 99.3)
    {
        printf("you have low grade fever");
    }
    else
    {
        printf("you are normal");
    }

}