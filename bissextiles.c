#include <stdio.h>
#include <stdlib.h>

int annee;

int main() {
    printf("\nQuelle est l'année ?\n");
    scanf("%d",&annee);

    if (annee%4==0) {
        if (annee%400==0 && annee%100==0) { printf("\nL'année est bissextile\n"); }
    }
    else { printf("\nl'année n'est pas bissextile\n");}
}

