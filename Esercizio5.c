
#include <stdio.h>

int main() {
    
    char denominazione[50]; 
    int continua, countIntervallo = 0, countTot = 0, mediaCount = 0;
    float sommaPrezzi = 0, prezzo,  mediaPrezzi = 0, prezzoMax = 0, prezzoMin = 0, mediaIntervallo = 0, sommaPrezziIntervallo = 0;
    

    do {
        
        do {
           
            printf("Inserisci il nome della denominazione: ");
            scanf("%s", denominazione);

           
            printf("Inserisci il prezzo dell'azione %s: ", denominazione);
            scanf("%f", &prezzo);

          
            if (prezzo <= 0) {
                do {
                    printf("Non puoi inserire un prezzo negativo! Inserisci un prezzo positivo: ");
                    scanf("%f", &prezzo);
                } while (prezzo <= 0);
            }

          
            if (prezzo >= 2.50 && prezzo <= 3.50) {
                sommaPrezziIntervallo += prezzo;
                countIntervallo++;
                mediaIntervallo = sommaPrezziIntervallo / countIntervallo;
            }

            countTot++;

          
            if (countTot == 1 || prezzo > prezzoMax) {
                prezzoMax = prezzo;
            } 
            if (countTot == 1 || prezzo < prezzoMin) {
                prezzoMin = prezzo;
            }
        } while (prezzo <= 0);

       
        sommaPrezzi += prezzo;
        mediaPrezzi += prezzo;
        mediaCount++;

        printf("Vuoi inserire un'altra denominazione? \n (1) Si \n (2) No \n");
        printf("Risposta: ");
        scanf("%d", &continua);

    } while (continua != 2);  

   
    if (mediaCount > 0) {
        mediaPrezzi /= mediaCount;
    }

    
    printf("La somma dei prezzi delle azioni è: %.2f\n", sommaPrezzi);
    printf("La media dei prezzi delle azioni è: %.2f\n", mediaPrezzi);
    printf("L’azione con il prezzo massimo è: %.2f\n", prezzoMax);
    printf("L’azione con il prezzo minimo è: %.2f\n", prezzoMin);

   
    if (countIntervallo > 0) {
        printf("La media dei prezzi delle azioni nell'intervallo tra 2.50 e 3.50 euro è: %.2f\n", mediaIntervallo);
    }

    return 0;
}