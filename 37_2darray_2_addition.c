/*
    write a program to create 2d array, accept input from user and display it and do addition of two array into third array

*/

#include <stdio.h>
#define NO_OF_ITEMS 3
#define DAYS 7
void main()
{
    // create 2d array to store 4 items sales of 7 days
    // datatype array[row size][column size]
    int week1[NO_OF_ITEMS][DAYS], column, row;
    int week2[NO_OF_ITEMS][DAYS];
    int total[NO_OF_ITEMS][DAYS];
    for (row = 0; row < NO_OF_ITEMS; row++)
    {
        for (column = 0; column < DAYS; column++)
        {
            printf("enter %d item sales for day %d", row + 1, column + 1);
            scanf("%d", &week1[row][column]);
        }
    }

    for (row = 0; row < NO_OF_ITEMS; row++)
    {
        for (column = 0; column < DAYS; column++)
        {
            printf("enter %d item sales for day %d", row + 1, column + 1);
            scanf("%d", &week2[row][column]);
        }
    }

    // 0 to 1
    for (row = 0; row < NO_OF_ITEMS; row++)
    {
        for (column = 0; column < DAYS; column++)
        {
            printf("%7d", week1[row][column]);
        }
        printf("\n");
    }

    for (row = 0; row < NO_OF_ITEMS; row++)
    {
        for (column = 0; column < DAYS; column++)
        {
            printf("%7d", week2[row][column]);
        }
        printf("\n");
    }

    // addition
    for (row = 0; row < NO_OF_ITEMS; row++)
    {
        for (column = 0; column < DAYS; column++)
        {
            total[row][column] = week1[row][column] + week2[row][column];
        }
    }

    for (row = 0; row < NO_OF_ITEMS; row++)
    {
        for (column = 0; column < DAYS; column++)
        {
            printf("%7d", total[row][column]);
        }
        printf("\n");
    }
}