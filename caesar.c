#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>

int main (int argc, string argv[])
{
    //setting 1st conditions for command line
    if(argc ==2 && isdigit(*argv[1]))
    {
        printf("Success\n");

    //convert string key to integer
    int k = atoi(argv[1]);

    //input from user
    string s =get_string("Plaintext:");

    //printing ciphertext
    printf("ciphertext: ");

    //loop so that each character can be used individually
    for(int i=0, n = strlen(s); i < n; i++)
    {
        //uppercase converts to alpha index by subtracting by 'A'
        if (isupper(s[i]))
        {
            //adding 'A' at end to convert into ASCII
          printf("%c", (((s[i] - 'A') + k) % 26) + 'A');

        }


         //lowercase converts to alpha index by subtracting by 'a'
        else if (islower(s[i]))
        {
            //adding 'a' at end to convert into ASCII
          printf("%c", (((s[i] - 'a') + k) % 26) + 'a');

        }

        else
        {
           //printing other characters as they are
            printf("%c", s[i]);
        }

    }
         printf("\n");

        //exit code 0 for no error
         return 0;
    }
    else
    {
        printf("Usage : ./caesar key\n");
        //exit code 1 for error
        return 1;
    }

}
