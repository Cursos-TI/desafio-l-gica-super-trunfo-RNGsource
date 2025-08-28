#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída de dados

// A função main é o ponto de entrada de qualquer programa em C.
int main() {

    // --- Declaração de Variáveis para a Carta 1 ---
    // Declaração de todas as variáveis necessárias para armazenar os dados da primeira carta.
    char codigo_1[5];          // Array de char para o código (ex: "A01").
    char nomeCidade_1[50];     // Array de char para o nome da cidade.
    unsigned long int populacao_1; // População da cidade (número inteiro grande sem sinal).
    float area_1;              // Área da cidade em km².
    float pib_1;               // PIB da cidade em bilhões.
    int pontosTuristicos_1;    // Número de pontos turísticos.
    float densidade_1;         // Atributo calculado: Densidade Populacional.
    float pibPerCapita_1;      // Atributo calculado: PIB per Capita.

    // --- Declaração de Variáveis para a Carta 2 ---
    // Repetimos a mesma estrutura de variáveis para a segunda carta.
    char codigo_2[5];
    char nomeCidade_2[50];
    unsigned long int populacao_2;
    float area_2;
    float pib_2;
    int pontosTuristicos_2;
    float densidade_2;
    float pibPerCapita_2;

    // --- Variável para o Menu Interativo (NOVO - Nível Aventureiro) ---
    int escolha; // Armazena a escolha do atributo pelo usuário.

    // --- Interface com o Usuário ---
    // Exibe uma mensagem de boas-vindas para guiar o usuário no preenchimento dos dados.
    printf("=======================================\n");
    printf("  Bem-vindo ao Jogo Super Trunfo!\n");
    printf("=======================================\n");
    printf("Por favor, insira os dados para as duas cartas abaixo.\n\n");

    // --- Leitura dos Dados da Carta 1 ---
    // Solicita e lê cada um dos atributos da primeira carta.
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo_1);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade_1);
    printf("Digite a População: ");
    scanf("%lu", &populacao_1);
    printf("Digite a Área (em km²): ");
    scanf("%f", &area_1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib_1);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos_1);
    printf("\n");

    // --- Leitura dos Dados da Carta 2 ---
    // Solicita e lê cada um dos atributos da segunda carta.
    printf("--- Cadastro da Carta 2 ---\n");
    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s", codigo_2);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade_2);
    printf("Digite a População: ");
    scanf("%lu", &populacao_2);
    printf("Digite a Área (em km²): ");
    scanf("%f", &area_2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib_2);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos_2);
    printf("\n");

    // --- Cálculos dos Atributos Derivados ---
    densidade_1 = (float)populacao_1 / area_1;
    pibPerCapita_1 = (pib_1 * 1000000000) / (float)populacao_1;
    densidade_2 = (float)populacao_2 / area_2;
    pibPerCapita_2 = (pib_2 * 1000000000) / (float)populacao_2;

    // --- Exibição dos Dados Cadastrados ---
    printf("\n=======================================\n");
    printf("      Resumo das Cartas Cadastradas\n");
    printf("=======================================\n\n");
    printf("Carta 1: %s - %s\n", codigo_1, nomeCidade_1);
    printf("Carta 2: %s - %s\n\n", codigo_2, nomeCidade_2);

    // --- MENU INTERATIVO (NOVO - NÍVEL AVENTUREIRO) ---
    // Apresenta ao usuário as opções de atributos para comparação.
    printf("=======================================\n");
    printf("Escolha o atributo para a comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("=======================================\n");
    printf("Digite o número da sua escolha: ");
    scanf("%d", &escolha); // Lê a opção do usuário.
    printf("\n");

    // --- LÓGICA DE COMPARAÇÃO COM SWITCH (NOVO - NÍVEL AVENTUREIRO) ---
    // A estrutura switch direciona o programa para o bloco de código correto
    // com base na escolha do usuário.
    switch (escolha) {
        case 1: // Comparação por População
            printf("--- Comparando por: População ---\n");
            printf("Carta 1 (%s): %lu habitantes\n", nomeCidade_1, populacao_1);
            printf("Carta 2 (%s): %lu habitantes\n", nomeCidade_2, populacao_2);
            printf("---------------------------------------\n");
            if (populacao_1 > populacao_2) {
                printf("Resultado: A Carta 1 (%s) venceu!\n", nomeCidade_1);
            } else if (populacao_2 > populacao_1) {
                printf("Resultado: A Carta 2 (%s) venceu!\n", nomeCidade_2);
            } else {
                printf("Resultado: Houve um empate!\n");
            }
            break; // Finaliza o case

        case 2: // Comparação por Área
            printf("--- Comparando por: Área ---\n");
            printf("Carta 1 (%s): %.2f km²\n", nomeCidade_1, area_1);
            printf("Carta 2 (%s): %.2f km²\n", nomeCidade_2, area_2);
            printf("---------------------------------------\n");
            if (area_1 > area_2) {
                printf("Resultado: A Carta 1 (%s) venceu!\n", nomeCidade_1);
            } else if (area_2 > area_1) {
                printf("Resultado: A Carta 2 (%s) venceu!\n", nomeCidade_2);
            } else {
                printf("Resultado: Houve um empate!\n");
            }
            break; // Finaliza o case

        case 3: // Comparação por PIB
            printf("--- Comparando por: PIB ---\n");
            printf("Carta 1 (%s): %.2f bilhões\n", nomeCidade_1, pib_1);
            printf("Carta 2 (%s): %.2f bilhões\n", nomeCidade_2, pib_2);
            printf("---------------------------------------\n");
            if (pib_1 > pib_2) {
                printf("Resultado: A Carta 1 (%s) venceu!\n", nomeCidade_1);
            } else if (pib_2 > pib_1) {
                printf("Resultado: A Carta 2 (%s) venceu!\n", nomeCidade_2);
            } else {
                printf("Resultado: Houve um empate!\n");
            }
            break; // Finaliza o case

        case 4: // Comparação por Pontos Turísticos
            printf("--- Comparando por: Pontos Turísticos ---\n");
            printf("Carta 1 (%s): %d\n", nomeCidade_1, pontosTuristicos_1);
            printf("Carta 2 (%s): %d\n", nomeCidade_2, pontosTuristicos_2);
            printf("---------------------------------------\n");
            if (pontosTuristicos_1 > pontosTuristicos_2) {
                printf("Resultado: A Carta 1 (%s) venceu!\n", nomeCidade_1);
            } else if (pontosTuristicos_2 > pontosTuristicos_1) {
                printf("Resultado: A Carta 2 (%s) venceu!\n", nomeCidade_2);
            } else {
                printf("Resultado: Houve um empate!\n");
            }
            break; // Finaliza o case

        case 5: // Comparação por Densidade Demográfica (REGRA INVERTIDA)
            printf("--- Comparando por: Densidade Demográfica ---\n");
            printf("Lembre-se: para Densidade, o MENOR valor vence!\n\n");
            printf("Carta 1 (%s): %.2f hab/km²\n", nomeCidade_1, densidade_1);
            printf("Carta 2 (%s): %.2f hab/km²\n", nomeCidade_2, densidade_2);
            printf("---------------------------------------\n");
            // A regra é invertida: vence quem tem a MENOR densidade.
            if (densidade_1 < densidade_2) {
                printf("Resultado: A Carta 1 (%s) venceu!\n", nomeCidade_1);
            } else if (densidade_2 < densidade_1) {
                printf("Resultado: A Carta 2 (%s) venceu!\n", nomeCidade_2);
            } else {
                printf("Resultado: Houve um empate!\n");
            }
            break; // Finaliza o case

        default: // Caso o usuário digite uma opção inválida
            printf("Opção inválida! Por favor, execute o programa novamente e escolha um número de 1 a 5.\n");
            break; // Finaliza o default
    }
    printf("=======================================\n");

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso.
}