#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct compu {
    int velocidad;//entre 1 y 3 GHz
    int anio;//entre 2015 y 2023
    int cantidad;//entre 1 y 8  
    char *tipo_cpu; //valores del arreglo tipos
}
typedef PC ;

void mostrarLista(PC *computadora);
void mostrarMasVieja(PC *computadora);
void mostrarMasRapida(PC *computadora);

int main()
{
    PC computadora[5];
    srand(time(NULL));
    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};



    for (int i = 0; i < 5; i++)
    {
        computadora[i].velocidad= rand()%3 + 1 ;
        computadora[i].anio= rand()%9 + 2015; //entre 2015 y 2023
        computadora[i].tipo_cpu=tipos[rand()%6];
        computadora[i].cantidad= rand()%1 + 8; 
    }

    mostrarLista(computadora);
    mostrarMasVieja(computadora);
    mostrarMasRapida(computadora);

    return 0;
}


void mostrarLista(PC *computadora)
{
    for (int i = 0; i < 5; i++)
    {
        printf("----PC %d \r\n",i+1);
        printf("Velocidad de procesamiento: %dGHz\n",(computadora+i)->velocidad);
        printf("Anio de fabricacion: %d\n",(computadora+i)->anio);
        printf("Tipo de procesador: %s\n",(computadora+i)->tipo_cpu);
        printf("Cantidad de nucleos: %d\n",(computadora+i)->cantidad);
    }
}

void mostrarMasVieja(PC *computadora)
{
    int aux=2023,j=0;
    
    for (int i = 0; i < 5; i++)
    {
        if ((computadora+i)->anio <= aux)
        {
            aux=(computadora+i)->anio;
            j++;
        }
        
    }

    if (j>1)
    {
        printf("Las pc's mas viejas son: \n");
    }
    else
    {
        printf("La pc mas vieja es: \n");
    }

    for (int k = 0; k < 5; k++)
    {
        if (aux==(computadora+k)->anio)
        {
            printf("----PC %d \r\n",k+1);
            printf("Velocidad de procesamiento: %dGHz\n",(computadora+k)->velocidad);
            printf("Anio de fabricacion: %d\n",(computadora+k)->anio);
            printf("Tipo de procesador: %s\n",(computadora+k)->tipo_cpu);
            printf("Cantidad de nucleos: %d\n",(computadora+k)->cantidad);
        }
    }   
}

void mostrarMasRapida(PC *computadora)
{
    int aux=0,j=0;
    
    for (int i = 0; i < 5; i++)
    {
        if ((computadora+i)->velocidad >= aux)
        {
            aux=(computadora+i)->velocidad;
            j++;
        }
        
    }

    if (j>1)
    {
        printf("Las pc's mas rapidas son: \n");
    }
    else
    {
        printf("La pc mas rapida es: \n");
    }

    for (int k = 0; k < 5; k++)
    {
        if (aux==(computadora+k)->velocidad)
        {
            printf("----PC %d \r\n",k+1);
            printf("Velocidad de procesamiento: %dGHz\n",(computadora+k)->velocidad);
            printf("Anio de fabricacion: %d\n",(computadora+k)->anio);
            printf("Tipo de procesador: %s\n",(computadora+k)->tipo_cpu);
            printf("Cantidad de nucleos: %d\n",(computadora+k)->cantidad);
        }
    }   
}