/*  write a program to sort descending array
    (0,1,2,3,4)
*/
#include <stdio.h>
void main()
{
    int number[5] = {10, 20, 30, 40, 50};
    int value, i;
    // position       0 1   2  3  4
    printf("Enter value to search");
    scanf("%d", &value); // 05
    for (i = 0; i <= 4; i++)
    {
        if (number[i] == value)
        {
            printf("value found at %d position", i + 1);
            break;
        }
        if (number[i] > value)
        {
            printf("value not found");
            break;
        }
    }
    if (i == 5)
    {
        printf("value not found");
    }
}