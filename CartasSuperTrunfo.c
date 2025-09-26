#include <stdio.h>

int main() {
    // Definição de variáveis
    char estado1, estado2;         // Letra do estado (A até Z)
    char codigo1[4], codigo2[4];   // Código da carta (ex: A01)
    char nome1[50], nome2[50];     // Nome da cidade
    int populacao1, populacao2;    // População
    float area1, area2;            // Área em km²
    float pib1, pib2;              // PIB
    int pontos1, pontos2;          // Pontos turísticos

    printf("===== Cadastro da Carta 1 =====\n");
    printf("Digite a letra do estado (A a Z): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);

    printf("===== Cadastro da Carta 2 =====\n");
    printf("Digite a letra do estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: A02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Exibição dos dados
    printf("\n==============================\n");
    printf("===== CARTA 1 - %s =====\n", nome1);
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);

    printf("\n===== CARTA 2 - %s =====\n", nome2);
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("==============================\n");

    return 0;
}

