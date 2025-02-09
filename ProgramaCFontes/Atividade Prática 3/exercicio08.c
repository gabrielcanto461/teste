/*8. Fa�a um programa que calcula a �rea de um tri�ngulo, cuja base e altura s�o fornecidas
 pelo usu�rio. Esse programa n�o pode permitir a entrada de dados inv�lidos, ou seja,
 medidas menores ou igual a 0. Caso o usu�rio informe um dado inv�lido, o programa deve
 soliicitar a entrada do dado at� ele ser v�lido.*/

#include <stdio.h>

int main() {

	setbuf(stdout, NULL);
	int baseValida = 0, alturaValida = 0;
	float base, altura;

	printf("Calculadora de �rea de Tri�ngulos\n");
	printf("---------------------------------------------\n");

	printf("Digite a base do tri�ngulo: ");
	while (!baseValida) {

		scanf("%f", &base);
		if (base > 0) {
			baseValida = 1;
		} else {
			printf(
					"OPS! Valor inv�lido.\nDigite um valor positivo e diferente de 0: ");
		}
	}
	printf("Digite a altura do tri�ngulo: ");
	while (!alturaValida) {
		scanf("%f", &altura);
		if (altura > 0) {
			alturaValida = 1;
		} else {
			printf(
					"OPS! Valor inv�lido.\nDigite um valor positivo e diferente de 0: ");
		}
	}
	printf("---------------------------------------------\n");
	printf("�rea do tri�ngulo: %.2f", (base * altura) / 2);
	return 0;
}
