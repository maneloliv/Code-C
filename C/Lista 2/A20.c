#include <stdio.h>
#include <string.h>

void inverterString(char* str) {
    int i = 0;
    int j = strlen(str) - 1;
    
    while (i < j) {
        // Troca os caracteres nas posições i e j
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        
        // Avança para o próximo par de caracteres
        i++;
        j--;
    }
}

int main() {
    char str[100];
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remover o caractere de nova linha (\n) da entrada
    str[strcspn(str, "\n")] = '\0';
    
    // Chamar a função para inverter a string
    inverterString(str);
    
    printf("String invertida: %s\n", str);
    
    return 0;
}
