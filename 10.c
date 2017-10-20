/*Faca um programa que calcule e mostre
a soma dos 50 primeiros numeros pares. */
#include <stdio.h>
int main() {
int i, n=2, soma=0;
for (i=1; i<=50; i++) {
soma += n;
n += 2;
}
printf("Soma dos primeiros 50 pares: %d\n", soma);
return 0;
}
