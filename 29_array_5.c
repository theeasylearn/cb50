/*  write a program to sort descending array
    (0,1) (0,2), (0,3), (0,4)
    (1,2) (1,3) (1,4)
    (2,3) (2,4)
    (3,4)
*/
#include <stdio.h>
void main()
{
    int total[5] = {150, 300, 250, 200, 170};
    int temp, i, j;
    //               0    1    2     3   4
    for (j = 0; j <= 3; j++)
    {
        for (i = j + 1; i <= 4; i++)
        {
            if (total[j] < total[i])
            {
                temp = total[j]; // 350
                total[j] = total[i];
                total[i] = temp;
            }
        }
    }
    for (i = 0; i <= 4; i++)
    {
        printf("%d \n", total[i]);
    }
}