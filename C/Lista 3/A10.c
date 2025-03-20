#include <stdio.h>
int main()
{
int cont=0;
char texto[100], letra;
 FILE* f;
 f= fopen("arquivo.txt","w+");
printf("Preencha o arquivo\n");
gets(texto);
fputs(texto,f);
printf("Qual letra voce deseja contar\n");
scanf("%c", &letra);
for(int j=0;j<100;j++){
    if(texto[j] == letra){
        cont++;
    }
}   
printf("O numero de '%c' eh: %d",letra, cont);
fclose(f);
return 0;
}