/*Scrivere
un programma in C che dopo aver inserito una stringa a piacere
permetta di:

1)Inserire un carattere, scelto dall’utente in una posizione sempre
scelta dall’utente;

2)Sostituisca un carattere, scelto dall’utente, con il seguente: X.
*/
#include <stdio.h>
#include <string.h>


int main() {
    char stringa[100];
    char carattere;
    char carattereDaSostituire;
    int posizione,scelta;

    printf("inserisci una stringa");
    scanf("%s",&stringa);
    
    printf("[1] aggiungi un carattere nella posizione scelta");
    printf("[2] cambia un carattere con 'X' nella posizione scelta");
    scanf("%d",&scelta);

    if(scelta==1)
    {
                  
    printf("Inserisci un carattere da inserire: ");
    scanf(" %c", &carattere);

    
    printf("Inserisci la posizione in cui inserire il carattere: ");
    scanf("%d", &posizione);

   
    for (int i = strlen(stringa); i > posizione; i--) {
        stringa[i + 1] = stringa[i];
    }

 
    stringa[posizione] = carattere;

    
    printf("Stringa dopo l'inserimento: %s\n", stringa);
                  
    }else{
    
    printf("Inserisci il carattere da sostituire: ");
    scanf(" %c", &carattereDaSostituire);

    
    for (int i = 0; i < strlen(stringa); i++) {
        if (stringa[i] == carattereDaSostituire) {
            stringa[i] = 'X';
        }
    }

    
    printf("Stringa con carattere sostituito: %s\n", stringa);
  
    }
    
    return 0;
