#include <stdio.h>

                                     //movi = movimento;
void torre(int moviTorre) {          //Criação da variável torre;
    if (moviTorre > 0) {             //Enquanto o moviTorre for maior ou igual a 0, será decrescido -1;
        torre(moviTorre - 1);   
        printf("Direita\n");         //Imprime a direção do movimento;
    }
}

void bispo(int moviBispo) {           //Criação da variável bispo;
    if (moviBispo > 0) {              //Enquanto o moviBispo for maior ou igual a 0, será decrescido -1;
        bispo(moviBispo - 1);
        printf("Direita\n"); }        //Imprime a direção do movimento;
        printf("Cima\n");             //Imprime a direção do movimento;
}

void rainha(int moviRainha) {         //Criação da variável rainha;
    if (moviRainha > 0) {             //Enquanto o moviRainha for maior ou igual a 0, será decrescido -1;
        rainha(moviRainha - 1);
        printf("Esquerda\n");         //Imprime a direção do movimento;
    }
}

void cavalo(int moviCavalo) {   //Criação da variável torre;
        for (moviCavalo = 0; moviCavalo < 2; moviCavalo++) { //Cada incremento moverá duas casas para cima e uma para baixo;
        printf("Cima\n");}      //Imprime a direção do movimento;
        printf("Direita\n");    //Imprime a direção do movimento;
    }

int main() {

    printf("Torre se moveu para:\n");  //Identificar o movimento da torre;
    torre(5);                          //Indica a quantidade de casas que a torre deve se mover em linha reta;
    printf("\n");                      //Espaçamento de uma linha;

    printf("Bispo se moveu para:\n");  //Identificar o movimento do bispo; 
    bispo(4);                          //Indica a quantidade de casas que o bispo deve se mover diagonalmente;
    printf("\n");                      //Espaçamento de uma linha;

    printf("Rainha se moveu para:\n"); //Identificar o movimento da rainha;
    rainha(8);                         //Indica a quantidade de casas que a rainha deve se mover em linha reta;
    printf("\n");                      //Espaçamento de uma linha;

    printf("Cavalo se moveu para:\n"); //Identificar o movimento do cavalo;
    cavalo(0);                         //Indica a quantidade de vezes que o cavalo deve se mover em "L";
    printf("\n");                      //Espaçamento de uma linha;
    
    

    return 0;
}