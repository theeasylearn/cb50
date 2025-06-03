/*
    write a program to count words and vowels in string
    input : ankit patel
    output : vowels = 4 words = 2
    steps
    1   create string  as fullname
    2   create vowel and word variable, store 0 into vowel and 1 into word
    3   accept input with space
    4   check whether the value at position 0 is vowel
    5   if(fullname[0] == 'a' or fullname[0] == 'e' or fullname[0] == 'i' or fullname[0] == 'o' or fullname[0] == 'u')
        vowel++
    6   check whether the value at position is space or not
        if(fullname[0] == ' ')
        word++
    7   if(fullname[1] == 'a' or fullname[1] == 'e' or fullname[1] == 'i' or fullname[1] == 'o' or fullname[1] == 'u')
        vowel++
    8   check whether the value at position is space or not
        if(fullname[1] == ' ')
        word++
    repeat step 5 and 6 for each letter in string
*/
#include <stdio.h>
#include <ctype.h>
#define SIZE 64
// ABOVE CONSTANT (READ ONLY VARIABLE)
void main()
{
    char fullname[SIZE], letter;
    int vowel = 0, word = 1, position;
    printf("enter your full name");
    gets(fullname);
    fflush(stdin);

    for (position = 0; position < SIZE && fullname[position] != '\0'; position++)
    {
        letter = tolower(fullname[position]);
        if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
            vowel++;

        if (letter == ' ')
            word++;
    }
    printf("\n vowels = %d and words = %d", vowel, word);
}