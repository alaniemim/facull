#include <stdio.h>

// A função printf() é utilizada para imprimir dados na tela.
/*int main(){
    int idade = 20;
    float altura = 1.80;
    char letra = 'I';
    char nome[20] = "Inacio";

    printf("A idade do %s e %d anos\n", nome, idade); // para exibir uma string, usa-se %s
    printf("A altura e: %.2f\n", altura); // para exibir um float, usa-se %f
    printf("A letra e: %c\n", letra); // para exibir um char, usa-se %c
}  
*/
// A função scanf() é utilizada para ler dados do teclado.
int main(){
    int idade;
    float altura;
    char letra;
    char nome[20];

    printf("Digite seu nome: ");
    scanf("%s", nome); // para ler uma string, usa-se %s
    printf("Digite sua idade: ");
    scanf("%d", &idade); // para ler um inteiro, usa-se %d
    printf("Digite sua altura: ");
    scanf("%f", &altura); // para ler um float, usa-se %f
    printf("Digite uma letra: ");
    scanf(" %c", &letra); // para ler um char, usa-se %c

    printf("Seu nome e: %s\n", nome);
    printf("Sua idade e: %d\n", idade);
    printf("Sua altura e: %.2f\n", altura);
    printf("A letra e: %c\n", letra);
}