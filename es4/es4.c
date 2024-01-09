#include <stdio.h>

int main()
{
    int N, somma = 0, num = 2, cont = 0, primo = 0;

    // Input of the numbers
    do
    {
        printf("Inserisci un numero intero positivo N: \n");
        scanf("%d", &N);

        if (N <= 0)
            printf("Il numero deve essere positivo. Reinserisci\n");
        
    } while (N <= 0);

    // calculation of the first prime numbers
    while (num <= N)
    {
        primo = 1; // the variable assume that the number is prime

        // verify if the number is divisible by 1 and 2
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                primo = 0; // if it's divisible then its not a prime number
                break;
            }
        }

        if (primo==1)
        {
            cont++;
            if (cont % 2 == 1)
            {
                printf("Numero primo alternato: %d\n", num);
                somma += num;
            }
        }

        num++;
    }

    // output of the sums
    printf("La somma dei primi numeri primi alternati fino a %d e': %d\n", N, somma);

    return 0;
}
