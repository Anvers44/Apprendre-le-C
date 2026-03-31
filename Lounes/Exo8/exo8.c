#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   long nombre = 0;
   long i = 1;
   int imp = 0;

   printf("Veuillez introduire un nombre\n");
   scanf("%ld", &nombre);

   while (i <= nombre) 
   {
    if(nombre % i == 0)
    {
        i ++;
        imp ++;
    } else 
    {
        i ++;
    }
   }

   if (imp > 2) 
   {
    printf("%ld n'est pas un nombre premier\n", nombre);
   } else 
   {
    printf("%ld est un nombre premier\n", nombre);
   }

return 0;
}