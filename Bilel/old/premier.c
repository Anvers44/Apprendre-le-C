#include <stdio.h> 
#include <stdlib.h>

int main (int argc, char *argv[])
{
    int n = 0;
    int r = 0;

  printf("***** Nombre Premier ****** \n");
  printf(" Choose a Number : ");
  scanf("%d",&n);

  if (n <= 1)
  {
    printf("%d, n'est pas premier \n",n);
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
    printf("%d --> n'est pas un nombre Premier.\n",n);
    printf("nombre de Diviseur = %d\n",r);
  }else{
    printf("%d --> Est un nombre Premier.\n",n);
  }

  return 0;
}