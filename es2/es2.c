#include <stdio.h>

int main()
{
    float importo, sconto, prezzoNetto;
    char risposta;

    do
    {
        do{// Input of the import
        printf("Inserisci l'importo dell'acquisto: ");
        scanf("%f", &importo);
        } while (importo < 0);
        // the calculation of the discount
        if (importo <= 500)
        {
            sconto = importo * 1 * 10 / 100;
        }
        else if (importo <= 1000)
        {
            sconto = importo * 0.2;
        }
        else
        {
            sconto = importo * 0.3;
        }

        // calculation of the net price
        prezzoNetto = importo - sconto;

        // Output of the discount and net price
        printf("Sconto applicato: %.2f euro\n", sconto);
        printf("Prezzo netto: %.2f euro\n", prezzoNetto);

        // request for further sums of money
        printf("Vuoi fare un'altra somma? (s/n): ");
        scanf(" %c", &risposta);

    } while (risposta == 's' || risposta == 'S');

    printf("Gfine programma.\n");

    return 0;
}
