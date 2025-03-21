#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
        printf("Desafio Cartas Super Trunfo!\nCadastrar cartas de cidades baseados no que for pedido abaixo\n");
    
        int populacao1, populacao2, pontos1, pontos2;
        float area1, area2, PIB1, PIB2;
        char codigo1[100], codigo2[50], nomecidade1 [50], nomecidade2 [50];
        int densidade1, densidade2, PIBpercapita1, PIBpercapita2;
    
        printf("Digite o codigo da cidade 1: \n");
        scanf("%s", &codigo1);
    
        printf("Digite o codigo da cidade 2: \n");
        scanf("%s", &codigo2);

        printf("Digite o nome da cidade 1: \n");
        scanf("%s", &nomecidade1);

        printf("Digite o nome da cidade 2: \n");
        scanf("%s", &nomecidade2);

        printf("Digite o numero de habitantes da cidade 1: \n");
        scanf("%d", &populacao1);
        
        printf("Digite o numero de habitantes da cidade 2: \n");
        scanf("%d", &populacao2);

        if (populacao1 > populacao2) {
            printf("Cidade 1 possui uma maior população!\n");
          }
          
          else {
            printf("Cidade 2 possui uma maior população!\n");
          }

        printf("Digite o PIB da cidade 1: \n");
        scanf("%f", &PIB1);
        
        printf("Digite o PIB da cidade 2: \n");
        scanf("%f", &PIB2);

        if (PIB1 > PIB2) {
            printf("Cidade 1 possui um PIB maior!\n");
          }
          
          else {
            printf("Cidade 2 possui um PIB maior!\n");
          }

        printf("Digite o numero de pontos turisticos da cidade 1: \n");
        scanf("%d", &pontos1);
        
        printf("Digite o numero de pontos turisticos da cidade 2: \n");
        scanf("%d", &pontos2);

        if (pontos1 > pontos2) {
            printf("Cidade 1 possui um maior número de pontos turísticos!\n");
          }
          
          else {
            printf("Cidade 2 possui um maior número de pontos turísticos!\n");
          }

        printf("Digite a area total do territorio da cidade 1: \n");
        scanf("%f", &area1);
        
        printf("Digite a area total do territorio da cidade 2: \n");
        scanf("%f", &area2);

        if (area1 > area2) {
          printf("Cidade 1 possui um territorio maior!\n");
        }
        
        else {
          printf("Cidade 2 possui um territorio maior!\n");
        }
        
        printf("Codigo da cidade 1: %s\nNome da cidade 1: %s\nPopulacao da cidade 1: %d\nArea da cidade 1: %f \n", codigo1, nomecidade1, populacao1, area1);
        printf("PIB da cidade 1: %f\nPontos turisticos da cidade 1: %d\n", PIB1, pontos1);

        printf("Codigo da cidade 2: %s\nNome da cidade 2: %s\nPopulacao da cidade 2: %d\nArea da cidade 2: %f \n", codigo2, nomecidade2, populacao2, area2);
        printf("PIB da cidade 2: %f\nPontos turisticos da cidade 2: %d\n", PIB2, pontos2);

        densidade1 = populacao1 / area1;
        printf("A densidade populacional da cidade 1 é: %d \n", densidade1);

        PIBpercapita1 = PIB1 / populacao1;
        printf("O PIB per capita é da cidade 1 é: %d \n", PIBpercapita1);

        densidade2 = populacao2 / area2;
        printf("A densidade populacional da cidade 2 é: %d \n", densidade2);

        PIBpercapita2 = PIB2 / populacao2;
        printf("O PIB per capita da cidade 2 é: %d \n", PIBpercapita2);

    
        if (densidade1 > densidade2) {
          printf("Cidade 1 venceu (possui uma densidade populacional menor que a Cidade 2)!\n");
        }
        
        else {
          printf("Cidade 2 venceu (possui uma densidade populacional menor que a Cidade 1)!\n");
        }


        if (PIBpercapita1 > PIBpercapita2) {
          printf("Cidade 1 venceu (possui um PIB per Capita maior que a Cidade 2)!\n");
        }
        
        else {
          printf("Cidade 2 venceu (possui um PIB per Capita maior que a Cidade 1)!\n");
        }

        
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
