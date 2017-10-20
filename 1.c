/* Faca um programa que determine o mostre os
cinco primeiros multiplos de 3, considerando numeros maiores que 0. */
#include <stdio.h>
main ()
{
int i;
for (i=0;i<=50;i++)
{
    if (i%3==0)
    {
        printf ("O numero %d e multiplo de 3.\n",i);
    }
}
}
