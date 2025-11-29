#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <time.h>

#define PORT 12345

const char *nome_mossa(int m) {
    if (m == 0) return "Sasso";
    if (m == 1) return "Carta";
    return "Forbice";
}

int determina_vincitore(int s1, int s2) {
    if (s1 == s2) return 0;
    if ((s1 == 0 && s2 == 2) || 
        (s1 == 1 && s2 == 0) ||
        (s1 == 2 && s2 == 1)) return 1;
    return 2;
}

int main() {
    int server_fd, client_fd;
    struct sockaddr_in address;
    int addrlen = sizeof(address);

    srand(time(NULL));

    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0) {
        perror("Errore creazione socket");
        exit(EXIT_FAILURE);
    }

    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);

    if (bind(server_fd, (struct sockaddr*)&address, sizeof(address)) < 0) {
        perror("Errore binding");
        exit(EXIT_FAILURE);
    }

    if (listen(server_fd, 1) < 0) {
        perror("Errore listen");
        exit(EXIT_FAILURE);
    }

    printf("Server in ascolto sulla porta %d...\n", PORT);

    if ((client_fd = accept(server_fd, (struct sockaddr*)&address,
                            (socklen_t*)&addrlen)) < 0) {
        perror("Errore accept");
        exit(EXIT_FAILURE);
    }

    printf("Client connesso.\n");

    int scelta_client, scelta_server;
    int punti_server = 0, punti_client = 0;

    while (1) {
        if (read(client_fd, &scelta_client, sizeof(int)) <= 0) break;

        if (scelta_client == 9) {
            printf("Connessione terminata dal client.\n");
            break;
        }

        printf("Client ha scelto: %s\n", nome_mossa(scelta_client));

        scelta_server = rand() % 3;
        printf("Server sceglie: %s\n", nome_mossa(scelta_server));

        write(client_fd, &scelta_server, sizeof(int));

        int risultato = determina_vincitore(scelta_server, scelta_client);

        if (risultato == 1) {
            punti_server++;
            printf("Risultato: Server vince\n");
        } else if (risultato == 2) {
            punti_client++;
            printf("Risultato: Client vince\n");
        } else {
            printf("Risultato: Pareggio\n");
        }

        printf("Punteggio: Server %d Client %d\n", punti_server, punti_client);
        printf("-------------\n");

        write(client_fd, &risultato, sizeof(int));
        write(client_fd, &punti_server, sizeof(int));
        write(client_fd, &punti_client, sizeof(int));
    }

    close(client_fd);
    close(server_fd);
    return 0;
}
