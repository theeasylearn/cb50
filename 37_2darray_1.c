/*
    write a program to create 2d array, accept input from user and display it

*/

#include <stdio.h>
#define NO_OF_ITEMS 3
#define DAYS 7
void main()
{
    // create 2d array to store 4 items sales of 7 days
    // datatype array[row size][column size]
    int sales[NO_OF_ITEMS][DAYS], column, row;
    for (row = 0; row < NO_OF_ITEMS; row++)
    {
        for (column = 0; column < DAYS; column++)
        {
            printf("enter %d item sales for day %d", row + 1, column + 1);
            scanf("%d", &sales[row][column]);
        }
    }
    // 0 to 1
    for (row = 0; row < NO_OF_ITEMS; row++)
    {
        for (column = 0; column < DAYS; column++)
        {
            printf("%7d", sales[row][column]);
        }
        printf("\n");
    }
}