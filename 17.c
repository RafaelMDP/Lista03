 /*Faca um programa que leia um
 numero inteiro positivo n e calcule
 a soma dos n primeiros numeros naturais*/
#include <stdio.h>
int main() {
int n, i, soma;
printf("Informe n: ");
scanf("%d", &n);
while(i<=n){
    soma= n+n;
    printf("%i", soma);
}

return 0;
}
