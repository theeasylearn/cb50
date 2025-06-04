/*
    write a program to create 2d array, accept input from user and display it

*/

#include <stdio.h>
#define NO_OF_ITEMS 2
#define DAYS 7
void main()
{
    // create 2d array to store 4 items sales of 7 days
    // datatype array[row size][column size]
    int sales[NO_OF_ITEMS][DAYS], column,row;
    

    for (row=0;row<NO_OF_ITEMS;row++)
    {
        for (column = 0; column < DAYS; column++)
        {
            printf("enter %d item sales for day %d",row+1,column+1);
            scanf("%d", &sales[row][column]);
        }
    }

    printf("%7d",sales[0][0]);
    printf("%7d",sales[0][1]);
    printf("%7d",sales[0][2]);
    printf("%7d",sales[0][3]);
}