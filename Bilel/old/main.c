#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
    int n = 0;
    int r = 0;

    for (int i = 0; i<3; i++)
{
    printf("Choose a Number: ");
    scanf("%d",&n);
     if (n>r)
     {
        r = n;
     }
}
printf("The bigest number is : %d \n", r);
    return 0;
}