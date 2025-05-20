#include <stdio.h>
void main()
{
    int foot, inch;
    float meter;
    printf("Enter your height in foot and inch");
    printf("Enter only foot");
    scanf("%d", &foot);
    printf("Enter only inch");
    scanf("%d", &inch);
    //calculate total inch
    inch = inch + (foot * 12);
    meter = inch/39.37;
    
}