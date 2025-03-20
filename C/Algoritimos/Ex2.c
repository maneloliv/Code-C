#include<stdio.h>
#define TAMX 100

typedef struct sContatos{
    char NomeContato[20];
    char NumCllr[12];
}Contatos;
typedef struct sListaCont{
    Contatos conts;
    char listac[TAMX];
    int n;
}Lista;
void iniciar_lista(Lista *L){
  L->n=-1;
}
int lista_cheia(Lista *L){
    if (L->n+1>TAMX){
        printf("\nLISTA CHEIA!\n");
        return 1;
    }else{  
        return 0;
    }
}   
void insere_fim(Lista *L, Contatos *Cont){
    if (lista_cheia(L)==1){
        printf("Nao foi possivel Inserir!\n\n");
    }else{
        L->n++;
        printf("Nome: ");
        scanf("%s", Cont[L->n].NomeContato);
        printf("Numero: ");
        scanf("%s",Cont[L->n].NumCllr);
        L->listac[L->n]=Cont[L->n].NomeContato;
    }
}
void imprimir_lista(Lista *L, Contatos *Cont){
    for (int i=0;i<=L->n;i++){
        printf("(%d)Nome: %s\nNumero: %s\n", i+1, Cont[i].NomeContato, Cont[i].NumCllr);
    }
    printf("\n");
}
int main(){
    Lista *L = (Lista*)malloc(sizeof(Lista));
    Contatos *Cont = (Contatos*)malloc(sizeof(Contatos));
int slc=-1;
while(slc!=0){
    printf("Escolha uma das opcoes abaixo: \n(1)Iniciar Lista\n(2)Inserir Elemento no Final da Lista\n(3)Imprimir a Lista\n");
    scanf("%d", &slc);
    switch(slc){
        case 1:
        iniciar_lista(&L);
        break;
    case 2:
        insere_fim(&L, &Cont);
        break;
    case 3:
        imprimir_lista(&L, &Cont);
        break;
    default:
        printf("Opcao Invalida!");
        exit(1);
    }
}
free(L);
free(Cont);
return 0;
}
