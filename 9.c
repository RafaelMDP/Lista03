/* Faca um programa que leia um numero inteiro N
 e depois imprima os N primeiros numeros naturais ımpares */
#include<stdio.h>
int main()
{
int i,n, soma=0;
printf("digite o valor: ");
scanf("%d", &n);
for(i=0;i<n;i++)
printf(" %d ", i*2+1);
return 1;
}
