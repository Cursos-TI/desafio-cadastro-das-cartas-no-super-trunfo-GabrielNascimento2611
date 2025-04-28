#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
   char estadoA, estadoB[1];
   char cidade01[20], cidade02[20];
   char codigo01[20], codigo02[20];
   int populacao01, populacao02;
   float area01, area02;
   float pib01, pib02;
   int ponto_turistico01, ponto_turistico02;

   printf("Carta01: \n");

   printf("Digite a Letra do Estado: \n");
      scanf("%c", &estadoA);
   
   printf("Digite o Nome da Cidade: \n");
      scanf("%s", cidade01);
   
   printf("Digite o Codigo da Cidade: \n");
      scanf("%s", codigo01);

   printf("Qual a População da Cidade? \n");
      scanf("%d", &populacao01);

   printf("Qual a Area Km² da Cidade? \n");
      scanf("%f", &area01);

   printf("Qual o PIB da Cidade? \n");
      scanf("%f", &pib01);
   
   printf("Quantos são os Pontos Turisticos da Cidade? \n");
      scanf("%d", &ponto_turistico01);

   printf("Estado: %c\n", estadoA);
   printf("Cidade: %s\n", cidade01);
   printf("Codigo: %s\n", codigo01);
   printf("População: %d\n", populacao01);    
   printf("Area Km²: %f\n", area01);
   printf("PIB: %f\n", pib01);
   printf("Pontos Turisticos: %d\n", ponto_turistico01);

   printf("Carta02: \n");
   printf("Digite a Letra do Estado: \n");
      scanf("%s", estadoB);

   printf("Digite o Nome da Cidade: \n");
      scanf("%s", cidade02);
   
   printf("Digite o Codigo da Cidade: \n");
      scanf("%s", codigo02);

   printf("Qual a População da Cidade? \n");
      scanf("%d", &populacao02);

   printf("Qual a Area Km² da Cidade? \n");
      scanf("%f", &area02);

   printf("Qual o PIB da Cidade? \n");
      scanf("%f", &pib02);

   printf("Quantos são os Pontos Turisticos da Cidade? \n");
      scanf("%d", &ponto_turistico02);

   printf("Estado: %s\n", estadoB);
   printf("Cidade: %s\n", cidade02);
   printf("Codigo: %s\n", codigo02);
   printf("População: %d\n", populacao02);
   printf("Area Km²: %f\n", area02);
   printf("PIB: %f\n", pib02);
   printf("Pontos Turisticos: %d\n", ponto_turistico02);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
