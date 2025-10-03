#include <stdio.h>

int main() {
    // Declaração de variáveis para controlar o número de casas
    int casas_torre = 5;      // Torre se move 5 casas
    int casas_bispo = 5;      // Bispo se move 5 casas
    int casas_rainha = 8;     // Rainha se move 8 casas
    int casas_cavalo_baixo = 2;   // Cavalo se move 2 casas para baixo
    int casas_cavalo_esquerda = 1; // Cavalo se move 1 casa para esquerda
    int contador;             // Variável auxiliar para contadores
    int i, j;                 // Variáveis para loops aninhados do Cavalo
    
    // ========================================
    // MOVIMENTO DA TORRE
    // ========================================
    printf("===== MOVIMENTO DA TORRE =====\n");
    printf("A Torre move-se 5 casas para a direita:\n\n");
    
    /*
     * Estrutura FOR para a Torre
     * A Torre se move horizontalmente para a direita
     * Percorre 5 casas imprimindo "Direita" a cada movimento
     */
    for (contador = 1; contador <= casas_torre; contador++) {
        printf("Direita\n");
    }
    
    printf("\n");
    
    // ========================================
    // MOVIMENTO DO BISPO
    // ========================================
    printf("===== MOVIMENTO DO BISPO =====\n");
    printf("O Bispo move-se 5 casas na diagonal (cima e direita):\n\n");
    
    /*
     * Estrutura WHILE para o Bispo
     * O Bispo se move na diagonal (combinação de cima e direita)
     * Percorre 5 casas imprimindo a combinação de direções
     */
    contador = 1;
    while (contador <= casas_bispo) {
        printf("Cima\n");
        printf("Direita\n");
        contador++;
    }
    
    printf("\n");
    
    // ========================================
    // MOVIMENTO DA RAINHA
    // ========================================
    printf("===== MOVIMENTO DA RAINHA =====\n");
    printf("A Rainha move-se 8 casas para a esquerda:\n\n");
    
    /*
     * Estrutura DO-WHILE para a Rainha
     * A Rainha se move horizontalmente para a esquerda
     * Percorre 8 casas imprimindo "Esquerda" a cada movimento
     */
    contador = 1;
    do {
        printf("Esquerda\n");
        contador++;
    } while (contador <= casas_rainha);
    
    printf("\n");
    
    // ========================================
    // MOVIMENTO DO CAVALO
    // ========================================
    printf("===== MOVIMENTO DO CAVALO =====\n");
    printf("O Cavalo move-se em 'L' (2 casas para baixo e 1 casa para esquerda):\n\n");
    
    /*
     * Estrutura de LOOPS ANINHADOS para o Cavalo
     * O Cavalo realiza um movimento característico em "L":
     * - Primeiro: move-se 2 casas para baixo (loop externo FOR)
     * - Depois: move-se 1 casa para esquerda (loop interno WHILE)
     * 
     * Loop externo (FOR): controla o movimento vertical (2 casas para baixo)
     * Loop interno (WHILE): controla o movimento horizontal (1 casa para esquerda)
     * 
     * Esta estrutura simula o movimento completo em "L" do Cavalo
     */
    
    // Loop externo FOR: percorre as casas verticais (movimento para baixo)
    for (i = 1; i <= casas_cavalo_baixo; i++) {
        printf("Baixo\n");
    }
    
    // Loop interno WHILE: percorre as casas horizontais (movimento para esquerda)
    j = 1;
    while (j <= casas_cavalo_esquerda) {
        printf("Esquerda\n");
        j++;
    }
    
    printf("\n");
    printf("===== MOVIMENTOS CONCLUIDOS =====\n");
    
    return 0;
}
