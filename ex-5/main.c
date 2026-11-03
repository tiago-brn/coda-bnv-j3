#include <stdio.h>
#include <stdlib.h>

int main() {
    char symbole;
    printf("Choissisez le symbole  que vous souhaitez parmi les suivantes + ou -\n");
    scanf("%c", &symbole);
    int nbr;
    printf("Choissisez un nombre différent de 0\n");
    scanf("%d", &nbr);
    int count = 0;
    if (symbole == '+') {
        while(count <= nbr) {
            printf("%d\n", count);
            count += 1;
        }
    }
    else if (symbole == '-') {
        while(nbr >= count) {
            printf("%d\n", nbr);
            nbr -= 1;
        }
    }
    else {
        printf("Symbole non reconnu\n");
    }
    exit(0);
}