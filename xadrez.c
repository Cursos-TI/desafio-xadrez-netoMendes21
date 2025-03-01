#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// função de criação dos movimentos do Bispo//
void Bispo(int opcao, int casas)
{
    if (casas > 0)
    {
        switch (opcao)
        {
        case 1:
            for (int i = 1; i <= 1; i++)
            {
                for (int j = 1; j <= 1; j++)
                {
                    printf("Cima-");
                }
                printf("Direita\n");
            }
            Bispo(opcao, casas - 1);
            break;

        case 2:
            for (int i = 1; i <= 1; i++)
            {
                for (int j = 1; j <= 1; j++)
                {
                    printf("Cima-");
                }
                printf("Esquerda\n");
            }
            Bispo(opcao, casas - 1);
            break;

        case 3:
            for (int i = 1; i <= 1; i++)
            {
                for (int j = 1; j <= 1; j++)
                {
                    printf("Baixo-");
                }
                printf("Direita\n");
            }
            Bispo(opcao, casas - 1);
            break;

        case 4:
            for (int i = 1; i <= 1; i++)
            {
                for (int j = 1; j <= 1; j++)
                {
                    printf("Baixo-");
                }
                printf("Esquerda\n");
            }
            Bispo(opcao, casas - 1);
            break;

        default:
            printf("Opção Inválida!\n");
            break;
        }
    }
}
// Função que retorna a quantidade de casas que o usuário solicitou para o bispo se movimentar
void QuantidadeCasasBispo(int opcao, int casas)
{
    scanf("%d", &casas);
    if (casas < 1)
    {
        printf("Digite um valor acima de 0!!!\n");
    }
    else
    {

        Bispo(opcao, casas);
    }
}

// função de criação dos movimentos da Torre//
void Torre(int opcao, int casas)
{

    if (casas > 0)
    {
        switch (opcao)
        {
        case 1:
            printf("À Frente\n");
            Torre(opcao, casas - 1);
            break;

        case 2:
            printf("Atrás\n");
            Torre(opcao, casas - 1);
            break;

        case 3:
            printf("Direita\n");
            Torre(opcao, casas - 1);
            break;

        case 4:
            printf("Esquerda\n");
            Torre(opcao, casas - 1);
            break;

        default:
            printf("Opção inválida");
            break;
        }
    }
}

// Função que retorna a quantidade de casas que o usuário solicitou para a torre se movimentar
void quantidadeCasasTorre(int casas, int opcao)
{
    scanf("%d", &casas);
    if (casas < 0 || casas > 8)
    {
        printf("Digite um valor acima de 0!!!\n");
    }
    else
    {
        Torre(opcao, casas);
    }
}

// função de criação dos movimentos da Rainha
void Rainha(int opcao, int casas)
{
    int i, j;

    if (casas > 0)
    {
        switch (opcao)
        {
        case 1:
            printf("À frente\n");
            Rainha(opcao, casas - 1);
            break;

        case 2:
            printf("Atrás\n");
            Rainha(opcao, casas - 1);
            break;

        case 3:
            printf("Direita\n");
            Rainha(opcao, casas - 1);
            break;

        case 4:
            printf("Esquerda\n");
            Rainha(opcao, casas - 1);
            break;

        case 5:
            for (int i = 1; i <= 1; i++)
            {
                j = 1;
                while (j <= 1)
                {
                    printf("Cima-");
                    j++;
                }
                printf("Direita\n");
                i++;
            }
            Rainha(opcao, casas - 1);
            break;

        case 6:
            for (int i = 1; i <= 1; i++)
            {
                j = 1;
                while (j <= 1)
                {
                    printf("Cima-");
                    j++;
                }
                printf("Esquerda\n");
                i++;
            }
            Rainha(opcao, casas - 1);
            break;

        case 7:
            for (int i = 1; i <= 1; i++)
            {
                j = 1;
                while (j <= 1)
                {
                    printf("Baixo-");
                    j++;
                }
                printf("Direita\n");
                i++;
            }
            Rainha(opcao, casas - 1);
            break;

        case 8:
            for (int i = 1; i <= 1; i++)
            {
                j = 1;
                while (j <= 1)
                {
                    printf("Baixo-");
                    j++;
                }
                printf("Esquerda\n");
                i++;
            }
            Rainha(opcao, casas - 1);
            break;

        default:
            printf("Opção Inválida!\n");
            break;
        }
    }
}

// Função que retorna a quantidade de casas que o usuário solicitou para a Rainha se movimentar
void QuantidadeCasasRainha(int opcao, int *casas)
{
    scanf("%d", casas);
    if (*casas < 0 || *casas > 8)
    {
        printf("Digite um valor acima de 0 ou maior que 8!!!\n");
    }
    else
    {
        Rainha(opcao, *casas);
    }
}

