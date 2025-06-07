/* write a program to understand concept of array of structure 
    findout & display name of the topper 
*/
#include <stdio.h>
// crete structure
struct marksheet
{
    // create member variables
    char name[32]; //array within structure
    int marks[3]; //array within structure
    int total;
    float average;
};
#define NO_OF_STUDENTS 3
void main()
{
    // create array of structure
    struct marksheet students[NO_OF_STUDENTS];
    for (int index = 0; index < NO_OF_STUDENTS; index++)
    {
        printf("\nenter %d student detail", index + 1);
        printf("\n enter name");
        fflush(stdin);
        gets(students[index].name);
        // 0 to 2
        for (int position = 0; position < 3; position++)
        {
            printf("enter %d subject marks", position + 1);
            scanf("%d", &students[index].marks[position]);
        }
        students[index].total = students[index].marks[0] + students[index].marks[1] + students[index].marks[2];
        students[index].average = students[index].total / 3;
    }
    for (int index = 0; index < NO_OF_STUDENTS; index++)
    {
        printf("%30s %10d %10d %10d %10d %7.2f \n", students[index].name, students[index].marks[0], students[index].marks[1], students[index].marks[2], students[index].total, students[index].average);
    }
}