#include <stdio.h>
int main() {
	char nomeCidade[60];
	printf("Digite o nome da cidade: ");
	scanf("%s[60]", &nomeCidade);
	printf("Nome da cidade: %s\n", nomeCidade);
}