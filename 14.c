/*  Faca um programa que leia um numero inteiro
positivo par N e imprima todos os numeros pares de 0 ate N em ordem crescente*/
#include <stdio.h>
int main() {
int n, i;
printf("Informe n: ");
scanf("%d", &n);
for (i=n; i>=0; i--){
    if(i%2==0)
printf("%d\t", i);
}
return 0;
}
