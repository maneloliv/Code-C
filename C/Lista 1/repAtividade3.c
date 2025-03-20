#include <stdio.h>
int main(){
    float ze=1.1, chico=1.5;
    int anos=0, i;

    for(i=0; ze<=chico; i++){
        chico=chico+0.2;
        ze=ze+0.3;
        anos++;
    }

    printf("Os anos Necessarios sao: %d", anos);
    return 0;
}