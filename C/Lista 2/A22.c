#include <stdio.h>

int media (int a, int b, int c){
    float r;
    r= (5*a)+(3*b)+(2*c)/9;
    return (r);
    }
int main(){
    float a, b, c;
    printf("Digite as notas dos 3 alunos: ");
    scanf("%f %f %f", &a, &b, &c);
    printf("o Media Ponderada e: %d", media(a, b, c));
    return 0;
}