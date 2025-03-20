#include <stdio.h>
int main()
{
    char nome[50]; 
    printf("digite um nome\n");
    gets(nome);
    if(nome[0]== 'a' || nome[0] == 'A'){
        puts(nome);
    }
return 0;
}
