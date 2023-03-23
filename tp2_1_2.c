#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

int main()
{
    int i=0;
    double vt[N],*punt;
    punt=vt;
    srand(time(NULL));

    for(punt+i;i<N; i++)
    {
        *punt=1+rand()%100;
        printf("%.0f\n", *punt);
    }

    return 0;
}