// função de criação dos movimentos do Cavalo//
int Cavalo(int opcao)
{
    printf("\n\n-----------Cavalo-----------\n\n");
    printf("Digite a direção que deseja para mover o cavalo:\n");

    // comando para 2 casa à direita e 1 à frente
    printf("1. Cima-Direita\n");

    // comando para 2 casa à direita e 1 para baixo
    printf("2. Cima-Esquerda\n");

    // comando para 2 casa à esquerda e 1 à frente
    printf("3. Baixo-Direita\n");

    // comando para 2 casa à direita e 1 para baixo
    printf("4. Baixo-Esquerda\n");

    // comando para 2 casa à frente e 1 para direita
    printf("5. Direita-Cima\n");

    // comando para 2 casa à frente e 1 para esquerda
    printf("6. Direita-Baixo\n");

    // comando para 2 casa para baixo e 1 para direita
    printf("7. Esquerda-Cima\n");

    // comando para 2 casa para baixo e 1 para esquerda
    printf("8. Esquerda-Baixo\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        for (int i = 1; i <= 1; i++)
        {
            int j = 1;
            while (j <= 2)
            {
                printf("À Frente\n");
                j++;
            }
            printf("Direita\n");
        }
        printf("\no Cavalo movimentou-se 2 casas à frente e 1 à direita\n");
        break;
        break;
    case 2:
        for (int i = 1; i <= 1; i++)
        {
            int j = 1;
            while (j <= 2)
            {
                printf("À Frente\n");
                j++;
            }
            printf("Esquerda\n");
        }
        printf("\no Cavalo movimentou-se 2 casas à frente e 1 à esquerda\n");
        break;
    case 3:
        for (int i = 1; i <= 1; i++)
        {
            int j = 1;
            while (j <= 2)
            {
                printf("Para Trás\n");
                j++;
            }
            printf("Direita\n");
        }
        printf("\no Cavalo movimentou-se 2 casas para trás e 1 à direita\n");
        break;
    case 4:
        for (int i = 1; i <= 1; i++)
        {
            int j = 1;
            while (j <= 2)
            {
                printf("Para Trás\n");
                j++;
            }
            printf("Esquerda\n");
        }
        printf("\no Cavalo movimentou-se 2 casas para trás e 1 à esquerda\n");
        break;
    case 5:
        for (int i = 1; i <= 1; i++)
        {
            int j = 1;
            while (j <= 2)
            {
                printf("Direita\n");
                j++;
            }
            printf("À Frente\n");
        }
        printf("\no Cavalo movimentou-se 2 casas à direita e 1 à frente\n");
        break;
    case 6:
        for (int i = 1; i <= 1; i++)
        {
            int j = 1;
            while (j <= 2)
            {
                printf("Direita\n");
                j++;
            }
            printf("Para Trás\n");
        }
        printf("\no Cavalo movimentou-se 2 casas à direita e 1 para trás\n");
        break;
    case 7:
        for (int i = 1; i <= 1; i++)
        {
            int j = 1;
            while (j <= 2)
            {
                printf("Esquerda\n");
                j++;
            }
            printf("À Frente\n");
        }
        printf("\no Cavalo movimentou-se 2 casas à esquerda e 1 à frente\n");
        break;
    case 8:
        for (int i = 1; i <= 1; i++)
        {
            int j = 1;
            while (j <= 2)
            {
                printf("Esquerda\n");
                j++;
            }
            printf("Para Trás\n");
        }
        printf("\no Cavalo movimentou-se 2 casas à esquerda e 1 para trás\n");
        break;

    default:
        printf("Opção Inválida!\n");
        break;
    }
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
    //------------------------------------------------------BISPO------------------------------------------------------
    printf("-----------Bispo-----------\n\n");
    printf("Digite a direção que você quer mover o Bispo.\n");
    printf("1. Diagonal Superior Direita\n");
    printf("2. Diagonal Superior Esquerda\n");
    printf("3. Diagonal Inferior Direita\n");
    printf("4. Diagonal Inferior Esquerda\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("\nQuantas casas quer movimentar para à Diagonal Superior Direita?: ");
        // não é preciso chamar a função "Bispo", a função "quantidadeCasasBispo" já está trazendo o retorno pedido pelo desafio//
        QuantidadeCasasBispo(opcao, casas);
        break;

    case 2:
        printf("\nQuantas casas quer movimentar para à Diagonal Superior Esquerda?: ");
        // não é preciso chamar a função "Bispo", a função "quantidadeCasasBispo" já está trazendo o retorno pedido pelo desafio//
        QuantidadeCasasBispo(opcao, casas);
        break;

    case 3:
        printf("\nQuantas casas quer movimentar para à Diagonal Inferior Direita?: ");
        // não é preciso chamar a função "Bispo", a função "quantidadeCasasBispo" já está trazendo o retorno pedido pelo desafio//
        QuantidadeCasasBispo(opcao, casas);
        break;

    case 4:
        printf("\nQuantas casas quer movimentar para à Diagonal Inferior Esquerda?: ");
        // não é preciso chamar a função "Bispo", a função "quantidadeCasasBispo" já está trazendo o retorno pedido pelo desafio//
        QuantidadeCasasBispo(opcao, casas);
        break;

    default:
        printf("Opção Inválida!!!\n");
        break;
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Chamada da função da peça Torre
    //------------------------------------------------------TORRE------------------------------------------------------
    printf("\n\n-----------Torre-----------\n\n");
    printf("Digite a direção que você quer mover a Torre.\n");
    printf("1. À frente\n");
    printf("2. Atrás\n");
    printf("3. Direita\n");
    printf("4. Esquerda\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Quantas casas quer movimentar para À frente?: ");
        // não é preciso chamar a função "Torre", a função "quantidadeCasasTorre" já está trazendo o retorno pedido pelo desafio//
        quantidadeCasasTorre(casas, opcao);
        break;
    case 2:
        printf("Quantas casas quer movimentar para Trás?: ");
        // não é preciso chamar a função "Torre", a função "quantidadeCasasTorre" já está trazendo o retorno pedido pelo desafio//
        quantidadeCasasTorre(casas, opcao);
        break;
    case 3:
        printf("Quantas casas quer movimentar para Direita?: ");
        // não é preciso chamar a função "Torre", a função "quantidadeCasasTorre" já está trazendo o retorno pedido pelo desafio//
        quantidadeCasasTorre(casas, opcao);
        break;
    case 4:
        printf("Quantas casas quer movimentar para Esquerda?: ");
        // não é preciso chamar a função "Torre", a função "quantidadeCasasTorre" já está trazendo o retorno pedido pelo desafio//
        quantidadeCasasTorre(casas, opcao);
        break;
    default:
        printf("Opção Inválida!!!!\n");
        break;
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Chamada da função da peça Rainha
    //------------------------------------------------------RAINHA------------------------------------------------------
    printf("\n\n**********Rainha**********\n\n");
    printf("Digite a direção que você quer mover a Rainha.\n");
    printf("1. À frente\n");
    printf("2. Atrás\n");
    printf("3. Direita\n");
    printf("4. Esquerda\n");
    printf("5. Diagonal Superior Direita\n");
    printf("6. Diagonal Superior Esquerda\n");
    printf("7. Diagonal Inferior Direita\n");
    printf("8. Diagonal Inferior Esquerda\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("\nQuantas casas quer movimentar para À frente?: ");
        // não é preciso chamar a função "Rainha",ela está sendo chamada implícitamente pela função "quantidadeCasasTorre" trazendo o retorno pedido pelo desafio//
        QuantidadeCasasRainha(opcao, &casas);
        break;
    case 2:
        printf("\nQuantas casas quer movimentar para Trás?: ");
        // não é preciso chamar a função "Rainha",ela está sendo chamada implícitamente pela função "quantidadeCasasTorre" trazendo o retorno pedido pelo desafio//
        QuantidadeCasasRainha(opcao, &casas);
        break;
    case 3:
        printf("\nQuantas casas quer movimentar para Direita?: ");
         // não é preciso chamar a função "Rainha",ela está sendo chamada implícitamente pela função "quantidadeCasasTorre" trazendo o retorno pedido pelo desafio//
        QuantidadeCasasRainha(opcao, &casas);
        break;
    case 4:
        printf("\nQuantas casas quer movimentar para Esquerda?: ");
         // não é preciso chamar a função "Rainha",ela está sendo chamada implícitamente pela função "quantidadeCasasTorre" trazendo o retorno pedido pelo desafio//
        QuantidadeCasasRainha(opcao, &casas);
        break;
    case 5:
        printf("\nQuantas casas quer movimentar para à Diagonal Superior Direita?: ");
         // não é preciso chamar a função "Rainha",ela está sendo chamada implícitamente pela função "quantidadeCasasTorre" trazendo o retorno pedido pelo desafio//
        QuantidadeCasasRainha(opcao, &casas);
        break;
    case 6:
        printf("\nQuantas casas quer movimentar para à Diagonal Superior Esquerda?: ");
         // não é preciso chamar a função "Rainha",ela está sendo chamada implícitamente pela função "quantidadeCasasTorre" trazendo o retorno pedido pelo desafio//
        QuantidadeCasasRainha(opcao, &casas);
        break;
    case 7:
        printf("\nQuantas casas quer movimentar para à Diagonal Inferior Direita?: ");
         // não é preciso chamar a função "Rainha",ela está sendo chamada implícitamente pela função "quantidadeCasasTorre" trazendo o retorno pedido pelo desafio//
        QuantidadeCasasRainha(opcao, &casas);
        break;
    case 8:
        printf("\nQuantas casas quer movimentar para à Diagonal Inferior Esquerda?: ");
         // não é preciso chamar a função "Rainha",ela está sendo chamada implícitamente pela função "quantidadeCasasTorre" trazendo o retorno pedido pelo desafio//
        QuantidadeCasasRainha(opcao, &casas);
        break;

    default:
        printf("Opção Inválida!\n");
        break;
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Chamada da função da peça Cavalo
    //------------------------------------------------------CAVALO------------------------------------------------------
    Cavalo(opcao);

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
