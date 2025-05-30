#include <stdio.h>

// Definindo uma estrutura para armazenar os dados de cada carta
struct CartaSuperTrunfo {
    char estado;                // Letra de 'A' a 'H'
    char codigo[4];             // Ex: A01, B03 (3 caracteres + '\0')
    char nomeCidade[50];       // Nome da cidade
    int populacao;             // Número de habitantes
    float area;                // Área em km²
    float pib;                 // PIB da cidade
    int pontosTuristicos;      // Número de pontos turísticos
};

int main() {
    struct CartaSuperTrunfo carta1, carta2;

    // Instruções iniciais
    printf("Cadastro de Cartas Super Trunfo\n\n");

    // Leitura dos dados da Carta 01
    printf("Carta 1:\n");
    printf("Informe o estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Informe o código da carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade); // Lê até a quebra de linha

    printf("Informe a população: ");
    scanf("%d", &carta1.populacao);

    printf("Informe a área (km²): ");
    scanf("%f", &carta1.area);

    printf("Informe o PIB (em bilhões): ");
    scanf("%f", &carta1.pib);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    printf("\n");

    // Leitura dos dados da Carta 02
    printf("Carta 2:\n");
    printf("Informe o estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Informe o código da carta (ex: B02): ");
    scanf("%s", carta2.codigo);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("Informe a população: ");
    scanf("%d", &carta2.populacao);

    printf("Informe a área (km²): ");
    scanf("%f", &carta2.area);

    printf("Informe o PIB (em bilhões): ");
    scanf("%f", &carta2.pib);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    printf("\n");

    // Exibição dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    printf("\n");

    // Exibição dos dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}

