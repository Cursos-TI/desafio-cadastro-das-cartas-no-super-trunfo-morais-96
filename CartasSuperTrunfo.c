#include <stdio.h>
#include <string.h>

// Função para limpar o buffer de entrada.
// Essa função lê e descarta caracteres até encontrar um '\n' (nova linha)
// ou atingir o final do arquivo (EOF). É útil para evitar que caracteres residuais
// na entrada prejudiquem leituras subsequentes.
void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

// Função para ler uma linha de texto do usuário.
// Ela utiliza a função fgets para ler até "length" caracteres do stdin.
// Em seguida, a função strtok é usada para remover o caractere de nova linha (\n)
// que pode ser adicionado ao final da string.
void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");     
}

int main() {
    
    // Declaração das variáveis para armazenar dados de duas "cartas" (informações de cidades).
    float area1, area2, pib1, pib2;
    char codigo1[4], codigo2[4], cidade1[50], cidade2[50];
    int populacao1, populacao2, pontos1, pontos2;
    char estado1, estado2;
 
    // Leitura dos dados para a Carta 1:
    printf("Carta 1\n");
    printf("Estado: ");
    // Lê um caractere que representa o estado.
    scanf("%c", &estado1);
    
    printf("Código: ");
    // Limpa o buffer para evitar que caracteres residuais atrapalhem a leitura da string.
    limpar_entrada(); 
    // Lê uma string para o código da cidade.
    scanf("%s", codigo1);
    
    printf("Nome da Cidade: ");
    // Novamente limpa o buffer antes de ler o nome completo da cidade.
    limpar_entrada(); 
    // Lê uma linha de texto (o nome da cidade) e remove o '\n' ao final.
    ler_texto(cidade1, 50);
    
    printf("População: ");
    // Lê um número inteiro representando a população.
    scanf("%d", &populacao1);
    
    printf("Área: ");
    // O espaço antes de %f ajuda a descartar espaços em branco residuais.
    scanf(" %f", &area1);
    
    printf("PIB: ");
    scanf("%f", &pib1);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);
    printf("\n");
 
    // Leitura dos dados para a Carta 2:
    printf("Carta 2:\n");
    printf("Estado: ");
    // Limpa o buffer antes de ler o caractere do estado.
    limpar_entrada(); 
    scanf("%c", &estado2);
    
    printf("Código: ");
    limpar_entrada(); 
    scanf("%s", codigo2);
    
    printf("Nome da Cidade: ");
    limpar_entrada(); 
    ler_texto(cidade2, 50);
    
    printf("População: ");
    scanf("%d", &populacao2);
    
    printf("Área: ");
    scanf(" %f", &area2);
    
    printf("PIB: ");
    scanf("%f", &pib2);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);
    printf("\n");
 
    // Exibição dos dados da Carta 1:
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("\n\n");
    
    // Exibição dos dados da Carta 2:
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
 
    return 0;
}
