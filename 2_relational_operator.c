// example of relational operator 
/*
    relational operators/ comparison 
  it is used to compare variables/value. it always give result in terms true (1) or false(0)
  
  1 == used to check 2 variable has same value or not  
  2 != used to check 2 variable has different value or not  
  3 <  used to check whether left side variable is less then right side variable or not 
  4 >  used to check whether right side variable is greater then left side variable or not 
  5 <= used to check left side variable is less then or equal to right side variable
  6 >=used to check right side variable is greater then or equal to left side variable
*/
#include<stdio.h>
void main()
{
    int a,b;
    a = 10;
    b = 11;

    printf("%d = %d == %d",a==b,a,b);
    printf("\n %d = %d != %d",a!=b,a,b);
    printf("\n %d = %d < %d",a<b,a,b);
    printf("\n %d = %d > %d",a>b,a,b);
    printf("\n %d = %d <= %d",a<=b,a,b);
    printf("\n %d = %d >= %d",a>=b,a,b);

}