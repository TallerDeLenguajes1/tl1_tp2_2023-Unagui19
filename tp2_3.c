#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 7

int main()
{
    int i=0;
    int mt[N][M],*punt;

    punt=mt;

    srand(time(NULL));
    
    for((punt+i);i<N*M; i++)
    {

            *punt=1+rand()%100;
            printf("%d", *punt);
            printf("\n");
    }

    return 0;
}
