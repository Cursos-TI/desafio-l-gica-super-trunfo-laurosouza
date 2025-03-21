#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
        printf("Desafio Cartas Super Trunfo!\nCadastro de cartas de cidades e comparação de atributos.\n");
    
        int populacao1, populacao2, pontos1, pontos2;
        float area1, area2, PIB1, PIB2;
        char codigo1[100], codigo2[50], nomecidade1[50], nomecidade2[50], cidadeVencedora1, cidadeVencedora2;
        int densidade1, densidade2, PIBpercapita1, PIBpercapita2;
    
        // Cadastro das cartas
        printf("Digite o codigo da cidade 1: \n");
        scanf("%s", &codigo1);
    
        printf("Digite o codigo da cidade 2: \n");
        scanf("%s", &codigo2);

        printf("Digite o nome da cidade 1: \n");
        scanf("%s", &nomecidade1);

        printf("Digite o nome da cidade 2: \n");
        scanf("%s", &nomecidade2);

        printf("Digite o numero de habitantes de %s: \n", nomecidade1);
        scanf("%d", &populacao1);
        
        printf("Digite o numero de habitantes de %s: \n", nomecidade2);
        scanf("%d", &populacao2);

        if (populacao1 > populacao2) {
            printf("%s possui uma maior população!\n", nomecidade1);
          }
          
          else {
            printf("%s possui uma maior população!\n", nomecidade2);
          }

        printf("Digite o PIB de %s: \n", nomecidade1);
        scanf("%f", &PIB1);
        
        printf("Digite o PIB de %s: \n", nomecidade2);
        scanf("%f", &PIB2);

        if (PIB1 > PIB2) {
            printf("%s possui um PIB maior!\n", nomecidade1);
          }
          
          else {
            printf("%s possui um PIB maior!\n", nomecidade2);
          }

        printf("Digite o numero de pontos turisticos de %s: \n", nomecidade1);
        scanf("%d", &pontos1);
        
        printf("Digite o numero de pontos turisticos de %s: \n", nomecidade2);
        scanf("%d", &pontos2);

        if (pontos1 > pontos2) {
            printf("%s possui um maior número de pontos turísticos!\n", nomecidade1);
          }
          
          else {
            printf("%s possui um maior número de pontos turísticos!\n", nomecidade2);
          }

        printf("Digite a area total do territorio de %s: \n", nomecidade1);
        scanf("%f", &area1);
        
        printf("Digite a area total do territorio de %s: \n", nomecidade2);
        scanf("%f", &area2);

        if (area1 > area2) {
          printf("%s possui um territorio maior!\n", nomecidade1);
        }
        
        else {
          printf("%s possui um territorio maior!\n", nomecidade2);
        }

        // Informações dos atrubutos inseridos     
        printf("Codigo da cidade 1: %s\nNome da cidade 1: %s\nPopulacao da cidade 1: %d\nArea da cidade 1: %f \n", codigo1, nomecidade1, populacao1, area1);
        printf("PIB da cidade 1: %f\nPontos turisticos da cidade 1: %d\n", PIB1, pontos1);

        printf("Codigo da cidade 2: %s\nNome da cidade 2: %s\nPopulacao da cidade 2: %d\nArea da cidade 2: %f \n", codigo2, nomecidade2, populacao2, area2);
        printf("PIB da cidade 2: %f\nPontos turisticos da cidade 2: %d\n", PIB2, pontos2);

        densidade1 = populacao1 / area1;
        printf("A densidade populacional de %s é: %d \n", nomecidade1, densidade1);

        PIBpercapita1 = PIB1 / populacao1;
        printf("O PIB per capita de %s é: %d \n", nomecidade1, PIBpercapita1);

        densidade2 = populacao2 / area2;
        printf("A densidade populacional de %s é: %d \n", nomecidade2, densidade2);

        PIBpercapita2 = PIB2 / populacao2;
        printf("O PIB per capita de %s é: %d \n", nomecidade2, PIBpercapita2);

        // Comparação de PIB per capita e densidade populacional 
        if (densidade1 > densidade2) {
          printf("%s possui uma densidade populacional menor que a de %s!\n", nomecidade1, nomecidade2);
        }
        
        else {
          printf("%s possui uma densidade populacional menor que a de %s!\n", nomecidade2, nomecidade1);
        }

        if (densidade1 == densidade2) {
          printf("As duas cidades possuem a mesma densidade populacional!\n");
        }

        if (PIBpercapita1 > PIBpercapita2) {
          printf("Cidade 1 possui um PIB per Capita maior que a Cidade 2!\n");
        }
        
        if (PIBpercapita1 < PIBpercapita2) {
          printf("Cidade 2 possui um PIB per Capita maior que a Cidade 1!\n");
        }

        if (PIBpercapita1 == PIBpercapita2) {
            printf("As duas cidades possuem um mesmo PIB per Capita!\n");
          }

        // Resultado final 
        if (populacao1, pontos1, area1, PIB1 > populacao2, pontos2, area2, PIB2) {
            printf("A cidade vencedora é: %s\n", nomecidade1);
          }
          
        else {
            printf("A cidade vencedora é: %s\n", nomecidade2);
          }

    return 0;
}
