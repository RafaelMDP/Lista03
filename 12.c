/* Faca um programa que leia um numero inteiro positivo N
e imprima todos os n´umeros naturais de 0 ate N em ordem decrescente */
#include <stdio.h>
int main() {
int n, i;
printf("Informe o valor de n: ");
scanf("%d", &n);
for (i=n; i>=0; i--)
printf("\t%d", i);
return 0;
}
