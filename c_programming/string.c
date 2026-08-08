#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main (void)
{
    string input = get_string("enter your input: ");
    printf("output: ");
    for (int i = 0; i < strlen(input);i++)
    {
        printf("%c",input[i]);
    }
    printf("\n");
}