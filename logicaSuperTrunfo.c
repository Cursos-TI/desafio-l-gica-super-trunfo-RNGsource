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
    // O formato %[^\n] permite a leitura de nomes com espaços.
    scanf(" %[^\n]", nomeCidade_1);

    printf("Digite a População: ");
    // Usamos %lu para ler um unsigned long int.
    scanf("%lu", &populacao_1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area_1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib_1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos_1);
    printf("\n"); // Adiciona uma linha em branco para melhor organização.

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
    // Calcula a densidade populacional e o PIB per capita para ambas as cartas.

    // Cálculo para a Carta 1
    // A conversão (float) garante que a divisão resulte em um número com casas decimais.
    densidade_1 = (float)populacao_1 / area_1;
    // O PIB (em bilhões) é multiplicado por 1.000.000.000 para o cálculo per capita.
    pibPerCapita_1 = (pib_1 * 1000000000) / (float)populacao_1;

    // Cálculo para a Carta 2
    densidade_2 = (float)populacao_2 / area_2;
    pibPerCapita_2 = (pib_2 * 1000000000) / (float)populacao_2;


    // --- Exibição dos Dados Cadastrados ---
    // Imprime um resumo dos dados de cada carta na tela.
    printf("\n=======================================\n");
    printf("      Resumo das Cartas Cadastradas\n");
    printf("=======================================\n\n");

    // Exibindo dados da Carta 1
    printf("Carta 1: %s - %s\n", codigo_1, nomeCidade_1);
    printf("População: %lu\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões\n", pib_1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos_1);
    printf("Densidade: %.2f hab/km²\n", densidade_1);
    printf("PIB per Capita: R$ %.2f\n\n", pibPerCapita_1);

    // Exibindo dados da Carta 2
    printf("Carta 2: %s - %s\n", codigo_2, nomeCidade_2);
    printf("População: %lu\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões\n", pib_2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos_2);
    printf("Densidade: %.2f hab/km²\n", densidade_2);
    printf("PIB per Capita: R$ %.2f\n\n", pibPerCapita_2);


    // --- LÓGICA DE COMPARAÇÃO (NOVO - NÍVEL NOVATO) ---
    // O atributo a ser comparado é escolhido diretamente no código.
    // Neste caso, escolhemos 'População'. Para este atributo, o maior valor vence.
    printf("=======================================\n");
    printf("        Resultado da Comparação\n");
    printf("=======================================\n\n");
    printf("Atributo de Comparação: População\n\n");

    printf("Carta 1 (%s): %lu habitantes\n", nomeCidade_1, populacao_1);
    printf("Carta 2 (%s): %lu habitantes\n", nomeCidade_2, populacao_2);
    printf("---------------------------------------\n");

    // Estrutura de decisão if-else para determinar o vencedor.
    if (populacao_1 > populacao_2) {
        // Se a população da carta 1 for maior, ela vence.
        printf("Resultado: A Carta 1 (%s) venceu!\n", nomeCidade_1);
    } else if (populacao_2 > populacao_1) {
        // Se a população da carta 2 for maior, ela vence.
        printf("Resultado: A Carta 2 (%s) venceu!\n", nomeCidade_2);
    } else {
        // Se os valores forem iguais, o resultado é um empate.
        printf("Resultado: Houve um empate!\n");
    }
    printf("=======================================\n");

    // Retorna 0 para indicar que o programa foi executado com sucesso.
    return 0;
}