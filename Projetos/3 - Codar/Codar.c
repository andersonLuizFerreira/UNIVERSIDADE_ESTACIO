#include <stdio.h>

void  main(){
    int idade, matricula;
    float altura;
    char Nome[50];
    
    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite seu nome: \n");
    scanf("%s", Nome);

    printf("Digite sua matricula: \n");
    scanf("%d", &matricula);

    printf("Nome do Aluno: %s , Matricula: %d\n", Nome , matricula);
    printf("Idade: %d, Altura: %.2f\n", idade, altura);

    printf("Fim do programa\n");


   
}