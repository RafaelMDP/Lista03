/*Faca um programa que leia 10
inteiros e imprima sua media.*/
#include <stdio.h>
int main() {
int i, cont=0, numeros[10];
float soma=0, media;
for (i=0; i<10; i++) {
        printf("digite um numero: ");
scanf("%d", &numeros[i]);
soma += numeros[i];
}
media = soma / 10.0;
for (i=0; i<10; i++)
if (numeros[i] > media) {
cont++;
printf("\t %d", numeros[i]);
}
printf("\n Media: %.2f",media);
return 0;
}
