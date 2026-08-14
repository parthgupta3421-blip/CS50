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

// lets go for the second programme

// #include <cs50.h>
// #include <stdio.h>
// #include <string.h>

// #define MAX 9

// typedef struct
// {
//     string name;
//     int votes;
//     bool eliminated;
// } candidate;

// candidate candidates[MAX];

// int candidate_count;
// int voter_count;

// int preferences[MAX][MAX];

// bool vote(int voter, int rank, string name);
// void tabulate(void);
// bool print_winner(void);
// int find_min(void);
// bool is_tie(int min);
// void eliminate(int min);

// int main(int argc, string argv[])
// {
//     if (argc < 2)
//     {
//         printf("Usage: runoff [candidate ...]\n");
//         return 1;
//     }

//     candidate_count = argc - 1;

//     if (candidate_count > MAX)
//     {
//         return 1;
//     }

//     for (int i = 0; i < candidate_count; i++)
//     {
//         candidates[i].name = argv[i + 1];
//         candidates[i].votes = 0;
//         candidates[i].eliminated = false;
//     }

//     voter_count = get_int("Number of voters: ");

//     if (voter_count > MAX)
//     {
//         return 1;
//     }

//     for (int i = 0; i < voter_count; i++)
//     {
//         for (int j = 0; j < candidate_count; j++)
//         {
//             string name = get_string("Rank %i: ", j + 1);

//             if (!vote(i, j, name))
//             {
//                 printf("Invalid vote.\n");
//                 return 1;
//             }
//         }
//     }

//     while (true)
//     {
//         // Reset votes before counting this round
//         for (int i = 0; i < candidate_count; i++)
//         {
//             candidates[i].votes = 0;
//         }

//         tabulate();

//         if (print_winner())
//         {
//             break;
//         }

//         int min = find_min();

//         if (is_tie(min))
//         {
//             for (int i = 0; i < candidate_count; i++)
//             {
//                 if (!candidates[i].eliminated)
//                 {
//                     printf("%s\n", candidates[i].name);
//                 }
//             }

//             break;
//         }

//         eliminate(min);
//     }

//     return 0;
// }

// bool vote(int voter, int rank, string name)
// {
//     for (int i = 0; i < candidate_count; i++)
//     {
//         if (strcmp(candidates[i].name, name) == 0)
//         {
//             // I ADDED THIS TO CHECK THE DUPLICATE VOTING IN THE ELECTION OTHERWISE THE RAHUL GANDHI WILL BE SAD 
//             for (int j = 0; j < rank; j++)
//             {
//                 if (preferences[voter][j]==i)
//                 {
//                     return false;
//                 }
//             }

//             preferences[voter][rank] = i;
//             return true;
//         }
//     }

//     return false;
// }

// void tabulate(void)
// {
//     for (int i = 0; i < voter_count; i++)
//     {
//         for (int j = 0; j < candidate_count; j++)
//         {
//             int candidate_index = preferences[i][j];

//             if (!candidates[candidate_index].eliminated)
//             {
//                 candidates[candidate_index].votes++;
//                 break;
//             }
//         }
//     }
// }

// bool print_winner(void)
// {
//     for (int i = 0; i < candidate_count; i++)
//     {
//         if (!candidates[i].eliminated &&
//             candidates[i].votes > voter_count / 2)
//         {
//             printf("THE WINNER OF THE ELECTION IS: %s\n", candidates[i].name);
//             return true;
//         }
//     }

//     return false;
// }

// int find_min(void)
// {
//     int min = voter_count;

//     for (int i = 0; i < candidate_count; i++)
//     {
//         if (!candidates[i].eliminated &&
//             candidates[i].votes < min)
//         {
//             min = candidates[i].votes;
//         }
//     }

//     return min;
// }

// bool is_tie(int min)
// {
//     for (int i = 0; i < candidate_count; i++)
//     {
//         if (!candidates[i].eliminated &&
//             candidates[i].votes != min)
//         {
//             return false;
//         }
//     }

//     return true;
// }

// void eliminate(int min)
// {
//     for (int i = 0; i < candidate_count; i++)
//     {
//         if (!candidates[i].eliminated &&
//             candidates[i].votes == min)
//         {
//             candidates[i].eliminated = true;
//         }
//     }
// }