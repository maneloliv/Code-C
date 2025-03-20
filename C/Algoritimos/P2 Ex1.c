#include <stdio.h>
#include <stdlib.h>

typedef struct sNO {
    char item;
    struct sNO* prox;
} NO;

NO* iniciar(NO* lista) {
    lista = NULL;
    return lista;
}

NO* alocarNO() {
    NO* novo = (NO*)malloc(sizeof(NO));
    if (novo == NULL) {
        printf("Erro na alocacao de memoria!");
        return NULL;
    }
    return novo;
}
void desalocarLista(NO* lista) {
    NO* aux;
    if (verificar_Vazia(lista) == 0) {
        return;
    }
    while (lista != NULL) {
        aux = lista;
        lista = lista->prox;
        free(aux); 
    }
}

int verificar_Vazia(NO* lista) {
    if (lista == NULL) {
        printf("Lista Vazia\n");
        return 0;
    } else {
        printf("Nao esta Vazia!\n");
        return 1;
    }
}

void printVogais(NO* lista) {
    if (verificar_Vazia(lista) == 0) {
        return;
    }
    NO* aux = lista;
    printf("Vogais: ");
    while (aux != NULL){    
        switch (aux -> item){// sim fiz switch pq sou dodoi ;-;
        case 'A':
            printf("%c ",aux -> item);
            break;
        case 'E':
            printf("%c ",aux -> item);
            break;  
        case 'I':
            printf("%c ",aux -> item);
            break;
        case 'O':
            printf("%c ",aux -> item);
            break;
        case 'U':
            printf("%c ",aux -> item);
            break;
        case 'a':
            printf("%c ",aux -> item);
            break;
        case 'e':
            printf("%c ",aux -> item);
            break;
        case 'i':
            printf("%c ",aux -> item);
            break;
        case 'o':
            printf("%c ",aux -> item);
            break;
        case 'u':
            printf("%c ",aux -> item);  
            break;
        }
        aux = aux->prox;
    }
    
}

NO* inserirInicio(NO** lista, char elem) {
    NO* novo;
    novo = alocarNO();
    
    if (novo != NULL) {
        novo->item = elem;
        novo->prox = *lista;
        *lista = novo;
        return *lista;
    } else {
        printf("Erro na alocacao!\n");
        return *lista;
    }
}

int main() {
    NO* ptrLista = NULL;
    int num, slc = -1;
    char elem;
    printf("\nMenu\n1) INICIAR LISTA\n2) VERIFICAR LISTA\n3) INSERIR NO INICIO\n4) APAGAR LISTA\n5) IMPRIMIR VOGAIS\n0) SAIR\n");
    while (slc != 0) {
        printf("\n-->");
        scanf("%d", &num);
        switch (num) {
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
                desalocarLista(ptrLista);
                break;
            case 5:
                printVogais(ptrLista);
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