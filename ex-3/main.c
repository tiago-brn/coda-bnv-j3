#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Choissisez un mot\n");
    char mot[100];
    scanf("%s", mot);
    int count_mot = 1;
    while(count_mot < 6) {
        printf("%d : %s\n", count_mot, mot);
        count_mot += 1;
    }
    exit(0);
}