/*9. Fa�a um algoritmo que converta uma velocidade expressa em Km/h para m/s e vice-versa.
 Voc� deve criar um menu com as duas op��es de convers�o e com uma op��o para
 finalizar o programa. O usu�rio poder� fazer quantas convers�es desejar, sendo que o
 programa s� ser� finalizado quando a op��o de finalizar for escolhida. */
#include <stdio.h>

int main() {
	setbuf(stdout, NULL);

	int opcao;
	float velocidade;

	printf("         Op��es de convers�o: \n");
	printf("-------------------------------------\n");

	printf("OP��O 1 ...............m/s  para km/h\n");
	printf("OP��O 2 ...............km/h para m/s\n");
	printf("OP��O 3 ...............finalizar\n");

	while (opcao != 3);
		printf("Digite a op��o desejada: ");
		scanf("%d", &opcao);

		switch (opcao) {
			case 1:

				break;
			case 2:


				break
			default:
				break;
		}

		return 0;
}
