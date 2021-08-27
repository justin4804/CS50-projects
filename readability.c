#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    float w = 0.0, l = 0.0, s = 0.0;

    //getting input ffrom user
    string input = get_string("Text:");

    for (int i=0,n = strlen(input); i < n; i++)
    {
        //loop checks if inp is low or upp case and increases value of letter by 1
         if (isupper(input[i]) || islower(input[i]))
        {

         l +=1.0;

        }
        // checks if space is there to incre no of words
        else if (isspace(input[i]))
        {
            w +=1.0;
        }
        // checks to increase no of sentences
         else if (input[i] == '.' || input[i] == '?' || input[i] == '!')
        {
            s += 1.0;
        }




    }
        //increase in word bec words are 1 more than spaces as no sent ends or begins with space
        w +=1.0;

            float L = (l/w) * 100;
            float S = (s/w) * 100;
            float index = 0.0588 * L - 0.296 * S - 15.8;
            int grade = round(index);

            //final output printing
            if (grade >= 16)
            {
                printf("Grade 16+\n");
            }
            else if (grade <= 1)
            {
                printf("Before Grade 1\n");
            }
            else
            {
                printf("Grade %i\n", grade);
            }
}
