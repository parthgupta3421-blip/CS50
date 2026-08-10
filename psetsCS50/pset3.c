// this is the first problem plurality

// #include <cs50.h>
// #include <stdio.h>
// #include <string.h>

// typedef struct
// {
//     string name;
//     int votes;
// } candidate;

// candidate candidates[3];
// bool vote(string);
// void print_winner(void);

// int main(void)
// {

//     candidates[0].name = "parth";
//     candidates[1].name = "rahul";
//     candidates[2].name = "ram";

//     candidates[0].votes = 0;
//     candidates[1].votes = 0;
//     candidates[2].votes = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         string input = get_string("Enter your name:  ");

//         vote(input);
//     }

//     print_winner();
//     return 0;
// }
// bool vote(string name)
// {
//     for (int i = 0; i < 3; i++)
//     {
//         if (strcmp(candidates[i].name, name) == 0)
//         {
//             candidates[i].votes++;
//             return true;
//         }
//     }
//     return false;
// }

// void print_winner(void)
// {
//     int max = 0;
//     for (int i = 0; i < 3; i++)
//     {
//         if (candidates[i].votes > max)
//         {
//             max = candidates[i].votes;
//         }
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         if (candidates[i].votes == max)
//         {
//             printf("Winner candidate Name is %s\n", candidates[i].name);
//         }
//     }
// }


// first programme is done!!!!