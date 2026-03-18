#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main (int argc, char *argv[])
{
    srand(time(NULL));
    int n = 0;
    int r = rand() % 100;
    


    printf("Rand = %d", r);

    return 0;
}