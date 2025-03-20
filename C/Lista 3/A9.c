#include <stdio.h>
int main()
{
int i=0;
char texto[1000];
 FILE* f;
 f= fopen("arq.txt","w+");
while(texto[i-1]!='0'){
printf("Digite um caractere\n0 para sair\n");
scanf("%c",&texto[i]);
fflush(stdin);
fprintf(f,"%c", texto[i]);
i++;
}
rewind(f);
    char ch = fgetc(f);
    while (ch != EOF) {
        printf("%c", ch);
        ch = fgetc(f);
    }
fclose(f); 
return 0;
}