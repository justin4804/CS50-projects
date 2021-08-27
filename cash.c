#include<stdio.h>
#include<math.h>
#include<cs50.h>

int main(void)
{
    float f;
    do
    {
       f = get_float("Change owed (in Dollars):");
    }
    while(f < 0);

    int cents = round(f*100);

    int q,d,n,p;

    for (q = 0; cents >= 25; q ++)
    {

    cents = cents - 25;
    }

    for (d = 0; cents >= 10; d ++)
    {

    cents = cents - 10;
    }

    for (n = 0; cents >= 5; n ++)
    {

    cents = cents - 5;
    }

    for (p = 0; cents >= 1; p ++)
    {

    cents = cents - 1;
    }

    int ans;
    ans = q + d + n + p;

    printf("Coins required :%i\n", ans);
}
