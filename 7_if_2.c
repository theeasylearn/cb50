/* write a program to accept dimension of frame from user. then findout display frame is portrait landscape or square 
    steps 
    ------------------------------------------
    1) create variable length & width 
    2) accept input from user in length variable
    3) accept input from user in width variable
    4) if length is greater then width then
        4.1 display frame is potrait 
    5) if width is greater then length then 
        5.1 display frame is landscape 
    6) if width and length are equal then 
        6.1 display frame is square
*/
#include<stdio.h>
void main()
{
    int length,width;
    printf("enter length");
    scanf("%d",&length);

    printf("enter width");
    scanf("%d",&width);
    

    if (length>width) // == != < > >= <=
    {
        printf("shape is portrait");
    }

    if(width>length)
    {
        printf("shape is landscape");
    }
    
    if(width==length)
    {
        printf("shape is square");
    }
}