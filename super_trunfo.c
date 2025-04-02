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

    //variaveis da carta 1
    char Estado, codigo[4], Cidade[20];
    int populacao, Pontos;
    float area, PIB;

    //variaveis da carta 2
    char Estado2, codigo2[4], Cidade2[20];
    int populacao2, Pontos2;
    float area2, PIB2;

    //Cadastro da Carta 1

    printf("CADASTRO DA CARTA 1\n");

    printf("Escolha uma letra de  A - D para representar o seu Estado:\n");
    scanf(" %c", &Estado);
        
    printf("Digite o nome de uma das cidades abaixo:\n");
    printf("01 - Rio de Janeiro\n");
    printf("02 - Nova Iguaçu\n");
    printf("03 - Niterói\n");
    printf("04 - Duque de Caxias\n");
    scanf("%s", Cidade);
    
    printf("Digite a Letra do Estado + Numero da Cidade. ex:D04\n");
    scanf("%s", codigo);
    
    printf("Qual o numero da população da cidade?\n");
    scanf("%d", &populacao);
    
    printf("Qual a área da cidade?\n");
    scanf("%f", &area);
    
    printf("Qual o PIB da cidade?\n");
    scanf("%f", &PIB);
    
    printf("Quantos pontos turisticos a cidade tem?\n");
    scanf("%d", &Pontos);

    //Cadastro da Carta 2
    
    printf("\nCADASTRO DA CARTA 2\n");

    printf("Escolha uma letra de  E - H para representar o seu Estado:\n");
    scanf(" %c", &Estado2);
        
    printf("Digite o nome de uma das cidades abaixo:\n");
    printf("01 - Guarulhos\n");
    printf("02 - São Bernardo do Campo\n");
    printf("03 - São Paulo\n");
    printf("04 - Campinas\n");
    scanf("%s", Cidade2);
    
    printf("Digite a Letra do Estado + Numero da Cidade. ex:D04\n");
    scanf("%s", codigo2);
    
    printf("Qual o numero da população da cidade?\n");
    scanf("%d", &populacao2);
    
    printf("Qual a área da cidade?\n");
    scanf("%f", &area2);
    
    printf("Qual o PIB da cidade?\n");
    scanf("%f", &PIB2);
    
    printf("Quantos pontos turisticos a cidade tem?\n");
    scanf("%d", &Pontos2);

    //INFORMAÇÕES COMPLETAS DAS CADASTRADAS

    //Carta 1
    printf("\nCARTA 1\n");
    printf("Estado: %c \n", Estado);
    printf("Cidade: %s \n", Cidade);
    printf("Código: %s \n", codigo);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f bilhões de reais \n", PIB);
    printf("Pontos Turísticos: %d \n", Pontos);

    //Carta 2
    printf("\nCARTA 2\n");
    printf("Estado: %c \n", Estado2);
    printf("Cidade: %s \n", Cidade2);
    printf("Código: %s \n", codigo2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", PIB2);
    printf("Pontos Turísticos: %d \n", Pontos2);

    return 0;
}
