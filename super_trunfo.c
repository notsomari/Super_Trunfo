#include <stdio.h>

int main(){
    // Declaramos valor as variáveis da primeira carta
    char estado1[1];
    char codigo1[3];
    char nome_cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_percapita1;
    float super_poder1;

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
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade em KM²: \n");
    scanf("%f", &area1);

    printf("Digite o número do PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontos_turisticos1);



    // Declaramos valor as variáveis da segunda carta

    char estado2[1];
    char codigo2[3];
    char nome_cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_percapita2;
    float super_poder2;

    // E novamente, a entrada de dados da segunda carta

    printf("Digite o estado da segunda carta: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da segunda carta: \n");
    scanf("%s", &codigo2);

    
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", &nome_cidade2);
    getchar();

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%lu", &populacao2);


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
    printf("População: %lu\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    // Calculo da divisão para saber a densidade populacional e o PIB per Capita, e logo após a exibição de ambos

    densidade_populacional1 = (populacao1) / area1;
    printf("Densidade Populacional: %f hab/km²\n", densidade_populacional1);

    pib_percapita1 = (pib1 * 1e9) / populacao1;
    printf("PIB per Capita: %f reais\n", pib_percapita1);

    // Calculo para saber a pontuação do nosso Super Poder!

    super_poder1 = ((float)populacao1 + area1 + (pib1 * 1e9) + (float)pontos_turisticos1 + pib_percapita1 + (1 / densidade_populacional1) );

    // E por fim, o retorno dos dados da segunda carta!

    printf("Carta: 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);


    densidade_populacional2 = (populacao2) / area2;
    printf("Densidade Populacional: %f hab/km²\n", densidade_populacional2);

    pib_percapita2 = (pib2 * 1e9) / populacao2;
    printf("PIB per Capita: %f reais\n", pib_percapita2);

    super_poder2 = ((float)populacao2 + area2 + (pib2 * 1e9) + (float)pontos_turisticos2 + pib_percapita2 + (1 / densidade_populacional2) );

    // Fazendo a comparação entre as duas cartas, onde a maior será a vencedora (menos na densidade, pois a vencedora é a menor)

    int vitoria_populacao = populacao1 > populacao2;
    int vitoria_area = area1 > area2;
    int vitoria_pib = pib1 > pib2;
    int vitoria_pontos = pontos_turisticos1 > pontos_turisticos2;
    int vitoria_densidade = densidade_populacional1 < densidade_populacional2;
    int vitoria_percapita = pib_percapita1 > pib_percapita2;
    int vitoria_superPoder = super_poder1 > super_poder2;

    // Resultado das comparações, com os devidos vencedores de acordo com as informações fornecidas.

    printf("Comparação de Cartas:\n");
    printf("População: %s\n", populacao1 > populacao2 ? "Carta 1 vence! (1)" : "Carta 2 vence! (0)");
    printf("Área: %s\n", area1 > area2 ? "Carta 1 vence! (1)" : "Carta 2 vence! (0)");
    printf("PIB: %s\n", pib1 > pib2 ? "Carta 1 vence! (1)" : "Carta 2 vence! (0)");
    printf("Pontos Turísticos: %s\n", pontos_turisticos1 > pontos_turisticos2 ? "Carta 1 vence! (1)" : "Carta 2 vence! (0)");
    printf("Densidade Populacional: %s\n", densidade_populacional1 < densidade_populacional2 ? "Carta 1 vence! (1)" : "Carta 2 vence! (0)");
    printf("PIB per Capita: %s\n", pib_percapita1 > pib_percapita2 ? "Carta 1 vence! (1)" : "Carta 2 vence! (0)");
    printf("Super Poder: %s\n", super_poder1 > super_poder2 ? "Carta 1 vence! (1)" : "Carta 2 vence! (0)");



    return 0;
}