#include <stdio.h>

 int main () {
    

   //Declaração de variáveis das cartas a 

    char estado1[2], estado2[2]; // Letra do estado
    char codigo1[4], codigo2[4]; // Código da carta
    char cidade1[50], cidade2[50]; // Nome da cidade
    unsigned long int populacao1, populacao2; // População da cidade
    float area1, area2; // Área em km²
    float pib1, pib2; // PIB em bilhões de reais
    int pnturistico1, pnturistico2;  // Pontos turísticos
    float densidade1, densidade2; // Densidade populacional
    double pibpercapita1, pibpercapita2; // PIB per capita
      

    printf("Digite as informacoes da primeira carta: \n"); //Carta A

    printf("Digite o estado: \n");
    scanf("%s", estado1);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo1);

    printf("Digite a cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área em km²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pnturistico1);

    //Calculo de densidade populacional da carta A
    densidade1 = populacao1/area1;
      
    //Calculo de PIB per capita da carta A
     pibpercapita1 = pib1/populacao1;

   //Exibindo os dados Carta A
    printf("Estado: %s\n", estado1);
    printf("Código da cidade: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$%.2f \n", pib1);
    printf("Número de Pontos turísticos: %d\t\n", pnturistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pibpercapita1);
    printf("\n");

    printf("Digite as informacoes da segunda carta: \n"); //Carta B

    printf("Digite o estado: \n");
    scanf("%s", estado2);

    printf("Digite o codigo da carta: \n");
    scanf("%3s", codigo2);

    printf("Digite a cidade: \n");
    scanf("%49s", cidade2);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pnturistico2);

    
    //Calculo de densidade populacional da carta B
    densidade2 = populacao2/area2;
      
    //Calculo de PIB per capita da carta B
    pibpercapita2 = pib2/populacao2;

   //Exibindo os dados Carta B
    printf("Estado: %s\n", estado2);
    printf("Código da cidade: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$%.2f \n", pib2);
    printf("Número de Pontos turísticos: %d\t\n", pnturistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pibpercapita2);
    printf("\n");


    int resultadopopulacao,
       resultadoarea,
       resultadopib,
       resultadopnturistico,
       resultadodensidade,
       resultadopibpercapita, 
       resultadosuperpoder,
       superpoder1,
       superpoder2;

      //Comparando as cartas A e B
      resultadopopulacao = populacao1 > populacao2;
      resultadoarea = area1 > area2;
      resultadopib = pib1 > pib2;
      resultadopnturistico = pnturistico1 > pnturistico2;
      resultadodensidade = densidade1 < densidade2;
      resultadopibpercapita = pibpercapita1 > pibpercapita2;
      resultadosuperpoder = superpoder1 > superpoder2;

      //Calculando o superpoder
      resultadosuperpoder = 
      resultadopopulacao 
      + resultadoarea
       + resultadopib
        + resultadopnturistico
         + resultadodensidade
          + resultadopibpercapita; 

   
     
      printf("Comparação de cartas: \n");

      if (resultadopopulacao == 1) {
         printf("População: Carta A venceu %d\n", (resultadopopulacao));
      } else if (resultadopopulacao == 0) {
         printf("População: Carta B venceu %d\n", (resultadopopulacao));
      }
      
      if (resultadoarea == 1) {
         printf("Área: Carta A venceu %d\n", (resultadoarea));
      } else if (resultadoarea == 0) {
         printf("Área: Carta B venceu %d\n", (resultadoarea));
      }

      if (resultadopib == 1) {
         printf("PIB: Carta A venceu %d\n", (resultadopib));
      } else if (resultadopib == 0) {
         printf("PIB: Carta B venceu %d\n", (resultadopib));
      }

      if (resultadopnturistico == 1) {
         printf("Pontos turísticos: Carta A venceu %d\n", (resultadopnturistico));
      } else if (resultadopnturistico == 0) {
         printf("Pontos turísticos: Carta B venceu %d\n", (resultadopnturistico));
      }

      if (resultadodensidade == 1) {
         printf("Densidade populacional: Carta A venceu %d\n", (resultadodensidade));
      } else if (resultadodensidade == 0) {
         printf("Densidade populacional: Carta B venceu %d\n", (resultadodensidade));
      }

      if (resultadopibpercapita == 1) {
         printf("PIB per capita: Carta A venceu %d\n", (resultadopibpercapita));
      } else if (resultadopibpercapita == 0) {
         printf("PIB per capita: Carta B venceu %d\n", (resultadopibpercapita));
      }

      if (resultadosuperpoder > 3) {
         printf("Carta A venceu com superpoder %d\n", (superpoder1));
      } else if (resultadosuperpoder < 3) {
         printf("Carta B venceu com superpoder %d\n", (superpoder2));
      }
    
      return 0;

    
}
