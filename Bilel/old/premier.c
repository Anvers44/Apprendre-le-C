#include <stdio.h> 
#include <stdlib.h>

int main (int argc, char *argv[])
{
    long n = 0;
    int r = 0;

  printf("***** Nombre Premier ****** \n");
  printf(" Choose a Number : ");
  scanf("%ld",&n);

  if (n <= 1)
  {
    printf("%ld, n'est pas premier \n",n);
    return 0;
  }
  
  for (int i = 1; i <= n; i++)
  {
    if (n % i == 0)
    {
      r++;
    }
  }
  if (r > 2 )
  {
    printf("%ld --> n'est pas un nombre Premier.\n",n);
    printf("nombre de Diviseur = %d\n",r);
  }else{
    printf("%ld --> Est un nombre Premier.\n",n);
  }

  return 0;
}