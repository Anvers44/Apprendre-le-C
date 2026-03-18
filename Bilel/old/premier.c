#include <stdio.h> 
#include <stdlib.h>

int main (int argc, char *argv[])
{
    int n = 0;
    int r = 0;

  printf("***** Nombre Premier ****** \n");
  printf(" Choose a Number : ");
  scanf("%d",&n);
  
  for (int i = 2; i <= n-1; i++)
  {
    if (n % i == 0)
    {
      r++;
    }
  }
  if (r > 2 )
  {
    printf("%d --> n'est pas un nombre Premier.\n",n);
    printf("nombre de Diviseur = %d\n",r);
  }else{
    printf("%d --> Est un nombre Premier.\n",n);
  }

  return 0;
}