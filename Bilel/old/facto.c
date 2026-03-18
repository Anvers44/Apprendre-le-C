#include <stdio.h>
#include <stdlib.h>

int n = 0;
int r = 0;

int main (int argc, char *argv[])
{
    printf("Choose a number :");
    scanf("%d",&n);
    r = n ;
    for (int i = n-1; i > 0 ; i--)
    {
        r = r * i;
    }

    printf("%d! = %d",n,r);
}