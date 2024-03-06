#include <stdio.h>
int main()
{
    int dim;

    printf("inserisci la dimensione dei vettori\n");
    scanf("%d",&dim);

    int vettore1[dim],vettore2[dim],vettoreSomma[dim];

    for(int i=0;i<dim;i++){
        printf("inserisci un numero nel vettore 1\n");
        scanf("%d",&vettore1[dim]);
    }
    for(int i=0;i<dim;i++)
    {
        printf("inserisci un numero nel vettore 2\n");
        scanf("%d",&vettore2[dim]);
        printf("%d\n",vettore2[i]);
    }

    for(int i=0;i<dim;i++)
    {
        vettoreSomma=vettore1[i]+vettore2[i];
        printf("somma dei componenti nella posizione %d è uguale a %f \n",(i+1),vettoreSomma[i]);
    }
    
    
    return 0;
}