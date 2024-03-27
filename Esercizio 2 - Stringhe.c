#include <stdio.h>
#include <string.h>

int main(){
    char stringa[100];
    char lettera;
    int scelta;

    printf("inserisci una stringa di lettere\n");
    scanf("%s", &stringa);

    printf("inserisci la lettera\n");
    scanf("%s", &lettera);

    printf("[1] Elimina tutte le lettere uguali alla letera scelta nella stringa\n");
    printf("[2] Elimina la lettera scelta nella posizione scelta\n");
    printf("[3] Aggiunge la lettera nella stringa\n");
    scanf("%d",&scelta);

    switch(scelta){
        case 1:
        for(int i=0;i<strlen(stringa);i++){
            if(stringa[i]==lettera){
               
                if(stringa[strlen(stringa)]==lettera){
                    stringa[i]=NULL;
                }
                stringa[i]=stringa[i+1];
                printf("%s 67\n",stringa);
                
            }
        }
    }
    return 0;
}