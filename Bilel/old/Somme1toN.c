#include <stdlib.h>
#include <stdio.h>

int main (int argc, char *argv[])
{
    int r = 0;
    int n = 0;  
    printf("Choose a number :");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        r = r + i;
    }

    printf("N= %d -> = %d \n", n, r);
    
    return 0;
}