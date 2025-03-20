#include <stdio.h>
#include <stdlib.h>
typedef struct sNO
{
    char item;
    struct sNO *dir;
    struct sNO *esq;
} NO;

NO *alocarNo()
{
    NO *novo = (NO *)malloc(sizeof(NO));
    return novo;
}
void desalocarNO(NO *q)
{
    free(q);
}
int listavazia(NO *lista)
{
    if (lista != NULL)
    {
        return 0;
    }
    else
    {
        printf("Lista Vazia!");
        return 1;
    }
}
void inserir_inicio(NO **lista, char elem)
{
    NO *novo;
    novo = alocarNo();
    if (novo != NULL)
    {
        novo->item = elem;
        novo->esq = NULL;
        novo->dir = *lista;

        if (!listavazia(*lista))
            (*lista)->esq = novo;
            *lista = novo;
    }
}
NO *pesquisar(NO *lista, int elem)
{
    NO *aux;
    aux = lista;
    if (!listavazia(lista))
    {
        while (aux != NULL)
        {
            if (aux->item == elem)
                return aux;
            aux = aux->dir;
        }
    }
    return NULL;
}
void ExibirElem(NO *lista)
{
    if (listavazia(lista) == 1)
    {
        return;
    }
    NO *aux = lista;
    while (aux != NULL)
    {
        printf("%c ", aux->item);
        aux = aux->dir;
    }
}
void RemoverElem(NO **lista, char elem)
{
    if (listavazia == 1)
    {
        return;
    }
    NO *aux = *lista;
    if (pesquisar(aux, elem) != NULL)
    {
        if (aux->esq == NULL)
        {
            *lista = aux->dir;
            (*lista)->esq = NULL;
            desalocarNO(aux);
        }
        else
        {
            if (aux->dir == NULL)
            {
                aux->esq->dir = NULL;
                desalocarNO(aux);
            }
            else
            {
                aux->esq->dir = aux->dir;
                aux->dir->esq = aux->esq;
                desalocarNO(aux);
            }
        }
    }
    else
    {
        printf("Elemento nao Existe!");
        return;
    }
}
void inverter(NO **lista)
{
}

int main()
{
    NO *ptrl = NULL;
    int slc = -1;
    int num;
    char elem;
    printf("\nMenu\n1)INSERIR NO INICIO\n2)REMOVER ELEMENTO\n3) IMPRIMIR LISTA\n0) SAIR\n");
    while (slc != 0)
    {
        printf("\n-->");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            printf("Digite um item: ");
            scanf(" %c", &elem);
            inserir_inicio(&ptrl, elem);
            break;

        case 2:
            printf("Digite um item para pesquisar: ");
            scanf(" %c", &elem);
            RemoverElem(&ptrl, elem);
            break;
        case 3:
            ExibirElem(ptrl);
            break;
        case 0:
            printf("Saindo do programa.\n");
            return 0;

        default:
            printf("Opcao invalida. Tente novamente.\n");
        }
    }
    return 0;
}
