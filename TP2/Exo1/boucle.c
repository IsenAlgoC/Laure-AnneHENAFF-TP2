#include <stdio.h>

int n=100 ;
int somme1 = 0 ;
int a = 1 ;
int somme2 = 0 ;
int b = 1 ;
int somme3 = 0 ;

int main() {
    for ( int i=1 ; i<= n ; i++) { somme1 = somme1 + i; };
    printf("la somme des %d premiers entiers vaut %d",n,somme1);

    while (a<=100) {somme2 = somme2 + a; a = a+1 ; } ;
    printf("\nla somme des 100 premiers entiers vaut %d",somme2);

    do { somme3=somme3 + b; b=b+1; } while (b<=100 );
    printf("\nla somme des 100 premiers entiers vaut %d",somme3);
 }

