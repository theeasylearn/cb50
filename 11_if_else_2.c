/*
    write a program to accept person age and findout whether he can apply for civil service or not. if person age is between 18 and 35 both including he can apply otherwise he can not apply 

    steps 
    ---------------------------------------
    1) create variable age 
    2) accept age from user 
    3) check age is above 17 and below 36 then 
        display person is eligible for civil service 
        else  
    4)    display person is not eligible for civil service 
*/
#include<stdio.h>
void main()
{
    int age;
    printf("enter age");
    scanf("%d",&age);
    if(age>17 && age<35)
    {
        printf("person is eligible for civil service");
    }
    else 
    {
        printf("person is not eligible for civil service");
    }
}