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

// #include <cs50.h>
// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>
// #include <stdlib.h>

// int main(int argc, string argv[])
// {
//     if (argc != 2)
//     {
//         return 1;
//     }
//     int key = atoi(argv[1]);
//     string text = get_string("Enter your text: ");

//     for (int i = 0; text[i] != '\0'; i++)
//     {
//         if (isupper(text[i]))
//         {
//             text[i]=((text[i]-'A'+key)%26)+'A';
//         }
//         else if (islower(text[i]))
//         {
//             text[i]=((text[i]-'a'+key)%26)+'a';
//         }
//     }
//     printf("ciphertext: %s\n",text);
// }

// lets start the third and the last problem of the pset2

// this is the subsitution problem of the problem set 2

// #include <stdio.h>
// #include <stdlib.h>
// #include <cs50.h>
// #include <ctype.h>
// #include <string.h>

// int main(int argc, string argv[])
// {
//     if (argc != 2)
//     {
//         return 1;
//     }
    
//     if (strlen(argv[1])!=26)
//     {
//         return 1;
//     }
    
//     for (int i = 0; i<26;i++)
//     {
//         if (isalpha(argv[1][i])==0)
//         {
//             return 1;
//         }
//         for (int j=i+1; j<26;j++)
//         {
//             if(tolower(argv[1][i]) == tolower(argv[1][j]))
//             {
//                 return 1;
//             }
            
//         }
//     }

//     string input = get_string("Enter your text: ");

//     for (int i = 0; input[i] != '\0'; i++)

//     {
//         if (isupper(input[i]))
//         {
//             int position = input[i]-'A';
//             input[i]= argv[1][position];
//         }
//         else if (islower(input[i]))
//         {
//             int position = input[i]-'a';
//             tolower(input[i]= argv[1][position]);
//         }
//     }


//     printf("ciphertext: %s\n", input);
// }


///FULL PSET2 DONE !!!!!!!