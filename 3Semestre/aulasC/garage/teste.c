#include <stdio.h>

char nome[20];
int lin;
int main() {
	for (lin=0; lin<40; lin++){
		printf("Digite um nome: ");
		scanf("%s", nome[lin]);
	}
}