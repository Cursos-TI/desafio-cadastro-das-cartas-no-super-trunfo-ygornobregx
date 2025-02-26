#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    int carta1, carta2;
    float pib1, pib2, area1, area2;
    int populacao1, populacao2, turistico1, turistico2;
    char cidade1[40], cidade2[40];

//carta 1

printf("\nSuper Trunfo:\n");
    printf("\nEntre com os dados da CARTA 1:\n");
printf("\nEntre com a POPULAÇÃO:\n");
    scanf("%d", &populacao1);
printf("\nEntre com a ÁREA:\n");
    scanf("%f", &area1);
printf("\nEntre com o PIB:\n");
    scanf("%f", &pib1);
printf("\nEntre com os PONTOS TURISTICOS:\n");
    scanf("%d", &turistico1);
    printf("\nEntre com o nome da CIDADE sem usar espaços:\n");
    scanf(" %s[^\n]s", cidade1);
printf("\nQual carta você acabou de cadastrar?\n");
    printf("Carta 1:\n");
printf("Carta 2:\n");
    scanf("%d", &carta1);

//carta 2

    printf("\nEntre com os dados da CARTA 2:\n");
       printf("\nEntre com a POPULAÇÃO:\n");
    scanf("%d", &populacao2);
       printf("\nEntre com a ÁREA:\n");
    scanf("%f", &area2);
       printf("\nEntre com o PIB:\n");
    scanf("%f", &pib2);
       printf("\nEntre com os PONTOS TURISTICOS:\n");
    scanf("%d", &turistico2);
    printf("\nEntre com o nome da CIDADE sem usar espaços:\n");
    scanf(" %s[^\n]s", cidade2);
       printf("\nQual carta você acabou de cadastrar?\n");
    printf("Carta 1:\n");
       printf("Carta 2:\n");
    scanf("%d", &carta2);

//dados carta 1:
printf("\n#### Dados da CARTA 1: ####\n\n");
printf("População: %d\n", populacao1);
printf("Área: %.2f km\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Pontos Turísticos: %d\n", turistico1);
printf("Cidade: %s\n", cidade1);
printf("Número da CARTA: %d\n", carta1);

printf("\n#### Dados da CARTA 2: ####\n\n");
printf("População: %d\n", populacao2);
printf("Área: %.2f km\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Pontos Turísticos: %d\n", turistico2);
printf("Cidade: %s\n", cidade2);
printf("Número da CARTA: %d\n", carta2);

return 0;


}

    return 0;
}
