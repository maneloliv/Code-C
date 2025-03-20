#include <stdio.h>
int main(){
    float alt,ideal;
    char sex;

    printf("Digite a Altura: ");
    scanf("%f", &alt);
    fflush(stdin);
    printf("Informe o Sexo (m/f): ");
    scanf("%c", &sex);
    if(sex!='f' && sex!='m'){ 
        printf("sexo invalido!");
    }else{
        if(sex=='f'){
            ideal= 62.1 * alt - 44.7;
            printf("O peso ideal e: %0.2f", ideal);
        }else{
            ideal = 72.7 * alt - 58.0;
            printf("O peso ideal e: %0.2f", ideal);
        }
    }
    return 0;
}