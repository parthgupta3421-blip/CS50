#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string numbers;
} person;

int main (void)
{
    person people[3];
    people[0].name = "parth";
    people[0].numbers = "+91 6005440370";

    people[1].name = "simran";
    people[1].numbers = "+91 9086605589";

    people[2].name = "anu";
    people[2].numbers = "+91 6006871123";
    
    string s = get_string("enter your name:   ");

    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name,s)==0)
        {
            printf("found\n%s\n",people[i].numbers);
            return 0;
        }
    }
    printf("not found\n");
    return 1;
}