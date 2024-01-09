#include <stdio.h>
void main() {
    //variable declaration
	int N, num[30], pari=0, dispari=0, i;
	int sommaP=0, sommaD=0;
	float mediaP, mediaD;
	//user coice ot the numbers to input from 0 to 30
	do {
		printf("Quanti numeri interi vuoi inserire?\n");
		scanf("%d", &N);
	} while (N<=0 || N>30);
	//user input the numbers
	for (i=0; i<N; i++) { //inizio for
		printf("Inserisci un numero\n");
		scanf("%d", &num[i]);
		//checks if the number is odd or even
		if(num[i]%2==0) {
			pari++;
			sommaP=sommaP+num[i];
		}

		else {
			dispari++;
			sommaD=sommaD+num[i];
		}

	} 
	//calculation of the odd and even avarage numbers
	mediaP=sommaP/pari;
	mediaD=sommaD/dispari;

	// output numbers
	printf("Sono stati inseriti %d numeri pari e %d numeri dispari\n", pari, dispari);
	printf("La somma dei numeri pari e': %d\n", sommaP);
	printf("La media dei numeri pari e': %.2f\n", mediaP);
	printf("\n");
	printf("La somma dei numeri dispari e': %d\n", sommaD);
	printf("La media dei numeri dispari e': %.2f\n", mediaD);
}

01_parDispSomMed.c
Visualizzazione di 01_parDispSomMed.c.
