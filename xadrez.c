#include <stdio.h>

//criacao da funcao de movimentacao da torre (5 casas, direita) 
void moverTorre(int torre){
    if(torre > 0){
        printf("Direita\n");
        moverTorre (torre - 1);
    }
}

//criacao da funcao de movimentacao do bispo (5 casas, diagonal superior direita) 
void moverBispo(int bispoVer, int bispoHor){
    for (int i = 1; i <= bispoVer; i++) {        //movimento vertical
        printf("Cima\n");
        for (int j = 1; j <= bispoHor; j++) {    //movimento horizontal
            if (j == i) {                          
                printf("Direita\n\n");
                break;                             
            }
        }
    }
}

//criacao da funcao de movimentacao da rainha (8 casas, esquerda) 
void moverRainha(int rainha){
    if(rainha > 0){
        printf("Esquerda\n");
        moverRainha (rainha - 1);
    }
}

int main(){

    int i = 1, j = 1;

    printf("***XADREZ DA ESTÁCIO***\n");
    
    //movimentacao recursiva do bispo
    printf("\nMOVIMENTACAO DO BISPO:\n\n");
    moverBispo(5, 5);

    //movimentacao recursiva da torre
    printf("\nMOVIMENTACAO DA TORRE:\n\n");
    moverTorre(5);
    
    //movimentacao recursiva da rainha
    printf("\nMOVIMENTACAO DA RAINHA\n\n");
    moverRainha(8);

    //movimentacao do cavalo (2 casas, cima e 1 casa, direita) utilizando for e while
    printf("\nMOVIMENTACAO DO CAVALO\n\n");
    
    int moveL = 3;
    for (i = 1; i <= moveL; i++) {

        //movimento vertical
        j = 0;
        while (j < 2) {
            printf("Cima\n");
            j++;
            if (j >= 2) break;  // garante que não passe de 2 casas
        }

        // movimento horizontal
        j = 0;
        while (j < 1) {
            printf("Direita\n\n");
            j++;
            if (j >= 1) break;  // garante que não passe de 1 casa
        }
    }
    
    printf("\nMovimentacao cessada! Programa encerrado.");

    return 0;
}