/*
    write a program to reverse given string into another string
    input : apple
    output elppa

    output : vowels = 4 words = 2
    steps
    1   create string  line, reverse
    2   create start, end variable as integer
    3   accept input with space
    4   initialize start variable with 0
    5   initialize end variable with size of line
    6   reverse[start] = line[end]
    7   start++
    8   end--
    9   reverse[start] = line[end]
    10  start++
    11  end--

    repeat step 6 to 8 for each letter in line string
*/
#include <stdio.h>
#include <string.h>
#define SIZE 64
// ABOVE CONSTANT (READ ONLY VARIABLE)
void main()
{
    char line[SIZE], reverse[SIZE];
    int start = 0, end;
    printf("enter line");
    gets(line);
    fflush(stdin);
    end = strlen(line) - 1;
    printf("%d", end);

    for (; end >= 0; end--)
    {
        reverse[start] = line[end];
        start++;
    }
    reverse[start] = '\0';
    printf("line = %s", line);
    printf("\n reverse = %s", reverse);
}