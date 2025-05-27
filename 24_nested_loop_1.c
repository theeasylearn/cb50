/*
    write a program to print following pattern (only one astrik at time)
    *
    * *
    * * *
    * * * *
    * * * * *
*/
#include <stdio.h>
void main()
{
    int column;
    int row=1;
    while(row<=5) //outer loop 
    {
        column = 1;
        while (column <= row) //inner loop 
        {
            printf("* ");
            column = column + 1;
        }
        printf("\n");
        row=row+1;
    }
}