// example of user defined function
// type 1
// without return value without argument
#include <stdio.h>
void printline()
{
    printf("\n-------------------------------------------------------------------------------------------------- \n");
}
// type 2
// without return value with argument function
void printletter(char letter, int count)
{
    printf("\n");
    for(int i=0;i<count;i++)
    {
        printf("%c", letter);
    }
    printf("\n");
}
void main()
{
    // run/call/execute function printline
    printline();
    printf("the easylearn academy");
    printline();
    printletter('#', 100);
    printletter('@',40);
}