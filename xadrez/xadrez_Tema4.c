#include <stdio.h>

int main(){

    int torre = 5;
    int bispo = 5;
    int rainha = 8;

    // TORRE (USANDO FOR)
    printf("=== TORRE ===\n");
    for(int i=1; i<= torre; i++) {
        printf("Movimento %d -> Direita\n",i);
    }


    // BISPO (USANDO WHILE)
    printf("\n=== BISPO ===\n");
    int j=1;
    while (j<= bispo){
        printf("Movimento %d -> Cima, Direita\n", j);
        j++;
    }


    // RAINHA (USANDO DO WHILE)
    printf("\n=== RAINHA ===\n");
    int k=1;
    do{
        printf("Movimento %d -> Esquerda\n", k);
        k++;
    } while (k <= rainha);

    // CAVALO (USANDO LOOPS ANINHADOS)
    printf("\n=== CAVALO ===\n");
    int baixo=2;
    int esquerda=1;

    // LOOP EXTERNO FOR 
    for (int i=1; i<=baixo; i++){
    printf("Movimento %d -> Baixo\n", i);

        // LOOP INTERNO WHILE 
        if (i== baixo){
            int l=1;
            while (l<= esquerda){
                printf("Movimento %d -> Esquerda\n", l+2);
                l++;
                
            }
        } 

    }

    return 0;
}