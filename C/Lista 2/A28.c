#include <stdio.h>

typedef struct Livro {
    char autor[50];
    char titulo[100];
    int numPaginas;
}livro;

void cadastrarLivros(struct Livro biblioteca[], int numLivros) {
    for (int i = 0; i < numLivros; i++) {
        printf("Cadastro do livro %d:\n", i + 1);
        printf("Autor: ");
        scanf("%s", biblioteca[i].autor);
        printf("Título: ");
        scanf("%s", biblioteca[i].titulo);
        printf("Número de páginas: ");
        scanf("%d", &biblioteca[i].numPaginas);
        printf("\n");
    }
}

int main() {
    livro l;
    int numLivros;

    printf("Digite o número de livros a serem cadastrados:");
    scanf("%d", &numLivros);

    if (numLivros > 250) {
        printf("Número de livros excede o limite!\n");
        return 1;
    }

    cadastrarLivros(biblioteca, numLivros);

    printf("Cadastro concluído!\n");

    return 0;
}
