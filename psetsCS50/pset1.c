// First assignment hello world 

// #include <stdio.h>
// #include <cs50.h>

// int main (void)
// {
//     char *name = get_string("enter your name:  ");
//     printf("hello , %s\n",name);
//     return 0; 
// }


//second assignment mario one sided 

// #include <stdio.h> 
// #include <cs50.h>

// int main (void)
// {
//     int height = get_int("Enter height: ");
//     for (int i = 0; i < height;i++)
//     {
//         for (int j = 0 ; j < i+1;j++)
//         {
//             printf("#");
//         }    

//         printf("\n");
//     }
//     return 0; 
// }    


//third assignment right side

// #include <stdio.h>
// #include <cs50.h>

// int main(void)
// {   
//     int height ;
//     do
//     {
//         height = get_int("Enter your height of the pyramid:  ");
//     }
//     while(height<1);
//     for (int i = 0 ; i < height ; i++)
//     {
//         for (int j =0; j<height; j++ )
//         {
//             if (j<height-i-1)
//             {
//                 printf(" ");
//             }
//             else
//             {
//                 printf("#");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }

// forth assignment full mario pyramid 


// #include <stdio.h>
// #include <cs50.h>

// int main (void)
// {
//     int height;
//     do 
//     {
//         height = get_int("Enter your height: ");
//     }
//     while (height < 1);

//     for (int i = 0 ;i < height; i++)
//     {

//         for (int j = 0; j<height-i-1;j++)
//         {
//             printf(" ");
//         }
//         for(int j = 0; j<i+1;j++)
//         {
//             printf("#");
//         }
//         printf("  ");
        
//         for(int j=0; j<i + 1;j++)
//         {
//             printf("#");
//         }    
//         printf("\n");
//     }  
// }      



// this is the fifth problem named as the cash lets start 


// #include <cs50.h>
// #include <stdio.h>

// int main (void)
// {
//     int cents;
//     do 
//     {
//         cents = get_int("Enter your money: ");
//     }
//     while (cents<0);
//     int coins = 0;
    
//     
//         if (cents>=25)
//         {
//             coins += cents/25;
//             cents = cents%25;
//         }
//         if (cents>=10)
//         {
//             coins += cents/10;
//             cents = cents%10;
//         }
//         if(cents>=5)
//         {
//             coins += cents/5;
//             cents = cents%5;
//         }
//         if (cents>=1)
//         {
//             coins += cents/1;
//             cents = cents%1;
//         }

//     }
//     printf("%i\n",coins);
// }