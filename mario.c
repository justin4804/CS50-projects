#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int a;

    do
    {
      a = get_int("Height:");
    }
    while(a<1 || a>8);

    int i,j,k;

    for(i=0; i<a; i++)
    {
       for(k=0; k<a-i-1; k++)
       {
           printf(" ");

       }
       for(j=0; j<=i;j++)
{
         printf("#");

}
         printf("\n");
    }
}