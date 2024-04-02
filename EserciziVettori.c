/*
1) Dopo aver caricato in memoria un 2 vettori di uguale dimensione composti da numeri interi
scrivere in output un terzo vettore dato dalla somma delle componenti fatta a una a una (Vettore
somma).
2) Scrivere un programma in c che dopo aver inserito un vettore di N numeri interi separi il vettore
inserito in 2 ulteriori vettori il primo contenente i numeri pari ed il secondo con i numeri dispari.
3) Scrivere un programma in c che dopo aver inserito un vettore di N numeri controlli l’esistenza di
un numero richiesto successivamente all’utente. In caso affermativo visualizzare quante volte si
ripete il numero e che posizione/i occupa nel vettore utilizzato.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char stringa[100];
    char lettera;
    int scelta,pos;

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
                    stringa[strlen(stringa)]=NULL;
                }
                stringa[i]=stringa[i+1];
                printf("%s 67\n",stringa);
                
            }
        }
        break;
        case 2:
        printf("Inserisci la posizione del carattere che vuoi togliere\n");
        scanf("%d", &pos);
        
        if(stringa[pos]==lettera){
            for(int i=pos;i<strlen(stringa);i++){
                if(stringa[i]==lettera){
               
                    if(stringa[strlen(stringa)]==lettera){
                        stringa[strlen(stringa)]=NULL;
                    }
                    stringa[i]=stringa[i+1];
                    printf("%s 67\n",stringa);
                
                }
            }
        }
        break;
        
        case 3:
        stringa[strlen(stringa)+1]=lettera;
        printf("%s 67\n",stringa);
    }
    return 0;
}
