#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    int torre, bispo, rainha, cavalo, escolhadepeca, direcao_cavalo; // Variáveis para as peças e seleção da peça
    torre = 0, bispo = 0, rainha = 0, cavalo = 0; // Aqui apontei a posição inicial das peças para teste
    int movimento_torre, movimento_bispo, movimento_rainha, movimento_cavalo; // Variável para o número de casas a ser movimentada

    printf("Vamos movimentar as peças de Xadrez !\n");
    printf("Escolha qual peça movimentar:\n 1. Torre\n 2. Bispo\n 3.Rainha\n 4. Cavalo\n");  // Aqui apresento as escolhas de peças
    scanf("%d", &escolhadepeca);

    switch (escolhadepeca) {  // Aqui se inicia o 'switch' principal
        case 1:
        printf("Agora escolha quantas casas irá se movimentar\n");
        scanf("%d", &movimento_torre);
        for (torre; torre < movimento_torre; torre++) {
            printf("A Torre se movimentou para Direita\n");
        } break;  // Aqui termina o 'Case 1'
        case 2:
        printf("Agora escolha quantas casas irá se movimentar\n");
        scanf("%d", &movimento_bispo);
        while (bispo < movimento_bispo) {
        printf("Bispo se movimentou para Direita e Cima\n");
        bispo++;
        } break;  // Aqui termina o 'Case 2'
        case 3:
        printf("Agora escolha quantas casas irá se movimentar\n");
        scanf("%d", &movimento_rainha);
        do {
            printf("A Rainha se movimentou para Esquerda\n");
            rainha++;
        } while (rainha < movimento_rainha);
        break; // Aqui termina o 'Case 3'
        case 4:
        printf("Agora escolha para qual direção irá se movimentar:\n 1. Direita\n 2. Esquerda\n");
        scanf("%d", &direcao_cavalo);
        switch (direcao_cavalo){  // Aqui inicio o 'switch' interno para direção a tomar do cavalo para fomar o 'L'
            case 1:
            for (int movimentocompleto = 0; movimentocompleto < 1; movimentocompleto --) {
                while (cavalo < 2) {
                    printf("O Cavalo se moveu para Baixo \n");
                    cavalo++; }
                } {
                printf("O Cavalo se moveu para Direita \n");
                }break; // Aqui termina o 'Case 1'
            case 2:
            for (int movimentocompleto = 0; movimentocompleto < 1; movimentocompleto --) {
                while (cavalo < 2) {
                    printf("O Cavalo se moveu para Baixo \n");
                    cavalo++; }
                } {
                printf("O Cavalo se moveu para Esquerda \n");
                } break; // Aqui termina o 'Case 2'
            default:
                printf("Opção inválida !\n");
            break; } // Aqui termina o 'switch interno'
        break; // Aqui termina o 'Case 4'
        default:
        printf("opção inválida !\n");
        break; // Aqui termina o 'switch principal'
}

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
