/*3. Escreva um programa que leia 10 n�meros e escreva o maior e o menor valor. */

#include <stdio.h>

int main() {
	setbuf(stdout, NULL);

	int num, maior, menor;

	for (int i = 1; i <= 10; i++) {
		printf("Digite um valor: ");
		scanf("%d", &num);
		if (i == 1) {
			maior = num;
			menor = num;
		} else if (num > maior) {
			maior = num;
		} else if (num < menor) {
			menor = num;
		}
		;
	}
	printf("----------------------\n");
	printf("Maior: %d\n", maior);
	printf("Menor: %d\n", menor);

	return 0;
}
