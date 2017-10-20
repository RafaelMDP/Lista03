/*Escreva um algoritmo que leia certa quantidade
de numeros e imprima o maior deles e quantas vezes
o maior numero foi lido. A quantidade de numeros a
serem lidos deve ser fornecida pelo usuario. */
#include <stdio.h>
main(){
int i, maior, menor, num, n;
printf("digite a quantidade de valor: ");
scanf("%d", &n);
for(i=1;i<=n;i++){
printf("Digite o %d  numero: ",i);
scanf("%d", &num);
if(i==1){
    maior=num;
    menor=num;
}else{
    if(num>maior){
        maior=num;
    }else{
    if(num<menor){
        menor=num;
    }
    }
}
}
printf("%d menor numero e maior numero %d", menor, maior);
return 0;
}
