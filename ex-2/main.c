#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Choissisez l'oépration que vous souhaitez effectuer parmis les suivantes +, -, *, /, %% :\n");
    char operation;
    scanf("%c", &operation);
    if (operation == '+') {
        printf("Vous avez choisi l'addition\n");
    }
    else if (operation == '-') {
        printf("Vous avez choisi la soustraction\n");
    }
    else if (operation == '*') {
        printf("Vous avez choisi la multiplication\n");
    }
    else if (operation == '/') {
        printf("Vous avez choisi la division\n");
    }
    else if (operation == '%') {
        printf("Vous avez choisi le modulo\n");
    }
    else {
        printf("Opération non reconnue\n");
    }

}