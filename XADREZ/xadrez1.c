
#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para o movimento do Bispo
void moverBispo(int casas, int mov) {
    if (casas == 0) return;
    printf("Cima, Direita\n");
    moverBispo(casas - 1, mov);
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

int main() {
    printf("_________________________BEM VINDO AO JOGO DE XADREZ!_________________________ \n");

    // Movimento da Torre - 5 casas para a direita
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // Movimento do Bispo - 5 casas na diagonal (cima e direita)
    printf("\nMovimento do Bispo:\n");
    moverBispo(5, 0);

    // Movimento da Rainha - 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // Movimento do Cavalo - 2 casas para cima e 1 para a direita (usando loops complexos)
    printf("\nMovimento do Cavalo:\n");
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }
    for (int j = 0; j < 1; j++) {
        printf("Direita\n");
    }
    
    return 0;
}
