 /* Faca um programa que leia um numero inteiro positivo
 ımpar N e imprima todos os numeros ımpares de 1 ate N em ordem crescente. */
#include <stdio.h>
int main() {
int n, i;
printf("Informe n: ");
scanf("%d", &n);
for (i=0; i<=n; i++){
    if(i%2==1)
printf("%d\t", i);
}
return 0;
}
