int N1 = 0;
int N2 = 0;
int N3 = 0;

int main(int argc, char *argv[])
{
   printf("Veuillez introduire le premier nombre !\n");
   scanf("%u", &N1);
   printf("Veuillez introduire le second nombre !\n");
   scanf("%u", &N2);
   printf("Veuillez introduire le troisième nombre !\n");
   scanf("%u", &N3);

   if (N1 > N2 && N3)
   {
       printf("Le chiffre le plus grand est le premier : %d\n", N1);
   }
   else if (N2 > N3 && N1)
   {
       printf("Le chiffre le plus grand est le second : %d\n", N2);
   }
   else
   {
       printf("Le chiffre le plus grand est le troisième : %d\n", N3);
   }
   return 0;
}