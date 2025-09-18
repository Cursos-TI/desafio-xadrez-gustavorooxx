#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void recursiveLoopBispo(int n)
{
    if (n > 0)
    {
        printf("Cima, Direita\n");
        recursiveLoopBispo(n - 1);
    }
}

void recursiveLoopTorre(int n)
{
    if (n > 0)
    {
        printf("Direita\n");
        recursiveLoopTorre(n - 1);
    }
}

void recursiveLoopRainha(int n)
{
    if (n > 0)
    {
        printf("Esquerda\n");
        recursiveLoopRainha(n - 1);
    }
}

int main()
{
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int movBispo = 5;
    int movInicialTorre = 0;
    int movTorre = 5;
    int movInicialRainha = 0;
    int movRainha = 8;
    int movCavalo = 3;
    int mov_vertical;
    int mov_horizontal;

    printf("Nível Novato \n");
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimentação Bispo: \n");
    for (int i = 0; i < movBispo; i++)
    {
        printf("Cima, Direita\n");
    }
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Movimentação da Torre: \n");
    do
    {
        printf("Direita\n");
        movInicialTorre++;
    } while (movInicialTorre < movTorre);
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Movimentação da Rainha: \n");
    while (movInicialRainha < movRainha)
    {
        printf("Esquerda\n");
        movInicialRainha++;
    }
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("Nível Aventureiro \n");
    printf("Movimentação da Cavalo: \n");
    while (movCavalo == 3)
    {
        for (movCavalo = 1; movCavalo <= 2; movCavalo++)
        {
            printf("Baixo \n");
        }
        movCavalo++;
        printf("Esquerda");
    }
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    printf("\n");
    printf("Nível Mestre \n");
    printf("Movimentação Bispo 2:\n");
    recursiveLoopBispo(movBispo);
    printf("Movimentação Torre 2:\n");
    recursiveLoopTorre(movTorre);
    printf("Movimentação Rainha 2:\n");
    recursiveLoopRainha(movRainha);
    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    printf("Movimentação Cavalo 2:\n");
    // Loop externo para o movimento vertical (2 casas)
    for (mov_vertical = 1; mov_vertical <= 2; mov_vertical++)
    {
        // Usando 'continue' para demonstrar a primeira parte do movimento em L (2 casas na vertical)
        printf("Cima\n");
        // Se ainda não chegamos na segunda casa vertical, continuamos para a próxima iteração
        if (mov_vertical < 2)
            continue; // Pula para a próxima iteração do loop externo
        // Loop interno para o movimento horizontal (1 casa)
        for (mov_horizontal = 1; mov_horizontal <= 1; mov_horizontal++)
        {
            printf("Direita\n");
        }
        // Usa 'break' para sair do loop externo após completar o movimento "L"
        if (mov_vertical == 2)
            break; // Sai do loop externo
    }

    printf("Movimentação Bispo com loops aninhados:\n");
    // O loop externo representa o movimento vertical
    for (int vertical = 0; vertical < movBispo; vertical++)
    {
        // O loop interno representa o movimento horizontal
        for (int horizontal = 0; horizontal < 1; horizontal++)
        {
            printf("Cima, Direita\n");
        }
    }

    return 0;
}
