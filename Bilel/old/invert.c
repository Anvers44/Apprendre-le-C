#include <stdio.h>
#include <stdlib.h>

int n = 0;
int m = 1;


int main (int argc, char *argv[])
{
    
    printf ("***** Invert Number ***** \n");
    printf ("Choose a number :");
    scanf ("%d",&n);
    int r = n;

    while (n / 10  >= 1)
    {
        n = n / 10;
        m = m * 10;
    }    
    
    while ( r / 10 >= 1)
    {
        n = n + (r % 10) * m;
        m = m / 10;
        r = r / 10;
    }

    printf("number invert = %d \n", n);

}