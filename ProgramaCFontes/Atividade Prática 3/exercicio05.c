/*5. Fa�a um programa que calcule e mostre a soma dos 50 primeiros n�meros pares.
 */
#include <stdio.h>

int main() {

	setbuf(stdout, NULL);

	int soma = 0, qtdPares = 0, valor = 1;

	while (qtdPares < 50) {

		if (valor % 2 == 0) {
			qtdPares++;
			soma = soma + valor;
			valor++;
		} else {
			valor++;
		}

	}
	printf("Soma dos 50 primeiros pares: %d", soma);
	return 0;
}
