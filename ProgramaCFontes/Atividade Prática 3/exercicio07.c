/*7. Fa�a um programa que some todos os n�meros naturais abaixo de 1000 que s�o
 m�ltiplos de 3 ou 5.*/

#include <stdio.h>

int main() {

	setbuf(stdout, NULL);

	int soma = 0, valor = 1;

	while (valor < 1000) {
		if ((valor % 3 == 0) || (valor % 5 == 0)) {
			soma = soma + valor;
		}
		valor++;
	}
	printf("Soma m�ltiplos de 3 e 5 no intervalo [0, 1000): %d", soma);

	return 0;
}
