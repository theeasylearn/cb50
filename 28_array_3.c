/* write a program to findout given value in unsorted array, if value found display it's position else display value not found
sequential search 
    steps
    ---------------------------------
    1) create variable weight and store float value into it
    2) create search variable // s
    3) accept input into search variable //search = 3.99
    4) compare search variable's value with value at 0th position in weight array
        if search == weight[0]
            print value found at 1st position
            break
    5) compare search variable's value with value at 1st position in weight array
        if search == weight[1]
            print value found at 1st position
            break
    6) compare search variable's value with value at 2nd position in weight array
        if search == weight[2]
            print value found at 2nd position
            break
*/
#include <stdio.h>

void main()
{
    float weight[10] = {10.1, 2.8, 3.99, 41.50, 15.20, 16.11, 71.99, 80.20, 59.65, 1.22};
    //                   0     1    2       3       4   5       6       7       8   9
    float search;
    int position;
    printf("Enter value to search");
    scanf("%f", &search); // 3.99
    for (position = 0; position <= 9; position++)
    {
        if (search == weight[position])
        {
            printf("value found at %d position", position + 1);
            break;
        }
    }
    if (position == 10)
    {
        printf("value not found");
    }
}