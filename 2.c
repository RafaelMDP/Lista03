/*Escreva um programa que escreva na tela,
de 1 ate 100, de 1 em 1, 3 vezes. A primeira vez
deve usar a estrutura de repetic˜ao for, a segunda while, e a terceira do while.*/
#include <stdio.h>
main ()
{
    int i;
for (i=1;i<=100;i++){
    if (i%1==0){
        printf ("O for %d \n",i);
    }
}
int b=1;
  while (b <= 100){
    printf("while = %d\n",b);
      ++b;
    }
int c=0;
do{
c++;
printf("%d do while \n", c);
} while (c < 100);
return 0;
}
