#include <stdio.h>
#include <stdlib.h>

int n = 0;
int r = 0;
int i = 1;


int main (int argc, char *argv[])
{
printf("***** Compter les chiffres d'un Nombre ***** \n");
printf("Choose a number :");
scanf("%d",&n);
r = n;
while (n / 10  >= 1)
{
    i++;
    n = n / 10;
}

printf("%d --> %d", r,i);

}