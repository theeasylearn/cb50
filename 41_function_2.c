// write a program to create user defined function that return value but it has no argument 
#include<stdio.h>
float getPi()
{
    float pi = 3.1415;
    return pi; 
}
//with return value with argument
int getSquare(int number)
{
    int square = number * number;
    return square;
}
void main()
{
    int radius,square;
    float area,pi;
    printf("enter circle radius");
    scanf("%d",&radius); //10
    square = getSquare(radius);
    pi = getPi(); //call
    area = pi * square;
    printf("area = %.2f",area);

}
