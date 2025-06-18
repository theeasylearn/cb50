/* example of structure */
#include<stdio.h>
struct student
{
    //member variable
    char name[33]; //1d array of char (string) 33 (array within structure)
    char gender; //1 byte
    int age; //2 byte
    float weight; //4 bytes
}; //40 each structure student type variable when created, will occupied 40 bytes in memory

void main()
{
    //create structure type variable
    struct student s1;
    //input
    printf("Enter name");
    gets(s1.name); //with space input will be taken from user 
    fflush(stdin);
    printf("Enter gender");
    scanf("%c",&s1.gender);
    printf("Enter weight");
    scanf("%f",&s1.weight);
    printf("Enter age");
    scanf("%d",&s1.age);
    // output
    printf("name = %s \n gender = %c \n weight = %.2f \n age = %d",s1.name,s1.gender,s1.weight,s1.age);
}