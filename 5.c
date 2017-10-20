/*Fac¸a um programa que peca ao
usuario para digitar 10 valores e some-os.*/
#include <stdio.h>
int main() {
int num, i, n, soma=0;
for (i=1; i<=n; i++) {
printf("Informe o %d º numero: ", i);
scanf("%d", &n);
soma += n;
}
printf("Soma dos 10 numeros informados: %d\n", soma);
return 0;
}
