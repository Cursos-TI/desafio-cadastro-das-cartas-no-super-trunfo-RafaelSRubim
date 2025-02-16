#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main (){
    char estado [50];
    char nomeCidade[30];
    char codigocidade [5];
    int populacao;
    int area;
    float Densidade_Populacional;
    float PIB;
    float PIBPC;
    int pontosturisticos;

    printf("digite o estado: ");
    fgets(estado, sizeof(estado), stdin);

    printf("digite o nome da cidade: ");
    fgets(nomeCidade, sizeof(nomeCidade), stdin);
 
    printf("Digite o codigo da cidade: ");
    fgets(codigocidade, sizeof(codigocidade), stdin);

    printf("Numeros de habitantes: ");
    scanf("%d", &populacao);

    printf("Tamanho da Cidade: ");
    scanf("%d", &area);

    printf("PIB :");
    scanf("%f", &PIB);

    printf("Pontos Turisticos :");
    scanf("%d", &pontosturisticos);

    Densidade_Populacional = (float)populacao/(area*100);
    PIBPC = (PIB*1000000000)/populacao;

    printf("-----------------------------\n");
    printf("Estado: %s", nomeCidade);
    printf("Cidade: %s", nomeCidade);
    printf("Codigo da cidade: %s", codigocidade);
    printf("População: %d \n", populacao);
    printf("Área:%d km² \n", area);
    printf("Densidade Populacional: %.2f pessoas/km \n", Densidade_Populacional);
    printf("PIB: %.2f Bilhões de reais \n", PIB);
    printf("PIB per capita: %.2f  reais \n", PIBPC);
    printf("Pontos Turisticos: %d \n", pontosturisticos);
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