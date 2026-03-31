#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   int a = 0;
   int b = 0;

   printf("Veuillez introduire un nombre\n"); 
   scanf("%d", &a);

while (a > 0)
{
   b = b + a%10;
   if (a > 10) {
      b *= 10;
   }
   a = a/10;
}

printf("%d\n", b);

return 0;
}