#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    
    // Varável do usuario
    char nome[50];

    //Variaveis das carta 1
    char codcart1[20],codcart2[20], estado1[50] ,estado2 [50], city1 [50], city2 [50] ;
    int populacao1, populacao2 , pontost1, pontost2;
    float area1 , area2, pib1 , pib2 ;

    //Cadstro do nome do ususario:
    printf(" Olá usuario: Qual é o seu nome:");
    scanf("%s" , &nome);
    printf("\nSeja bem-vindo: %s\n" , nome);

     //Cadatro das Cartas:
    //Carta 1
    printf("\n---- Carta 1 ----\n");
    printf("Digite o codigo  da carta (ex: A01 , B03): ");
    scanf("%s" , codcart1);
    printf("Digite o nome do estado:");
    scanf("%s" , estado1);
    printf("Digite o nome da cidade:");
    scanf("%s" , city1);
    printf("Digite o número da população:");
    scanf("%d", &populacao1);
    printf("Digite o tamanho da área da cidade em Km²: ");
    scanf("%f" , &area1);
    printf("Digite o número do PIB:");
    scanf("%f" , &pib1);
    printf("Digite a quantidade de pontos turísticos:");
    scanf("%d" , &pontost1);

    //Carta 2
     printf("\n---- Carta 2 ----\n");
    printf("Digite o código  da carta (ex: A01 , B03): ");
    scanf("%s" , codcart2);
    printf("Digite o nome do estado:");
    scanf("%s" , estado2);
    printf("Digite o nome da cidade:");
    scanf("%s" , city2);
    printf("Digite o número da população:");
    scanf("%d", &populacao2);
    printf("Digite o tamanho da área da cidade em Km²: ");
    scanf("%f" , &area2);
    printf("Digite o número do PIB:");
    scanf("%f" , &pib2);
    printf("Digite a quantidade de pontos turísticos:");
    scanf("%d" , &pontost2);



    //Exibição dos Dados das Cartas:

    printf(" \n-- Carta 1:--\n Código: %s\n Estado: %s\n Cidade: %s\n População: %d\n Área: %f\n PIB: %f\n Pontos Turísticos %d  " , codcart1 , estado1 , city1 , populacao1 , area1 , pib1  , pontost1 );

    printf(" \n-- Carta 2: --\nCódigo: %s\n Estado: %s\n Cidade: %s\n População: %d\n Área: %f\n PIB: %f\n Pontos Turísticos %d  " , codcart2 , estado2 , city2 , populacao2  ,area2 ,pib2 , pontost2 );


    //Fim do programa:

    printf("\nFim do programa!\n");
    return 0;
}
