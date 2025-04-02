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

    char Estado, Código, Cidade;
    int População, Pontos;
    float Área, PIB;

    printf("Para definir o Estado, digite uma letra entre A - H");
    scanf(" %c", &Estado);
    printf("Estado: %c \n", Estado);

    printf("Para definir o Código da Carta, digite o codigo do seu Estado seguido do numero 01, 02, 03 ou 04 (ex: A03, H01).");
    scanf("%s", &Código);
    printf("Codigo: %s \n", Código);

    printf("Digite o nome da cidade:");
    scanf("%s", Cidade);
    printf("Cidade: %c \n", Cidade);

    printf("Qual o numero da população da cidade?");
    scanf("%d", &População);
    printf("População: %d \n", População);

    printf("Qual a área da sua cidade?");
    scanf("%f", &Área);
    printf("Codigo: %f \n", Área);

    printf("Qual o PIB da sua cidade?");
    scanf("%f", &PIB);
    printf("PIB: %f \n", PIB);

    printf("Quantos pontos turisticos tem a sua cidade?");
    scanf("%s", &Pontos);
    printf("Pontos Turísticos: %s \n", Pontos);



    return 0;
}
