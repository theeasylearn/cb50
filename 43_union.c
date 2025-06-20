#include <stdio.h>
union citizen
{
    char passport[8];    // 8 bytes
    char rationcard[10]; // 10 bytes
}; // 10 bytes
struct person
{
    char name[33]; // 1d array of char (string) 33 (array within structure)
    int age;       // 2 byte
    float weight;  // 4 bytes
    char isIndian; // 1 byte
    union citizen status;
};
void main()
{
    struct person s1;
    printf("Enter name");
    gets(s1.name); // with space input will be taken from user
    fflush(stdin);
    printf("Enter weight");
    scanf("%f", &s1.weight);
    printf("Enter age");
    scanf("%d", &s1.age);
    fflush(stdin);
    printf("is this person indian (t=true,f=false)");
    scanf("%c", &s1.isIndian);
    fflush(stdin);
    if (s1.isIndian == 't' || s1.isIndian == 'T')
    {
        printf("what is your ration card number");
        gets(s1.status.rationcard);
    }
    else
    {
        printf("what is your passport number");
        gets(s1.status.passport);
    }
    printf("name = %s \n weight = %.2f \n age = %d isIndian = %c", s1.name, s1.weight, s1.age, s1.isIndian);
    if (s1.isIndian == 't' || s1.isIndian == 'T')
    {
        printf("\n ration card no = %s", s1.status.rationcard);
    }
    else
    {
        printf("\n passport no = %s", s1.status.passport);
    }

}