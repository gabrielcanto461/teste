/*1. Fa�a um programa que determine e mostre os cinco primeiros m�ltiplos de 3,
 considerando n�meros maiores que 0 (zero).*/

#include <stdio.h>

int main() {
	setbuf(stdout, NULL);

	int num = 1, contador=1;
	printf("5 Primeiros M�ltiplos de 3\n");
	printf("--------------------------\n");

	while (contador <= 5) {
		if (num % 3 == 0) {
			printf("%d� m�ltiplo: %d\n", contador, num);
			contador++;
		}
		num++;
	}

	return 0;
}
