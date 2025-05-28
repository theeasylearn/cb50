/* write a program to accept value and display value into 1d array */
#include <stdio.h>
void main()
{
    // create array
    // datatype array-name[size]
    int age[5];
    int position;
    for(position=0;position<=4;position++)
    {
        printf("Enter %d student age",position+1);
        scanf("%d", &age[position]);
    }
    for(position=0;position<=4;position++)
    {
        printf("%d person age = %d \n",position+1,age[position]);
    }
    
}