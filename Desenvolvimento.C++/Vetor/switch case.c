#include <stdio.h>
#include <stdlib.h>

void main(){
int a = 5;
char b = 'x';

if(a==5){
    printf("\n Opcao escolhida: 1");
} else if(a==10){
    printf("\n Opcao escolhida: 2");
}else if(a==3){
    printf("\n Opcao escolhida: 3");
}else{
    printf("\n Opcao invalida");
}
//o mesmo codigo de cima, adptado para o switch
switch(a){
   case 1:
       printf("\n Opcao escolhida: 1");
    break;
   case 2:
        printf("\n Opcao escolhida: 2");
     break;
     case 3:
    printf("\n Opcao escolhida: 1");
     break;
     default:
        printf("\n Opcao invalida");
        break;

}
    // switch com char
    switch(b){
   case 'x':
       printf("\nA letra eh x");
       break;
   default:
    printf("opcao invalida");
    break;


}


}
