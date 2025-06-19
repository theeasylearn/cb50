/* example of array of structure */
#include <stdio.h>
struct result
{
    char name[32];         // 32
    int subject[3], total; // 6 + 2
    float average;         // 4
}; // 44 bytes
void main()
{
    struct result list[3];
    int position;
    for (position = 0; position < 3; position++)
    {
        printf("\n enter %d student detail", position+1);
        printf("\n Enter name");
        fflush(stdin);
        gets(list[position].name);
        fflush(stdin);
        printf("enter 1st subject marks");
        scanf("%d", &list[position].subject[0]);

        printf("enter 2nd subject marks");
        scanf("%d", &list[position].subject[1]);

        printf("enter 3rd subject marks");
        scanf("%d", &list[position].subject[2]);

        list[position].total = list[position].subject[0] + list[position].subject[1] + list[position].subject[2];
        list[position].average = list[position].total / 3;
    }

    for (position = 0; position < 3; position++)
        printf("\n %-40s  %10d  %10d  %10d  %10d %.2f", list[position].name, list[position].subject[0], list[position].subject[1], list[position].subject[2], list[position].total, list[position].average);
}