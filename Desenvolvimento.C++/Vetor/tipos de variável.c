#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

 void main(){
  int a;
  float b;
  char c;
  bool d;
  //passando valores
  a=5;
  b= 2.3;
  c= 'a';
  d= true; // true = 1, false= 0
  // escrevendo na tela
   printf("n\ O valor de a = %d ", a);
   printf("\n o valor de b = %.2f", b);
   printf("\nO valor de c = %c\n",c);
  printf("\n O valor de d = %d", d);
   //lendo valores
   scanf("\n%d", &a);
   scanf("\n%f", &b);
   scanf(" \n%c", &c);



   // escrevendo natela
   printf("\n O valor de a = %d", a);
   printf("\n O valor de b =%.2f ", b);
   printf("\n O valor de c =%c", c);

   system("pause");


 }
