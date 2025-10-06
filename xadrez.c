#include <stdio.h>

int main(){

    int i = 1;

    printf("***XADREZ DA ESTÁCIO***\n");
    
    //movimentacao bispo (5 casas, diagonal superior direita) utilizando while
    printf("\nMOVIMENTACAO DO BISPO:\n");

    while (i <= 5){
        printf("\nQuantidade: %i\nAção: Cima, direita\n", i);
        i++;
    }

    //movimentacao torre (5 casas, direita) utilizando do-while
    i = 1;
    printf("\nMOVIMENTACAO DA TORRE:\n");
    do{
        printf("\nQuantidade: %i\nAção: Direita\n", i); 
        i++;
    } while (i <= 5);
    
    //movimentacao rainha (8 casas,esquerda) utilizando for
    printf("\nMOVIMENTACAO DA RAINHA\n");
    for (i = 1; i <= 8; i++){
        printf("\nQuantidade: %i\nAção: Esquerda\n", i);
    }

    printf("\nMovimentacao cessada! Programa encerrado.");

    return 0;
}