/*2. Escreve um programa que escreva na tela, a sequ�ncia de 1 at� 100 (1 em 1) por tr�s
 vezes. A primeira vez deve usar a estrutura de repeti��o FOR, a segunda WHILE e a
 terceira, DO-WHILE. */

#include <stdio.h>

int main() {

	setbuf(stdout, NULL);

	int i = 1;
	printf("Primeira vez, usando FOR:\n");

	for (i = 1; i <= 100; i++) {

		printf("%d\n", i);

	}

	printf("\n");
	printf("Segunda vez, usando WHILE:\n");
	i = 1;

	while (i <= 100) {
		printf("%d\n", i);
		i++;
	}
	printf("\n");
	printf("Terceira vez, usando DO-WHILE:\n");
	i = 1;

	do {
		printf("%d\n", i);
		i++;

	}while (i <=100);

	return 0;
}
