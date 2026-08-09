// this is the second problem set of the cs50 course

// first problem readability

// #include <cs50.h>
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// #include <math.h>

// int main(void)
// {
//     char *text;
//     do
//     {
//         text = get_string("Enter your text:  ");
//     } while (strlen(text) == 0);

//     // this is the letters counter

//     int letter = 0;
//     int words = 1;
//     int sentences = 0;

//     for (int i = 0; text[i] != '\0'; i++)
//     {
//         if (isalpha(text[i]))
//         {
//             letter++;
//         }
//         if (text[i] == ' ')
//         {
//             words++;
//         }
//         if (text[i] == '.' || text[i] == '!' || text[i] == '?')
//         {
//             sentences++;
//         }
//     }
//     float l = ((float)letter / words) * 100;
//     float s = ((float)sentences / words) * 100;

//     int index = round(0.0588 * l - 0.296 * s - 15.8);

//     if (index >= 16)
//     {
//         printf("Grade 16+\n");
//     }
//     else if (index < 1)
//     {
//         printf("Before Grade 1\n");
//     }
//     else
//     {
//         printf("Grade %i\n", index);
//     }
// }

// lets start the second problem of the pset2

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        return 1;
    }
    int key = atoi(argv[1]);
    string text = get_string("Enter your text: ");

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (isupper(text[i]))
        {
            text[i]=((text[i]-'A'+key)%26)+'A';
        }
        else if (islower(text[i]))
        {
            text[i]=((text[i]-'a'+key)%26)+'a';
        }
    }
    printf("ciphertext: %s\n",text);
}