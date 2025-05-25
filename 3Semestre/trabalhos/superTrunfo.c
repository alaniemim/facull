// Trabalho da faculade terceiro semestre 2025.
// Super Trunfo em C
// Aluno: Alan Inacio Emim
#include <stdio.h>

// versao 1.0
int main(){
    char estado,codigoDaCarta[10], NomeCidade[60]; // delclarando variaveis do tipo char
    int populacao, numeroDePontosTuristicos; // declarando variaveis do tipo int
    float area, pib; // declarando variaveis do tipo float

    printf("Digite o estado da primeira carta: "); // imprimindo na tela
    scanf(" %c", &estado); //  lendo o estado

    printf("\nDigite o nome da cidade da primeira carta: "); // usei o \n no print pq quando uso no scanf ele acaba dando problema
    scanf("%s", NomeCidade);

    printf("\nDigite o codigo da carta da primeira carta: ");
    scanf("%s", codigoDaCarta);
    
    printf("\nDigite a populacao da primeira carta: ");
    scanf("%d", &populacao);

    printf("\nDigite a area da primeira carta: ");
    scanf("%f", &area);

    printf("\nDigite o pib da primeira carta: ");
    scanf("%f", &pib);

    printf("\nDigite o numero de pontos turisticos da primeira carta: ");
    scanf("%d", &numeroDePontosTuristicos);

    // carta 2 / declarando variaveis da carta 2
    char estado2,codigoDaCarta2[10], NomeCidade2[60]; 
    int populacao2, numeroDePontosTuristicos2;
    float area2, pib2;

    printf("\nDigite os dados da segunda carta\n");
    
    printf("\nDigite o estado da segunda carta: "); 
    scanf(" %c", &estado2);

    printf("\nDigite o nome da cidade da segunda carta: ");
    scanf("%s", NomeCidade2);

    printf("\nDigite o codigo da carta da segunda carta: ");
    scanf("%s", codigoDaCarta2);
    
    printf("\nDigite a populacao da segunda carta: ");
    scanf("%d", &populacao2);

    printf("\nDigite a area da segunda carta: ");
    scanf("%f", &area2);

    printf("\nDigite o pib da segunda carta: ");
    scanf("%f", &pib2);

    printf("\nDigite o numero de pontos turisticos da segunda carta: ");
    scanf("%d", &numeroDePontosTuristicos2);

    // imprimindo os dados da primeira carta
    printf("\nDados da primeira carta:\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Nome da cidade: %s\n", NomeCidade);
    printf("Codigo da carta: %s\n", codigoDaCarta);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Numero de pontos turisticos: %d\n", numeroDePontosTuristicos);

    // imprimindo os dados da segunda carta
    printf("\nDados da segunda carta\n");
    
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Nome da cidade: %s\n", NomeCidade2);
    printf("Codigo da carta: %s\n", codigoDaCarta2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", numeroDePontosTuristicos2);
}
// acredito que eu tenha feito tudo certo e como foi pedido, mas, se tiver algum erro, por favor me avise :D
// Fim do codigo :D 