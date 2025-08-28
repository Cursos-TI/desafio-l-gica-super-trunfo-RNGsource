#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída de dados
#include <string.h> // Inclui a biblioteca para manipulação de strings (usada para strcpy)

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

    // --- Variáveis para a Lógica do Jogo (NOVO - Nível Mestre) ---
    int escolha1 = 0, escolha2 = 0;    // Armazenam as escolhas de atributos do usuário.
    char nomeAttr1[50], nomeAttr2[50]; // Armazenam os nomes dos atributos escolhidos para exibição.
    // Usamos 'double' para as variáveis de valor e soma. Isso garante alta precisão e
    // capacidade para somar tipos diferentes (int, float, long) sem perda de dados.
    double valor1_attr1 = 0, valor1_attr2 = 0;
    double valor2_attr1 = 0, valor2_attr2 = 0;
    double soma_carta1, soma_carta2;

    // --- Interface com o Usuário ---
    // Exibe uma mensagem de boas-vindas para guiar o usuário no preenchimento dos dados.
    printf("=======================================\n");
    printf("  Bem-vindo ao Desafio Super Trunfo!\n");
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
    // A conversão (float) garante que a divisão resulte em um número com casas decimais.
    densidade_1 = (float)populacao_1 / area_1;
    // O PIB (em bilhões) é multiplicado por 1.000.000.000 para o cálculo per capita.
    pibPerCapita_1 = (pib_1 * 1000000000) / (float)populacao_1;
    densidade_2 = (float)populacao_2 / area_2;
    pibPerCapita_2 = (pib_2 * 1000000000) / (float)populacao_2;

    // --- Escolha do PRIMEIRO Atributo (LÓGICA MESTRE) ---
    printf("=======================================\n");
    printf("Jogador, escolha o PRIMEIRO atributo para a comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("=======================================\n");
    printf("Digite o número da sua escolha: ");
    scanf("%d", &escolha1);

    // Este switch armazena o nome e os valores do primeiro atributo escolhido.
    // A função strcpy (string copy) copia o nome do atributo para a variável nomeAttr1.
    // Os valores de cada carta são convertidos para double e armazenados.
    switch (escolha1) {
        case 1: strcpy(nomeAttr1, "População"); valor1_attr1 = populacao_1; valor2_attr1 = populacao_2; break;
        case 2: strcpy(nomeAttr1, "Área"); valor1_attr1 = area_1; valor2_attr1 = area_2; break;
        case 3: strcpy(nomeAttr1, "PIB"); valor1_attr1 = pib_1; valor2_attr1 = pib_2; break;
        case 4: strcpy(nomeAttr1, "Pontos Turísticos"); valor1_attr1 = pontosTuristicos_1; valor2_attr1 = pontosTuristicos_2; break;
        case 5: strcpy(nomeAttr1, "Densidade Demográfica"); valor1_attr1 = densidade_1; valor2_attr1 = densidade_2; break;
        default: printf("Opção inválida! O programa será encerrado.\n"); return 1; // Encerra com código de erro
    }

    // --- Escolha do SEGUNDO Atributo com Menu Dinâmico (LÓGICA MESTRE) ---
    printf("\n=======================================\n");
    printf("Agora, escolha o SEGUNDO atributo (diferente do primeiro):\n");
    // Esta série de 'if's cria o menu dinâmico: a opção escolhida anteriormente não é exibida.
    if (escolha1 != 1) printf("1. População\n");
    if (escolha1 != 2) printf("2. Área\n");
    if (escolha1 != 3) printf("3. PIB\n");
    if (escolha1 != 4) printf("4. Número de Pontos Turísticos\n");
    if (escolha1 != 5) printf("5. Densidade Demográfica\n");
    printf("=======================================\n");
    printf("Digite o número da sua escolha: ");
    scanf("%d", &escolha2);

    // Validação para garantir que a segunda escolha é válida E diferente da primeira.
    if (escolha2 == escolha1 || escolha2 < 1 || escolha2 > 5) {
        printf("Escolha inválida! Você não pode escolher o mesmo atributo ou uma opção inexistente.\n");
        return 1; // Encerra o programa com código de erro
    }

    // Este switch armazena o nome e os valores do segundo atributo escolhido.
    switch (escolha2) {
        case 1: strcpy(nomeAttr2, "População"); valor1_attr2 = populacao_1; valor2_attr2 = populacao_2; break;
        case 2: strcpy(nomeAttr2, "Área"); valor1_attr2 = area_1; valor2_attr2 = area_2; break;
        case 3: strcpy(nomeAttr2, "PIB"); valor1_attr2 = pib_1; valor2_attr2 = pib_2; break;
        case 4: strcpy(nomeAttr2, "Pontos Turísticos"); valor1_attr2 = pontosTuristicos_1; valor2_attr2 = pontosTuristicos_2; break;
        case 5: strcpy(nomeAttr2, "Densidade Demográfica"); valor1_attr2 = densidade_1; valor2_attr2 = densidade_2; break;
    }

    // --- Soma dos Atributos e Comparação Final (LÓGICA MESTRE) ---
    // Soma os valores dos dois atributos escolhidos para cada carta.
    soma_carta1 = valor1_attr1 + valor1_attr2;
    soma_carta2 = valor2_attr1 + valor2_attr2;

    // --- Exibição Final dos Resultados ---
    printf("\n\n=======================================\n");
    printf("        RESULTADO DA RODADA\n");
    printf("=======================================\n\n");

    // Mostra um resumo detalhado, incluindo os valores individuais e a soma para cada carta.
    printf("--- CARTA 1: %s ---\n", nomeCidade_1);
    printf("Atributo 1 (%s): %.2f\n", nomeAttr1, valor1_attr1);
    printf("Atributo 2 (%s): %.2f\n", nomeAttr2, valor1_attr2);
    printf("SOMA TOTAL CARTA 1: %.2f\n\n", soma_carta1);

    printf("--- CARTA 2: %s ---\n", nomeCidade_2);
    printf("Atributo 1 (%s): %.2f\n", nomeAttr1, valor2_attr1);
    printf("Atributo 2 (%s): %.2f\n", nomeAttr2, valor2_attr2);
    printf("SOMA TOTAL CARTA 2: %.2f\n\n", soma_carta2);
    
    printf("---------------------------------------\n");
    // A lógica final de decisão: a carta com a maior soma dos atributos vence.
    if (soma_carta1 > soma_carta2) {
        printf("Resultado Final: A CARTA 1 (%s) VENCEU!\n", nomeCidade_1);
    } else if (soma_carta2 > soma_carta1) {
        printf("Resultado Final: A CARTA 2 (%s) VENCEU!\n", nomeCidade_2);
    } else {
        // Se a soma for igual, o resultado é um empate.
        printf("Resultado Final: HOUVE UM EMPATE!\n");
    }
    printf("=======================================\n");

    // Retorna 0 para indicar que o programa foi executado com sucesso.
    return 0;
}