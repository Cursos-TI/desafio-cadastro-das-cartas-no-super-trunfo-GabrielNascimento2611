#include <stdio.h> // A única biblioteca usada nos seus exemplos.

int main() {
    // Variaveis de armazenamento dos dados das cartas
    char estadoA;
    char estadoB; 
    char cidade01[30]; 
    char cidade02[30]; 
    char codigo01[20]; 
    char codigo02[20]; 
    unsigned long int populacao01, populacao02; 
    float area01, area02;
    float pib01, pib02;
    int ponto_turistico01, ponto_turistico02;
    float PIBPercapita01, PIBPercapita02;
    float Densidade01, Densidade02;
    float superPoder01, superPoder02; // Variáveis para o Super Poder

    // --- Cadastro da Carta 01 ---
    printf("Carta01: \n");

    printf("Digite a Letra do Estado: \n");
    scanf(" %c", &estadoA); 

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", cidade01);

    printf("Digite o Codigo da Cidade: \n");
    scanf("%s", codigo01);

    printf("Qual a População da Cidade? \n");
    scanf("%lu", &populacao01); 

    printf("Qual a Area Km² da Cidade? \n");
    scanf("%f", &area01);

    printf("Qual o PIB da Cidade? \n");
    scanf("%f", &pib01);

    printf("Quantos são os Pontos Turisticos da Cidade? \n");
    scanf("%d", &ponto_turistico01);

    // Cálculos para Carta 01
    PIBPercapita01 = pib01 / (float)populacao01;
    Densidade01 = (float)populacao01 / area01;

    // Exibindo os Dados da Carta 01
    printf("\n--- Dados da Carta 01 ---\n");
    printf("Estado: %c\n", estadoA);
    printf("Cidade: %s\n", cidade01);
    printf("Codigo: %s\n", codigo01);
    printf("População: %lu\n", populacao01);
    printf("Area Km²: %.2f\n", area01);
    printf("PIB: %.2f\n", pib01);
    printf("Pontos Turisticos: %d\n", ponto_turistico01);
    printf("PIB per capita: %.2f\n", PIBPercapita01);
    printf("Densidade Populacional: %.2f\n", Densidade01);

    // --- Cadastro da Carta 02 ---
    printf("\nCarta02: \n");
    printf("Digite a Letra do Estado: \n");
    scanf(" %c", &estadoB);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", cidade02);

    printf("Digite o Codigo da Cidade: \n");
    scanf("%s", codigo02);

    printf("Qual a População da Cidade? \n");
    scanf("%lu", &populacao02); 

    printf("Qual a Area Km² da Cidade? \n");
    scanf("%f", &area02);

    printf("Qual o PIB da Cidade? \n");
    scanf("%f", &pib02);

    printf("Quantos são os Pontos Turisticos da Cidade? \n");
    scanf("%d", &ponto_turistico02);

    // Cálculos para Carta 02
    PIBPercapita02 = pib02 / (float)populacao02;
    Densidade02 = (float)populacao02 / area02;

    // Exibindo os Dados da Carta 02
    printf("\n--- Dados da Carta 02 ---\n");
    printf("Estado: %c\n", estadoB);
    printf("Cidade: %s\n", cidade02);
    printf("Codigo: %s\n", codigo02);
    printf("População: %lu\n", populacao02);
    printf("Area Km²: %.2f\n", area02);
    printf("PIB: %.2f\n", pib02);
    printf("Pontos Turisticos: %d\n", ponto_turistico02);
    printf("PIB per capita: %.2f\n", PIBPercapita02); 
    printf("Densidade Populacional: %.2f\n", Densidade02);

    // Calcular o Super Poder
    // A soma dos atributos numéricos
    superPoder01 = (float)populacao01 + area01 + pib01 + (float)ponto_turistico01 + PIBPercapita01;

    superPoder01 += (Densidade01 != 0 ? (1.0f / Densidade01) : 0.0f);

    superPoder02 = (float)populacao02 + area02 + pib02 + (float)ponto_turistico02 + PIBPercapita02;
    superPoder02 += (Densidade02 != 0 ? (1.0f / Densidade02) : 0.0f);

    printf("\n--- Comparação de Cartas ---\n");



    // População: Carta 1 vence se maior
    printf("População: Carta %d venceu (%d)\n", (populacao01 > populacao02 ? 1 : 2), (populacao01 > populacao02));

    // Área: Carta 1 vence se maior
    printf("Área: Carta %d venceu (%d)\n", (area01 > area02 ? 1 : 2), (area01 > area02));

    // PIB: Carta 1 vence se maior
    printf("PIB: Carta %d venceu (%d)\n", (pib01 > pib02 ? 1 : 2), (pib01 > pib02));

    // Pontos Turísticos: Carta 1 vence se maior
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", (ponto_turistico01 > ponto_turistico02 ? 1 : 2), (ponto_turistico01 > ponto_turistico02));

    // Densidade Populacional: Carta 1 vence se MENOR
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (Densidade01 < Densidade02 ? 1 : 2), (Densidade01 < Densidade02));

    // PIB per Capita: Carta 1 vence se maior
    printf("PIB per Capita: Carta %d venceu (%d)\n", (PIBPercapita01 > PIBPercapita02 ? 1 : 2), (PIBPercapita01 > PIBPercapita02));

    // Super Poder: Carta 1 vence se maior
    printf("Super Poder: Carta %d venceu (%d)\n", (superPoder01 > superPoder02 ? 1 : 2), (superPoder01 > superPoder02));

    return 0;
}