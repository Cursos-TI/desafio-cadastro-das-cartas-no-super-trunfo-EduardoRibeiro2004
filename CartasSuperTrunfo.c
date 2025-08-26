#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Declaração das variáveis de ambas cartas
    char estado01[2], estado02[2];
    int cardCode01, cardCode02;
    char cidade01[50], cidade02[50];
    int população01, população02;
    float area01, area02;
    float pib01, pib02;
    int ptsTuristicos01, ptsTuristicos02;

    //Entrada dos dados da carta 1:
    printf("--Digite os dados da primeira carta:--"); printf("\n");
    printf("Letra da carta de 'A' a 'H': ");
    scanf("%s", estado01);
    printf("Numero de '1' a '4': ");
    scanf("%i", &cardCode01);
    printf("Insira o nome da cidade: ");
    scanf("%s", &cidade01);
    printf("Insira a populção da cidade: ");
    scanf("%i", &população01);
    printf("Insira a área da cidade (Em km quadrados): ");
    scanf("%f", &area01);
    printf("Insira o Produto Interno Bruto da cidade: ");
    scanf("%f", &pib01);
    printf("Insira a quantidade de pontos turísticos da cidade: ");
    scanf("%i", &ptsTuristicos01);
    //Entrada dos dados da carta 2:
    printf("--Digite os dados da segunda carta:--"); printf("\n");
    printf("Letra da carta de 'A' a 'H': ");
    scanf("%s", estado02);
    printf("Numero de '1' a '4': ");
    scanf("%i", &cardCode02);
    printf("Insira o nome da cidade: ");
    scanf("%s", &cidade02);
    printf("Insira a populção da cidade: ");
    scanf("%i", &população02);
    printf("Insira a área da cidade (Em km quadrados): ");
    scanf("%f", &area02);
    printf("Insira o Produto Interno Bruto da cidade: ");
    scanf("%f", &pib02);
    printf("Insira a quantidade de pontos turísticos da cidade: ");
    scanf("%i", &ptsTuristicos02);

    //Saída dos dados da carta 1:
    printf("---Carta 1:---"); printf("\n");
    printf("Estado: %s", estado01); printf("\n");
    printf("Código: %s%i", estado01, cardCode01); printf("\n");
    printf("Cidade: %s", cidade01); printf("\n");
    printf("População: %i", população01); printf("\n");
    printf("Área: %.2f", area01); printf("km²\n");
    printf("PIB: R$ %.2f", pib01); printf("\n");    
    printf("Pontos turísticos: %i", ptsTuristicos01); printf("\n");
    //Saída dos dados da carta 2:
    printf("---Carta 2:---"); printf("\n");
    printf("Estado: %s", estado02); printf("\n");
    printf("Código: %s%i", estado02, cardCode02); printf("\n");
    printf("Cidade: %s", cidade02); printf("\n");
    printf("População: %i", população02); printf("\n");
    printf("Área: %.2f", area02); printf("km²\n");
    printf("PIB: R$ %.2f", pib02); printf("\n");    
    printf("Pontos turísticos: %i", ptsTuristicos02); printf("\n");

    return 0;
}
