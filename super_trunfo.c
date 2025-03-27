#include <stdio.h>

int main(){
    // Declaramos valor as variáveis da primeira carta
    char estado1;
    char codigo1[3];
    char nome_cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Aqui é a entrada de dados da primeira carta

    printf("Digite o estado da primeira carta: \n");
    scanf(" %c", &estado1);

    printf("Digite o código da primeira carta: \n");
    scanf("%s", &codigo1);

    // Esse linha do getchar, junto da função %[^\n]
    // Faz com que o scanf não capture apenas a primeira palavra antes do espaço.
    getchar();
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", &nome_cidade1);
    getchar();

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em KM²: \n");
    scanf("%f", &area1);

    printf("Digite o número do PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontos_turisticos1);


    // Declaramos valor as variáveis da segunda carta

    char estado2;
    char codigo2[3];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // E novamente, a entrada de dados da segunda carta

    printf("Digite o estado da segunda carta: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da segunda carta: \n");
    scanf("%s", &codigo2);

    getchar();
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", &nome_cidade2);
    getchar();

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao2);


    printf("Digite a área da cidade em KM²: \n");
    scanf("%f", &area2);

    printf("Digite o número do PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontos_turisticos2);

    // Retorno dos dados da primeira carta

    printf("Carta: 1 \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    // E por fim, o retorno dos dados da segunda carta!

    printf("Carta: 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}