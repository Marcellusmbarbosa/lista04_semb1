#include <stdio.h>
#include <string.h>

int main() {
    char input[81];  // Acomodamos até 80 caracteres, mais um para o caractere nulo
    char output[81];
    int i, j;

    printf("Digite uma string de até 80 caracteres: ");
    fgets(input, sizeof(input), stdin);

    // Inicializamos o índice para a string de saída
    j = 0;

    // Percorremos a string de entrada
    for (i = 0; i < strlen(input); i++) {
        // Se o caractere atual não for um espaço em branco ou se não for seguido por outro espaço em branco, copiamos para a string de saída
        if (input[i] != ' ' || (i > 0 && input[i - 1] != ' ')) {
            output[j] = input[i];
            j++;
        }
    }

    // Adicionamos o caractere nulo ao final da string de saída
    output[j] = '\0';

    printf("String resultante: %s\n", output);

    return 0;
}
