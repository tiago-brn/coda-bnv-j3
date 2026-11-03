#include <stdio.h>
#include <stdlib.h>

int main() {
    int nbr_entier;
    printf("Choissisez un nombre différent de 0\n");
    scanf("%d", &nbr_entier);
    int count = 0;
    while(count <= nbr_entier) {
        printf("%d\n", count);
        count += 1;
    }
    exit(0);
}