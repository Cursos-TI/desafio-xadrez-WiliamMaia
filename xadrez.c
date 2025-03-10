#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    int torre, bispo, rainha, escolhadepeca; // Variáveis para as peças e seleção da peça
    torre = 0, bispo = 0, rainha = 0; // Aqui apontei a posição inicial das peças para teste
    int movimento_torre, movimento_bispo, movimento_rainha; // Variável para o número de casas a ser movimentada

    printf("Vamos movimentar as peças de Xadrez !\n");
    printf("Escolha qual peça movimentar:\n 1. Torre\n 2. Bispo\n 3.Rainha\n");
    scanf("%d", &escolhadepeca);

    switch (escolhadepeca) {
        case 1:
        printf("Agora escolha quantas casas irá se movimentar\n");
        scanf("%d", &movimento_torre);
        for (torre; torre < movimento_torre; torre++) {
            printf("A Torre se movimentou para Direita\n");
        } break;
        case 2:
        printf("Agora escolha quantas casas irá se movimentar\n");
        scanf("%d", &movimento_bispo);
        while (bispo < movimento_bispo) {
        printf("Bispo se movimentou para Direita e Cima\n");
        bispo++;
        } break;
        case 3:
        printf("Agora escolha quantas casas irá se movimentar\n");
        scanf("%d", &movimento_rainha);
        do {
            printf("A Rainha se movimentou para Esquerda\n");
            rainha++;
        } while (rainha < movimento_rainha);
        break;
        default:
        printf("opção inválida !\n");
        break;
}

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
