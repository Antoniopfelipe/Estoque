#include <stdio.h>
#include <stdlib.h>
#define TAM 3


void main(){
int vetor[3],cont;
//passando valores para vetores
vetor[0]=5;
vetor[1]=10;
vetor[2]=15;

printf("\n posicao 0: %d", vetor[0]);
printf("\n posicao 1: %d", vetor[1]);
printf("\n posicao 2: %d", vetor[2]);
//laço de teptcao

for (cont=0; cont<3;cont++){
printf("\n posicao %d: %d",cont, vetor[cont]);
}





}
