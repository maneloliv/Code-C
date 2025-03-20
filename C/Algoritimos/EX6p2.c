#include <stdio.h>
#include <stdlib.h>

typedef struct sNO
{
    char dado;
    struct sNO *esq;
    struct sNO *dir;
} NO;

NO *alocarNo()
{
    return (NO *)malloc(sizeof(NO));
}

NO *inserir(NO *raiz, char valor)
{
    NO *novo;

    novo = alocarNo();

    if (novo == NULL)
    {
        printf("\nErro! Memória não alocada");
        return NULL;
    }

    novo->dado = valor;
    novo->esq = NULL;
    novo->dir = NULL;

    if (raiz == NULL)
    {
        return novo;
    }

    if (valor < raiz->dado)
    {
        raiz->esq = inserir(raiz->esq, valor);
    }
    else if (valor > raiz->dado)
    {
        raiz->dir = inserir(raiz->dir, valor);
    }

    return raiz;
}

NO *encontrarMin(NO *no)
{
    while (no->esq != NULL)
    {
        no = no->esq;
    }
    return no;
}

NO *removerNO(NO *raiz, char valor)
{
    if (raiz == NULL)
    {
        return raiz;
    }

    if (valor < raiz->dado)
    {
        raiz->esq = removerNO(raiz->esq, valor);
    }
    else if (valor > raiz->dado)
    {
        raiz->dir = removerNO(raiz->dir, valor);
    }
    else
    {
        if (raiz->esq == NULL)
        {
            NO *temp = raiz->dir;
            free(raiz);
            return temp;
        }
        else if (raiz->dir == NULL)
        {
            NO *temp = raiz->esq;
            free(raiz);
            return temp;
        }

        NO *temp = encontrarMin(raiz->dir);
        raiz->dado = temp->dado;
        raiz->dir = removerNO(raiz->dir, temp->dado);
    }

    return raiz;
}

void preOrdem(NO *raiz)
{
    if (raiz != NULL)
    {
        printf("%c ", raiz->dado);
        preOrdem(raiz->esq);
        preOrdem(raiz->dir);
    }
}

int contarNOs(NO *raiz)
{
    if (raiz == NULL)
    {
        return 0;
    }
    return 1 + contarNOs(raiz->esq) + contarNOs(raiz->dir);
}

int main()
{
    NO *raiz = NULL;
    char elemento;
    int escolha;

    do
    {
        printf("\nMenu de Opcoes:\n");

        printf("1- Inserir um novo elemento\n");
        printf("2- Remover um elemento\n");
        printf("3- Exibir todos os elementos (pre-ordem)\n");
        printf("4- Calcular a quantidade de elementos\n");
        printf("0- Sair\n");
        printf("Escolha a opcao: ");
        scanf(" %d", &escolha);

        switch (escolha)
        {
        case 1:
            printf("Digite o caractere a ser inserido: ");
            scanf(" %c", &elemento);
            raiz = inserir(raiz, elemento);
            break;
        case 2:
            printf("Digite o caractere a ser removido: ");
            scanf(" %c", &elemento);
            raiz = removerNO(raiz, elemento);
            break;
        case 3:
            if (raiz != NULL)
            {
                printf("Elementos (pre-ordem): ");
                preOrdem(raiz);
                printf("\n");
            }
            else
            {
                printf("A arvore esta vazia.\n");
            }
            break;
        case 4:
            printf("Quantidade de elementos na arvore: %d\n", contarNOs(raiz));
            break;
        case 0:
            printf("Saindo do programa. Obrigado!\n");
            break;
        default:
            printf("Opcao invalida. Tente novamente.\n");
        }
    } while (escolha != 0);

    return 0;
}