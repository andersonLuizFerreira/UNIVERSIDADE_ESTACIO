#include <stdio.h>
#include <string.h>

void main(){
    //Dados da carta 1 "C1"
    char C1_Estado = 'A';         //Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    char C1_Codigo[4] = "A01";      //Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
    char C1_Cidade[50] = "NONE";     //Nome da Cidade: O nome da cidade. Tipo: char[] (string) 
    unsigned long C1_Populacao = 0;       //População: O número de habitantes da cidade. Tipo: unsigned long
    float C1_AreaCidade = 0;    //Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
    float C1_PIB = 0;           //PIB: O Produto Interno Bruto da cidade. Tipo: float
    int C1_QtePtoTur = 0;        //Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade Tipo: int.
    float C1_densidade_pop = 0;    //Contém a densidade populacional da carta 1
    float C1_PIB_per_capta = 0;     //Contém o PIB per capta da carta 1

    //Dados da carta 2 "C2"
    char C2_Estado = 'B';         //Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    char C2_Codigo[4] = "B01";      //Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
    char C2_Cidade[50] = "NONE";     //Nome da Cidade: O nome da cidade. Tipo: char[] (string) 
    unsigned long int C2_Populacao = 0;       //População: O número de habitantes da cidade. Tipo:unsigned long
    float C2_AreaCidade = 0;    //Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
    float C2_PIB = 0;           //PIB: O Produto Interno Bruto da cidade. Tipo: float
    int C2_QtePtoTur = 0;        //Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade Tipo: int.
    float C2_densidade_pop = 0;    //Contém a densidade populacional da carta 2
    float C2_PIB_per_capta = 0;     //Contém o PIB per capta da carta 1


    printf("\n\n\n\n");
    printf("********************************************\n");
    printf("***        Jogo Super Trunfo            *** \n");
    printf("********************************************\n\n");
    //Carta 1
    printf("Vamos digitar os dados da Carta 1\n");
    printf("Digite...\n"); 

    printf("Uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf(" %c", &C1_Estado);
    
    printf("O Código da Carta: a letra do estado seguida de um número de 01 a 04 (ex: A01, B03).: ");
    scanf(" %s", C1_Codigo);
    
    printf("Digite o Nome da Cidade: ");
    getchar();
    fgets(C1_Cidade,50,stdin);
    C1_Cidade[strcspn(C1_Cidade, "\n")] = '\0';
    //scanf(" %s", C1_Cidade);

    printf("\nPopulação: O número de habitantes da cidade: ");
    scanf("%d", &C1_Populacao);

    printf("Área (em km²): A área da cidade em quilômetros quadrados: ");
    scanf("%f", &C1_AreaCidade);
    
    printf("PIB: O Produto Interno Bruto da cidade: ");
    scanf("%f", &C1_PIB);

    printf("Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade: ");
    scanf("%d", &C1_QtePtoTur);

    //Nível Aventureiro
    C1_densidade_pop = (float) C1_Populacao / C1_AreaCidade; //Calcula a densidade populacional da carta 1
    C1_PIB_per_capta = (float) C1_PIB / C1_Populacao;       //Calcula a renda per capta da carta 1

    //Nível Mestre
    float C1_superPoder = (float)C1_Populacao + 
                        C1_AreaCidade + 
                        C1_PIB + 
                        (float)C1_QtePtoTur + 
                        C1_densidade_pop + 
                        C1_PIB_per_capta +
                        (1/C1_densidade_pop);





    //Carta 2
    printf("\n\nVamos digitar os dados da Carta 2\n");
    printf("Digite...\n"); 

    printf("Uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf(" %c", &C2_Estado);
    
    printf("O Código da Carta: a letra do estado seguida de um número de 01 a 04 (ex: A01, B03).: ");
    scanf("%s", C2_Codigo);
    
    printf("Digite o Nome da Cidade: ");
    //scanf("%s", C2_Cidade);
    getchar();
    fgets(C2_Cidade,50,stdin);
    C2_Cidade[strcspn(C2_Cidade, "\n")] = '\0';

    printf("População: O número de habitantes da cidade: ");
    scanf("%d", &C2_Populacao);

    printf("Área (em km²): A área da cidade em quilômetros quadrados: ");
    scanf("%f", &C2_AreaCidade);
    
    printf("PIB: O Produto Interno Bruto da cidade: ");
    scanf("%f", &C2_PIB);

    printf("Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade: ");
    scanf("%d", &C2_QtePtoTur);
    
    //Nível Aventureiro
    C2_densidade_pop = (float) C2_Populacao / C2_AreaCidade; //Calcula a densidade populacional da carta 2
    C2_PIB_per_capta = (float) C2_PIB / C2_Populacao;       //Calcula a renda per capta da carta 2
    
    //Nível Mestre
    float C2_superPoder = (float)C2_Populacao + 
                        C2_AreaCidade + 
                        C2_PIB + 
                        (float)C2_QtePtoTur + 
                        C2_densidade_pop + 
                        C2_PIB_per_capta +
                        (1/C2_densidade_pop);

    /*
    Carta 1:
    Estado: A
    Código: A01
    Nome da Cidade: São Paulo
    População: 12325000
    Área: 1521.11 km²
    PIB: 699.28 bilhões de reais
    Número de Pontos Turísticos: 50
    */

    printf("\n\nAgora vamos revisar as cartas...\n");
    printf("****************************************************\n");
    printf("***************** Carta 1 **************************\n");
    printf("*                                                  *\n");
    printf("*  Estado: %c \n" , C1_Estado);

    printf("*  Código da Carta: %s\n", C1_Codigo);
    
    printf("*  Cidade: %s\n", C1_Cidade);

    printf("*  População: %d hab\n", C1_Populacao);

    printf("*  Área (em km²): %.2f\n", C1_AreaCidade);
    
    printf("*  PIB: R$%.2f\n", C1_PIB);

    printf("*  Número de Pontos Turísticos: %d\n", &C1_QtePtoTur);
    
    printf("*  Densidade populacional: %.2f hab/Km2 \n", C1_densidade_pop);
    
    printf("*  PIB per capta: R$%.2f \n", C1_PIB_per_capta);

    printf("*  $$$$$$ SUPER PODER %.2f $$$$$$ \n", C1_superPoder);
    
    printf("****************************************************\n\n\n");

    /*
    Carta 2:
    Estado: B
    Código: B01
    Nome da Cidade: São Paulo
    População: 12325000
    Área: 1521.11 km²
    PIB: 699.28 bilhões de reais
    Número de Pontos Turísticos: 50
    */

    
    printf("****************************************************\n");
    printf("***************** Carta 2 **************************\n");
    printf("*                                                  *\n");
    printf("*  Estado: %c \n" , C2_Estado);

    printf("*  Código da Carta: %s\n", C2_Codigo);
    
    printf("*  Cidade: %s\n", C2_Cidade);

    printf("*  População: %d hab\n", C2_Populacao);

    printf("*  Área (em km²): %.2f\n", C2_AreaCidade);
    
    printf("*  PIB: R$%.2f\n", C2_PIB);

    printf("*  Número de Pontos Turísticos: %d\n", &C2_QtePtoTur);

    printf("*  Densidade populacional: %.2f hab/Km2 \n", C2_densidade_pop);
    
    printf("*  PIB per capta: R$%.2f \n", C2_PIB_per_capta);

    printf("*  $$$$$$ SUPER PODER %.2f $$$$$$ \n", C2_superPoder);
    printf("****************************************************\n\n\n");

    printf("**************************************************************************************\n");
    printf("**********************    Resultado do Desafio     ***********************************\n");
    printf("*               0 - PERDEU               1 - VENCEU                                  *\n");
    printf("*                                                                                    *\n");
    printf("*  População:               Cidade 01 - %d    |     Cidade 2 - %d                      *\n", C1_Populacao >= C2_Populacao, C1_Populacao <= C2_Populacao);

    printf("*  Área (em km²):           Cidade 01 - %d    |     Cidade 2 - %d                      *\n", C1_AreaCidade > C2_AreaCidade, C1_AreaCidade < C2_AreaCidade);
    
    printf("*  PIB:                     Cidade 01 - %d    |     Cidade 2 - %d                      *\n", C1_PIB > C2_PIB , C1_PIB < C2_PIB);

    printf("*  Núm de Ptos Turísticos:  Cidade 01 - %d    |     Cidade 2 - %d                      *\n", C1_QtePtoTur >= C2_QtePtoTur, C1_QtePtoTur <= C2_QtePtoTur);

    printf("*  Densidade populacional:  Cidade 01 - %d    |     Cidade 2 - %d                      *\n", C1_densidade_pop >= C2_densidade_pop, C1_densidade_pop <= C2_densidade_pop);
    
    printf("*  PIB per capta:           Cidade 01 - %d    |     Cidade 2 - %d                      *\n", C1_PIB_per_capta >= C2_PIB_per_capta , C1_PIB_per_capta <= C2_PIB_per_capta);

    printf("*  $$$$$$ SUPER PODER :     Cidade 01 - %d    |     Cidade 2 - %d                      *\n", C1_superPoder >= C2_superPoder , C1_superPoder <= C2_superPoder);

    printf("*                                            FIM                                     *\n");
    printf("****************************************************************************************\n");
    
    
    
}