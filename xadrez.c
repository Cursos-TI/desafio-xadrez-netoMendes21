#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int Bispo(int opcao, int casas)
{
    printf("Bispo\n\n");
    printf("Digite a direção que você quer mover o Bispo.\n");
    printf("1. Diagonal superior esquerda\n");
    printf("2. Diagonal superior direita\n");
    printf("3. Diagonal inferior esquerda\n");
    printf("4. Diagonal inferior direita\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("\nQuantas casas quer movimentar para à Diagonal superior esquerda?: ");
        scanf("%d", &casas);

        for (int i = 1; i <= casas; i++)
        {
            printf("Diagonal superior esquerda\n");
        }
        break;
    case 2:
        printf("\nQuantas casas quer movimentar para à Diagonal superior direita?: ");
        scanf("%d", &casas);

        for (int i = 1; i <= casas; i++)
        {
            printf("Diagonal superior direita\n");
        }
        break;
    case 3:
        printf("\nQuantas casas quer movimentar para à Diagonal inferior esquerda?: ");
        scanf("%d", &casas);

        for (int i = 1; i <= casas; i++)
        {
            printf("Diagonal inferior esquerda\n");
        }
        break;
    case 4:
        printf("\nQuantas casas quer movimentar para à Diagonal inferior direita?: ");
        scanf("%d", &casas);

        for (int i = 1; i <= casas; i++)
        {
            printf("Diagonal inferior direita\n");
        }
        break;

    default:
        printf("Opção Inválida!\n");
        break;
    }

    return 0;
}

int Torre(int opcao, int casas)
{
    int i = 1;

    printf("\n\nTorre\n\n");
    printf("Digite a direção que você quer mover a Torre.\n");
    printf("1. À frente\n");
    printf("2. Atrás\n");
    printf("3. Direita\n");
    printf("4. Esquerda\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("\nQuantas casas quer movimentar para À frente?: ");
        scanf("%d", &casas);

        do
        {
            printf("À Frente\n");
            i++;
        } while (i <= casas);
        break;

    case 2:
        printf("\nQuantas casas quer movimentar para Trás?: ");
        scanf("%d", &casas);

        do
        {
            printf("Atrás\n");
            i++;
        } while (i <= casas);
        break;

    case 3:
        printf("\nQuantas casas quer movimentar para Direita?: ");
        scanf("%d", &casas);

        do
        {
            printf("Direita\n");
            i++;
        } while (i <= casas);
        break;

    case 4:
        printf("\nQuantas casas quer movimentar para Esquerda?: ");
        scanf("%d", &casas);

        do
        {
            printf("esquerda\n");
            i++;
        } while (i <= casas);
        break;

    default:
        printf("Opção Inválida!\n");
        break;
    }

    return 0;
}

int Rainha(int opcao, int casas)
{
    int i = 1;

    printf("\n\nRainha\n\n");
    printf("Digite a direção que você quer mover a Rainha.\n");
    printf("1. À frente\n");
    printf("2. Atrás\n");
    printf("3. Direita\n");
    printf("4. Esquerda\n");
    printf("5. Diagonal superior esquerda\n");
    printf("6. Diagonal superior direita\n");
    printf("7. Diagonal inferior esquerda\n");
    printf("8. Diagonal inferior direita\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("\nQuantas casas quer movimentar para À frente?: ");
        scanf("%d", &casas);

        while (i <= casas)
        {
            printf("À Frente\n");
            i++;
        }
        break;
    case 2:
        printf("\nQuantas casas quer movimentar para Trás?: ");
        scanf("%d", &casas);

        while (i <= casas)
        {
            printf("Atrás\n");
            i++;
        }
        break;
    case 3:
        printf("\nQuantas casas quer movimentar para Direita?: ");
        scanf("%d", &casas);

        while (i <= casas)
        {
            printf("Direita\n");
            i++;
        }
        break;
    case 4:
        printf("\nQuantas casas quer movimentar para Esquerda?: ");
        scanf("%d", &casas);

        while (i <= casas)
        {
            printf("Esquerda\n");
            i++;
        }
        break;
    case 5:
        printf("\nQuantas casas quer movimentar para à Diagonal superior esquerda?: ");
        scanf("%d", &casas);

        while (i <= casas)
        {
            printf("Diagonal Superior Esquerda\n");
            i++;
        }
        break;
    case 6:
        printf("\nQuantas casas quer movimentar para à Diagonal superior direita?: ");
        scanf("%d", &casas);

        while (i <= casas)
        {
            printf("Diagonal Superior Direita\n");
            i++;
        }
        break;
    case 7:
        printf("\nQuantas casas quer movimentar para à Diagonal inferior esquerda?: ");
        scanf("%d", &casas);

        while (i <= casas)
        {
            printf("Diagonal Diagonal Inferior Esquerda\n");
            i++;
        }
        break;
    case 8:
        printf("\nQuantas casas quer movimentar para à Diagonal inferior direita?: ");
        scanf("%d", &casas);

        while (i <= casas)
        {
            printf("Diagonal Diagonal Inferior Direita\n");
            i++;
        }
        break;

    default:
        printf("Opção Inválida!\n");
        break;
    }

    return 0;
}

int main()
{
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int casas;
    int opcao;
    int i = 1;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    // Chamada da função da peça Bispo

    Bispo(opcao, casas);

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    // Chamada da função da peça Torre

    Torre(opcao, casas);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    // Chamada da função da peça Rainha

    Rainha(opcao, casas);

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
