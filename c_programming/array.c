#include <cs50.h>
#include <stdio.h>

float average (int length,int numbers[]);

int main (void)
{
    const int N = 3;
    int scores[N];
    for (int i = 0; i<N;i++)
    {
        scores[i]=get_int("enter your score: ");
    }
    printf("average %f\n",average(N,scores));
}

float average (int length,int numbers[])
{
    int sum = 0 ;
    for (int i = 0; i < length; i++)
    {
        sum += numbers[i];

    }
    return sum/(float) length;
}