#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

#include <stdio.h>

// Estrutura que representa uma carta do Super Trunfo
typedef struct {
    char estado[3];               // Sigla do estado (ex: "SP")
    char codigo[10];             // Código identificador da carta
    char nomeCidade[50];         // Nome da cidade
    int populacao;               // População da cidade
    float area;                  // Área da cidade em km²
    float pib;                   // PIB da cidade em reais
    int pontosTuristicos;        // Número de pontos turísticos
    float densidadePopulacional; // Densidade populacional calculada
    float pibPerCapita;          // PIB per capita calculado
} Carta;

// Função que calcula a densidade populacional e o PIB per capita da carta
void calcularIndicadores(Carta *carta) {
    carta->densidadePopulacional = carta->populacao / carta->area;
    carta->pibPerCapita = carta->pib / carta->populacao;
}

// Função que compara duas cartas com base no PIB per capita
void compararCartas(Carta c1, Carta c2) {
    // Exibe os valores do atributo comparado para cada carta
    printf("Comparação de cartas (Atributo: PIB per capita):\n\n");
    printf("Carta 1 - %s (%s): %.2f\n", c1.nomeCidade, c1.estado, c1.pibPerCapita);
    printf("Carta 2 - %s (%s): %.2f\n", c2.nomeCidade, c2.estado, c2.pibPerCapita);

    // Compara os valores e determina a carta vencedora
    if (c1.pibPerCapita > c2.pibPerCapita) {
        printf("Resultado: Carta 1 (%s) venceu!\n", c1.nomeCidade);
    } else if (c2.pibPerCapita > c1.pibPerCapita) {
        printf("Resultado: Carta 2 (%s) venceu!\n", c2.nomeCidade);
    } else {
        printf("Resultado: Empate!\n");
    }
}

int main() {
    // Criação e preenchimento dos dados da primeira carta
    Carta carta1 = {"SP", "C001", "São Paulo", 12300000, 1521.11, 230000000000.0, 15};

    // Criação e preenchimento dos dados da segunda carta
    Carta carta2 = {"RJ", "C002", "Rio de Janeiro", 6718903, 1182.3, 150000000000.0, 12};

    // Cálculo dos indicadores para cada carta
    calcularIndicadores(&carta1);
    calcularIndicadores(&carta2);

    // Comparação das cartas com base no atributo escolhido
    compararCartas(carta1, carta2);

    return 0;
}



