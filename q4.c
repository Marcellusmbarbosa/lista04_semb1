#include <stdio.h>
#include <ctype.h> // Para a função tolower

int main() {
    char str[81]; // Acomoda até 80 caracteres, mais um para o caractere nulo ('\0')
    int i;

    // Solicita que o usuário digite a string
    printf("Digite uma string de até 80 caracteres: ");
    fgets(str, sizeof(str), stdin);

    // Transforma todas as letras maiúsculas em minúsculas na string
    for (i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }

    // Imprime a string convertida
    printf("String convertida para minúsculas: %s", str);

    return 0;
}
