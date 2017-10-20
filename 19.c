/*  Escreva um algoritmo que leia um numero inteiro entre 100 e 999 e imprima na saıda cada um dos algarismos que comp˜oem o numero .*/
#include <stdio.h>

int main() {
int n, aux;
printf("Informe um número: ");
scanf("%d", &n);
while ((n < 100) || (n > 999)) {
printf("Erro. Precisa estar entre 100 e 999. Reinforme o número: ");
scanf("%d", &n);
}
aux = n ;
while (aux > 0) {
printf("\ %d", aux%10);
aux /= 10;
}
printf("\n");
return 0;
}
