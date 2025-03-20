#include<stdio.h>
#define TAMX 5
typedef struct sPilha{
    char itens[TAMX];
    int topo;
}Pilha; 

void inic(Pilha *ptrP){
    ptrP -> topo = -1;
}

int vazia(Pilha *ptrP){
    if(ptrP -> topo == -1)
        return 1;
        return 0;
}

int cheia(Pilha *ptrP){
    if(ptrP-> topo == TAMX - 1){
        return 1;
    }
    return 0;
}

void empilhar (Pilha *ptrP, int elem){
    if(cheia(ptrP) == 1){
        printf("cheia!\n");
        return;
    }else{
        (ptrP -> topo)++;
        ptrP -> itens[ptrP->topo] = elem;
    }
}

int desempilhar (Pilha *ptrP){
int q;
    if(vazia(ptrP) == 1){
         printf("ERRO: pilha vazia. \n");
        return -1;
    }else{
        q = ptrP -> itens[ptrP -> topo];
        (ptrP -> topo)--;
        return q;
    }
}

int retornarTopo(Pilha *ptrP){
    if(vazia(ptrP) == 1){
        printf("ERRO: pilha vazia. \n");
        return -1;
    }
    printf("%d", ptrP->topo);
}




NO* remover(NO *raiz, int elem)(
if(raiz == NULL)
return NULL;
else if(raiz->info > elem)
raiz->esq = remover (raiz->esq, elem);
else if(raiz->info < elem)
raiz->dir = remover (raiz->dir, elem);
else(/"Achou o elemento")
if(raiz->esq == NULL && raiz->dir == NULL) (
desalocarNo(raiz);
raiz = NULL;
,
else if(raiz->esq == NULL) ( /sótem filho à direita*/
NO* temp = raiz;
raiz = raiz->dir;
desalocarNO (temp) ;
}
NO* remover (NO *raiz, int elem)t

else if(raiz->dir == NULL) (/'só tem filho à esquerda”
NO* temp = raiz;
raiz = raiz->esq;
desalocarNO (temp) ;

)

else /*o elemento possui os dois filhos*/
NO* Pai = raiz;
NO* F = raiz->esq;
Wwhile(F->dir != NULL) (

Pai = F;
F = F->dir;

)
raiz->info = F->info; /"troca dados"/
F->info = elem;
raiz->esq = remover (raiz->esq, elem);

)

)
return raiz;
)








int main(){
Pilha *ptrP;
int slc=-1;
while(slc!=0){
    printf("Escolha uma das opcoes abaixo: \n(1)Iniciar Lista\n(2)Inserir Elemento no Final da Lista\n(3)Imprimir a Lista\n");
    scanf("%d", &slc);
    switch(slc){
        case 1:
        iniciar_lista(&ptrP);
        break;
    case 2:
        insere_fim(&ptrP, &ptrP);
        break;
    case 3:
        imprimir_lista(&ptrP, &ptrP);
        break;
    default:
        printf("Opcao Invalida!");
        exit(1);
    }
}
free(ptrP);
return 0;
}