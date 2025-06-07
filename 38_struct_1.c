/* write a program to understand concept of structure */
#include <stdio.h>
// define structure
struct student
{
    char name[32]; //array within structure
    float weight;
    int age;
    char gender;
}; // 32+4+2+1 each structure variable will occupy 39 bytes
void main()
{
    struct student s1;
    printf("Enter student name");
    gets(s1.name);

    printf("enter gender");
    scanf("%c", &s1.gender);

    fflush(stdin);
    printf("enter weight");
    scanf("%f", &s1.weight);

    printf("enter age");
    scanf("%d", &s1.age);

    fflush(stdin);
    printf("Student detail \n name = %s, age = %d weight = %f gender = %c", s1.name, s1.age, s1.weight, s1.gender);
}