/* Faca um programa que leia 10 inteiros positivos,
ignorando n˜ao positivos, e imprima sua media.  */
#include <stdio.h>
#define N
int main(){
int i, inteiro[N=0];
float media = 0.0;
for (i = 0; i < N; i++){
printf("\nDigite um valor inteiro: ");
scanf("%d%*c", &inteiro[i]);
media += inteiro[i];
}
media /= N;
printf("\nMedia = %g", media);
getchar();
return 0;
}
