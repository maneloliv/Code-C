#include <stdio.h>
#include <stdlib.h>

typedef struct sAlunoAcad
{
    char nome[30];
    float peso;
    int idade;
} AlunoAcad;

typedef struct sNo
{
    AlunoAcad info;
    struct sNo *esq;
    struct sNo *dir;
} NO;

void inicializar(NO **raiz)
{
    *raiz = NULL;
}

NO *alocarNo()
{
    return (NO *)malloc(sizeof(NO));
}

void inserir(NO **raiz, AlunoAcad elem)
{
    NO *aux = *raiz;
    NO *aux2 = NULL;
    NO *novo;

    novo = alocarNo();

    if (novo == NULL)
    {
        printf("\nErro! Memória não alocada");
        return;
    }

    novo->info = elem;
    novo->esq = NULL;
    novo->dir = NULL;

    while (aux != NULL)
    {
        aux2 = aux;
        if (elem.peso < aux->info.peso)
            aux = aux->esq;
        else
            aux = aux->dir;
    }

    if (aux2 == NULL)
        *raiz = novo;
    else
    {
        if (elem.peso < aux2->info.peso)
            aux2->esq = novo;
        else
            aux2->dir = novo;
    }
}

void em_ordem(NO *raiz)
{
    if (raiz != NULL)
    {
        em_ordem(raiz->esq);
        printf("\n-----------------------------------\n");
        printf("Nome: %s\n", raiz->info.nome);
        printf("idade: %d\n", raiz->info.idade);
        printf("Peso: %.1f\n", raiz->info.peso);
        printf("\n");
        
        em_ordem(raiz->dir);
    }
}

int main()
{
    AlunoAcad *aluno = (AlunoAcad *)malloc(sizeof(AlunoAcad));
    NO *raiz = NULL;
    int x = -1;

    while (x != 0)
    {
        printf(" 1- Inserir Pelo Peso\n 2- Exibir em ordem Crescente por Peso\n 0- Sair\n--> ");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            printf("Digite o Nome: ");
            scanf("%s", &(aluno->nome)); 
            printf("Digite o Idade: ");
            scanf("%d", &(aluno->idade)); 
            printf("Digite o PESO: ");
            scanf("%f", &(aluno->peso)); 
            
            inserir(&raiz, *aluno);      
            break;
        case 2:
            em_ordem(raiz);
            break;
        default:
            printf("Opcao Invalida!");
            exit(1);
        }
    }
    free(aluno);
    return 0;
}
