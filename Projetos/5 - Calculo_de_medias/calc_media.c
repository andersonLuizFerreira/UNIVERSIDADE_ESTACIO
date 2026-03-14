#include <stdio.h>

int main() {
	float nota1 = 0;
	float nota2 = 0;
	float resultado = 0;

	printf("\n\n****** Programa de calculo de media ******\n");
	printf("Digite a Nota 01:\n");
	scanf("%f", &nota1);
	printf("Digite a Nota 02:\n");
	scanf("%f", &nota2);
	resultado = (nota1 + nota2) / 2;
	printf("A media calculada de Nota 01 e nota 02 e: %.2f\n", resultado);
	return 0;
}

