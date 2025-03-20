#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* f;
    int n;
    char pl[100];
    f = fopen("Planetas.txt", "w+");
    if (f == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    printf("Tamanho do vetor: ");
    scanf("%d", &n);
    fflush(stdin);
    printf("Digite algo: ");
    gets(pl);
    fputs(pl, f);
    rewind(f);
    char ch = fgetc(f);
    while (ch != EOF) {
        printf("%c", ch);
        ch = fgetc(f);
    }
    fclose(f);
    return 0;
}