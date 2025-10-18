#include <stdio.h>

int main(){

    int i = 1, j = 1, k = 1;

    printf("***XADREZ DA ESTÁCIO***\n");
    
    //movimentacao bispo (5 casas, diagonal superior direita) utilizando while
    printf("\nMOVIMENTACAO DO BISPO:\n");

    while (i <= 5){
        printf("\nQuantidade: %i\nMovimentação: Cima, Direita\n", i);
        i++;
    }

    //movimentacao torre (5 casas, direita) utilizando do-while
    i = 1;
    printf("\nMOVIMENTACAO DA TORRE:\n");
    do{
        printf("\nQuantidade: %i\nMovimentação: Direita\n", i); 
        i++;
    } while (i <= 5);
    
    //movimentacao rainha (8 casas,esquerda) utilizando for
    printf("\nMOVIMENTACAO DA RAINHA\n");
    for (i = 1; i <= 8; i++){
        printf("\nQuantidade: %i\nMovimentação: Esquerda\n", i);
    }

    printf("\nMOVIMENTACAO DO CAVALO\n");
    for (i = 1; i <= 2; i++){
        while(j <= 2){
                printf("\nQuantidade: %i\nMovimentação: Baixo\n", j);
                j++;
            }
        }
        
    do{
        printf("\nQuantidade: %i\nMovimentação: Esquerda\n", k);
        k++;
    } while (k <= 1);

    printf("\nMovimentacao cessada! Programa encerrado.");

    return 0;
}