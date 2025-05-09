#include <stdio.h>

/**
 * xadrez.c
 * 
 * Implementação avançada de movimentos de peças de xadrez:
 * - Torre: recursivo
 * - Bispo: recursivo com loops aninhados
 * - Rainha: recursivo combinando movimentos da torre e do bispo
 * - Cavalo: loops complexos para movimento em L (2 pra cima, 1 pra direita)
 *
 * Requisitos:
 * - Imprimir direção a cada casa: "Cima", "Baixo", "Esquerda", "Direita"
 * - Separar saídas por linhas em branco
 * - Comentários detalhando lógica de recursão e loops
 */

/**
 * Movimento da Torre (Rook) de forma recursiva.
 * A cada chamada, move uma casa para a direita até zerar.
 * @param moves Número de casas restantes
 */
void torreRec(int moves) {
    if (moves <= 0) {
        return;  // Condição de parada
    }
    printf("Direita\n");    // Move uma casa para a direita
    torreRec(moves - 1);      // Chamada recursiva para próximas casas
}

/**
 * Movimento do Bispo (Bishop) com recursividade e loops aninhados.
 * Utiliza um loop externo para movimento vertical e interno para horizontal.
 * @param moves Número de casas restantes na diagonal
 */
void bispoRecLoops(int moves) {
    if (moves <= 0) {
        return;  // Condição de parada
    }
    // Loop externo: movimentação vertical (uma casa para cima)
    for (int v = 0; v < 1; v++) {
        printf("Cima\n");
        // Loop interno: movimentação horizontal (uma casa para a direita)
        for (int h = 0; h < 1; h++) {
            printf("Direita\n");
            break;  // Apenas um passo horizontal por iteração
        }
    }
    // Chamada recursiva para continuar na diagonal
    bispoRecLoops(moves - 1);
}

/**
 * Movimento da Rainha (Queen) de forma recursiva.
 * Combina movimento da torre (reta) e do bispo (diagonal) numa única função.
 * @param moves Número de casas restantes para movimento composto
 */
void rainhaRec(int moves) {
    if (moves <= 0) {
        return;  // Condição de parada
    }
    // Movimento reto (como a Torre)
    printf("Direita\n");
    // Movimento diagonal (como o Bispo)
    printf("Cima\n");
    printf("Direita\n");
    // Recursão para esforço composto
    rainhaRec(moves - 1);
}

/**
 * Movimento do Cavalo (Knight) usando loops aninhados e controle de fluxo.
 * Simula L: duas casas para cima e uma para a direita.
 */
void cavaloComplex() {
    int vertical = 2;    // Passos verticais
    int horizontal = 1;  // Passo horizontal
    // Loop externo para movimentos verticais
    for (int i = 0; i < vertical; i++) {
        printf("Cima\n");  // Move uma casa para cima
        // Loop interno para controlar o deslocamento horizontal somente
        // após completar os movimentos verticais
        for (int j = 0; j < horizontal + 2; j++) {
            if (i == vertical - 1 && j == 0) {
                printf("Direita\n");  // Move uma casa para a direita
                break;                // Sai do loop interno
            }
            continue;  // Continua até a condição de impressão de Direita
        }
    }
}

int main() {
    int moves = 3;  // Define quantas casas cada peça irá percorrer

    printf("Movimento da Torre:\n\n");
    torreRec(moves);

    printf("\nMovimento do Bispo:\n\n");
    bispoRecLoops(moves);

    printf("\nMovimento da Rainha:\n\n");
    rainhaRec(moves);

    printf("\nMovimento do Cavalo:\n\n");
    cavaloComplex();

    return 0;
}
