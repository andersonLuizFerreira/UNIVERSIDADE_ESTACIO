#include <stdio.h>

int main() {
    int idade;
    float altura;
    char sexo;
    char nome[50];

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu sexo: ");
    scanf(" %c", &sexo);

    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Sexo: %c\n", sexo);

    return 0;
}