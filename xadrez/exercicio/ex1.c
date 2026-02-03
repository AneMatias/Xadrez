#include <stdio.h>

void recursiva(int numero){
    if (numero>0){
        printf("%d\n", numero);

        recursiva(numero-1);
    }
}

int main(){
    int qtd= 10;

    recursiva(qtd);

    printf("\n===CONTAGEM REGRESSIVA===\n");
    recursiva(qtd);
    


    return 0;
}