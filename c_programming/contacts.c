#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
   FILE *file = fopen("contacts.csv","a");
   if (file == NULL)
   {
      return 1; 
   }
   char *name = get_string("enter your name:   ");
   char *number = get_string("enter your number:   ");
   
   fprintf (file,"%s,%s\n",name,number);
   fclose(file);

   return 0;
}    