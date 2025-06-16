#include <stdio.h>

int main() {
    // Torre: 5 casas para a direita (usando for)
    int casas_torre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }

    // Bispo: 5 casas na diagonal para cima e à direita (usando while)
    int casas_bispo = 5;
    int i = 0;
    printf("\nMovimento do Bispo:\n");
    while (i < casas_bispo) {
        printf("Cima Direita\n");
        i++;
    }

    // Rainha: 8 casas para a esquerda (usando do-while)
    int casas_rainha = 8;
    i = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        i++;
    } while (i < casas_rainha);

    // Cavalo: 3 casas na diagonal para baixo e à esquerda (usando loops aninhados, usando for e while)
    int casas_cavalo = 3;
    printf("\nMovimento do Cavalo:\n");
    for (int j = 0; j < casas_cavalo; j++) {
        int k = 0;
        while (k < 1) {
            printf("Baixo Esquerda\n");
            k++;
        }
    }
    return 0;
}