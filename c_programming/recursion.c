#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void)

{

    int floor = get_int("what's your number:  ");
    draw(floor);
}

void draw(int n)
{
    if (n <= 0)
    {
        return;
    }
    draw(n - 1);
    for (int i = 0; i < n + 1; i++)
    {
        printf("#");
    }
    printf("\n");
}