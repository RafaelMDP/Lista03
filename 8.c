/*Escreva um programa que leia 10 numeros
 e escreva o menor valor lido e o maior valor lido. */
#include <stdio.h>
#define N 10
int main() {
int num, i, maior, menor;
for (i=1; i<=N; i++) {
printf("Informe o %dº número: ", i);
scanf("%d", &num);
if (i == 1)
maior = menor = num;
else {
if (maior < num)
maior = num;
if (menor > num)
menor = num;
}
}
printf("Maior %d\n", maior);
printf("Menor %d\n", menor);
return 0;
}
