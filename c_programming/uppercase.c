#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    string before = get_string("before:  ");
    printf("after:     ");
    for (int i = 0, n = strlen(before);i < n;i++)
    {
        if (before[i]>='a' && before[i]<='z')
        {
            printf ("%c",before[i]-32);
        }

        else
        {
            printf("%c",before[i]);
        }

    }
    printf("\n");
}