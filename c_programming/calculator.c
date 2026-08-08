#include <cs50.h>
#include <stdio.h>

int main (void)
{
    long x = 1;
    while(true)
    {
    char c = get_char("would you like to take $%li or should i double it and give it to the next person? ", x);

    if (c=='y'||c=='Y')
    {
        x*=2;
    }
    else 
    {
        break;
    }    
    }
    
}