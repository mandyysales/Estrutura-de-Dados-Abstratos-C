//Estrutura de dados Abstratos - Resposta de exercicios 

#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

typedef struct Coordenada{ //criação do tipo coordenada 
    int x;
    int y;
}Coordenada;

Coordenada * newCoordenada(int x, int y){ //Aqui é feita a inicialização da coordenda; 
    Coordenada * aux = (Coordenada *)malloc(sizeof(Coordenada)); //retorna um ponteiro com endereço de memoria alocação dinamica 
    aux -> x = x; 
    aux -> y = y;
    return aux;
} 
/* Para chamar a função de uma coordenada (ponto)  
Coordenada *ponto1 = newCoordenada(5,7)
Coordenada *ponto2 = newCoordenda(7,9)
ponto1 vai receber um ponteiro para uma coordenda que x=5 e y=9
*/

void printCoord(Coordenada *coordenada ){
    printf("A coordenda é (%d,%d).", coordenada->x,coordenada->y);
}
/*
Para chamar essa função:
printCoord(ponto1)
porque ponto1 é um ponteiro para coordenda 
Retorno: A coordenda é (5,9).
*/

//Calcular a distancia euclidiana entre dois pontos
double euclidianaDist(Coordenada *pont1, Coordenada *pont2){
    double distx = (pont1->x)-(pont2->x);
    double disty = (pont1->y)-(pont2->y);
    double euclidiana = (distx*distx)+(disty*disty);
    return sqrt(euclidiana);
}

//Segmento de reta - É composto por um ponto inicial e um ponto final (duas coordenadas)



