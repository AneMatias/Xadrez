#include <stdio.h>

// FUNÇÃO RECURSIVA - TORRE
void torre_recursiva(int casas){
    if (casas==0)return;
    printf("Direita\n");
    torre_recursiva(casas-1);
}

// RECURSIVA - BISPO
void bispo_recursiva(int casas){
    if (casas==0)return;
    printf("Cima, Direita\n");
    bispo_recursiva(casas-1);
}

// RECURSIVA - RAINHA
void rainha_recursiva(int casas){
    if (casas==0) return;
    printf("Esquerda\n");
    rainha_recursiva(casas-1);
}

int main(){

    int torre = 5;
    int bispo = 5;
    int rainha = 8;

    // TORRE (RECURSIVA)
    printf("=== TORRE ===\n");
    torre_recursiva(torre);
    

    // BISPO (RECURSIVA + LOOPS ANINHADOS)
    printf("\n=== BISPO ===\n");
    bispo_recursiva(bispo);

    printf("\n- com loop aninhado\n");
    for (int i=1; i<=bispo; i++){
        for (int j=1; j<=1; j++){
            printf("Cima, Direita\n");
        }
    }

    
    // RAINHA (RECURSIVA)
    printf("\n=== RAINHA ===\n");
    rainha_recursiva(rainha);

    
    // CAVALO (LOOPS COMPLEXOS)
    printf("\n=== CAVALO ===\n");

    int cima=2;
    int direita=1;

    // LOOP EXTERNO - FOR 
    for (int i=1; i<=cima; i++){
        printf("Cima\n");

        if(i<cima){
            continue; //volta p for
        }
           
        //loop interno
        int j=1;
        while (j <=direita){
            printf("Direita\n");
            j++;
            break; //sai do while
        }
        break; //sai do for  
                    
    }
            

    return 0;

}
