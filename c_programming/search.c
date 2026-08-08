#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string strings[]={"battleship","parth","sigma"};
    string s = get_string("what's s:  ");
    for (int i = 0;i<3;i++)
    {
        if (strcmp(strings[i],s)==0)
        {
            printf("found\n");
            return 0 ;
        }
    }
    printf("not found\n");
    return 1;
    
}