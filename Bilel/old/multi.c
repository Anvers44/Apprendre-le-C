#include <stdlib.h>
#include <stdio.h>

int main (int argc , char *argv[])
{
    int n = 0;


    printf ("choose a number : ");
    scanf("%d",&n);

    for (int i = 1; i <=10; i++)
    {
        int r = 1;
        r = n * i;
        printf ("5 X %d = %d\n",i,r);
    }



    return 0;
}