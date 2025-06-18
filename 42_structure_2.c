/* example of array of structure */
#include<stdio.h>
struct result
{
    char name[32]; //32
    int subject[3],total; // 6 + 2
    float average; //4
}; //44 bytes
void main()
{
   struct result list[3];
    
}