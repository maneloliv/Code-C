#include <stdio.h>

typedef struct sNO
{
    char item;
    struct sNO *prox;
} NO;

NO* iniciar(NO *lista)
{
    lista = NULL;
    return lista;
}
void desalocarNO(NO *q)
{
    free(q);
}

NO* alocarNO()
{
    NO *novo = (NO *)malloc(sizeof(NO));
    if (novo == NULL)
    {
        printf("Erro na alocacao de memoria!");
        return NULL;
    }
    return novo;
}

int verificar_Vazia(NO **lista)
{
    if (lista == NULL)
    {
        printf("Lista Vazia\n");
        return 0;
    }
    else
    {
        printf("Nao esta Vazia!\n");
        return 1;
    }
}

void ExibirElem(NO *lista)
{
    if (verificar_Vazia(lista) == 0)
    {
        return;
    }
    NO *aux = lista;
    while (aux != NULL)
    {
        printf("%c ", aux->item);
        aux = aux->prox;
    }
}

void inserirInicio(NO **lista, char elem)
{
    NO *novo;
    novo = alocarNO();

    if (novo != NULL)
    {
        novo->item = elem;
        novo->prox = *lista;
        *lista = novo;
    }
    else
    {
        printf("Erro na alocacao!\n");
    }
}
void RemoverInicio(NO **lista)
{
    if (verificar_Vazia(*lista) == 0)
    {
        return;
    }
    NO *q = *lista;
    *lista = q->prox;
    desalocarNO(q);
}

int main()
{
    NO *ptrLista = NULL;
    int num, slc = -1;
    char elem;
    printf("\nMenu\n1) INICIAR LISTA\n2) VERIFICAR LISTA\n3) INSERIR NO INICIO\n4) APAGAR INICIO0\n5) IMPRIMIR LISTA\n0) SAIR\n");
    while (slc != 0)
    {
        printf("\n-->");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            ptrLista = iniciar(ptrLista);
            break;

        case 2:
            verificar_Vazia(ptrLista);
            break;

        case 3:
            printf("Digite o que quer inserir: ");
            scanf(" %c", &elem);
            inserirInicio(&ptrLista, elem);
            break;
        case 4:
            RemoverInicio(&ptrLista);
            break;
        case 5:
            ExibirElem(ptrLista);
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