#include<stdio.h>
#define TAMX 20

typedef struct sLista{
    char lista[TAMX];
    int n;
}lista; 


void iniciar_lista(lista *L){
    L->n=-1;
}

int lista_cheia(lista *L){
    if (L -> n+1>=TAMX){
        printf("Lista cheia!\nERRO!");
        return 1;
    }else{
        printf("Lista vazia!\n");
        return 0;
    }
}
void lista_insereFim(char adc, lista *L){
    if (lista_cheia(L)==0){
    L->n++;
    L->lista[L->n]=adc;
}
}
void imprimir_lista(lista *L){
    for(int i=0;i<= L->n;i++){
        printf("%c ", L->lista[i]);
    }
    printf("\n");
}
int main(){
lista *L = (lista *)malloc(sizeof(lista));
int slc;
char adc;
while(slc!=0){
    printf("Digite um numero para fazer uma ação: \n(1)Iniciar Lista\n(2)Inserir Elemento no Final da Lista\n(3)Imprimir a Lista\n");
    scanf("%d", &slc);
    switch(slc){
        case 1:
        iniciar_lista(&L);
        break;
    case 2:
        printf("Qual o valor que Deseja adicionar? ");
        scanf(" %c", &adc);
        lista_insereFim(adc, &L);
        break;
    case 3:
        imprimir_lista(&L);
        break;
    }
}
free(L);
return 0;
}