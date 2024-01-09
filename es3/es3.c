#include <stdio.h>
 
int main(){
    //variables
    int somPos = 0, somNeg= 0, contPos = 0, contNeg = 0, N, numero;
    //user choice of elements they want to input
    printf("Inserisci il numero di elementi (N): ");
    scanf("%d", &N);

    //loop for the user to insert the numbers and then cheks if its positive or negative
    for (int i = 0; i < N; ++i) {
        printf("Inserisci il numero %d: ", i + 1);
        scanf("%d", &numero);

        if (numero > 0) {
            somPos += numero;
            contPos++;
        } else if (numero < 0) {
            somNeg += -numero; 
            contNeg++;
        }
       
    }
	//avarege calculation
    double mediaPos = 0.0, mediaNeg = 0.0;

    if (conteggioPositivi > 0) {
        mediaPos = (double)somPos / contPos;
    }

    if (conteggioNegativi > 0) {
        mediaNeg = (double)somNeg / contNeg;
    }
}
