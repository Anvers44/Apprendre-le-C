#include <stdio.h>
#include <stdlib.h>

int Nombre = 0;

int main(int argc, char *argv[])
{
   printf("Veuillez introduire un nombre !\n");
   scanf("%u", &Nombre);
  
   int Calcul = Nombre%2;

   if (Calcul==0)
   {
       printf("votre est nombre pair !\n");
   }
   else
   {
       printf("votre nombre impair !\n");
   }
   return 0;
}