#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Choissisez un nombre entier entre 1 et 100\n");
    int nombre_entier;
    scanf("%d", &nombre_entier);
    if (nombre_entier > 42) {
        printf("Le nombre %d est supérieur à 42\n", nombre_entier);
    }
    else if (nombre_entier < 42) {
        printf("Le nombre %d est inférieur à 42\n", nombre_entier);
    }
    else {
        printf("Le nombre %d est égal à 42\n", nombre_entier);
    }
    exit(0);
}