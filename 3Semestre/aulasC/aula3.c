#include <stdio.h>

int main() {
    int idade, matricula;
    float altura;
    char nome[50];

    printf("digite sua idade: ");
    scanf("%d", &idade);

    printf("digite sua matricula: ");
    scanf("%d", &matricula);

    printf("digite sua altura: ");
    scanf("%f", &altura);

    printf("digite seu nome: ");
    scanf("%s", nome);

    printf("Nome do aluno: %s - Matricula: %d \n", nome, matricula);
    printf("Idade: %d - Altura: %.2f", idade, altura);
}
