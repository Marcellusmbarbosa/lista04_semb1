#include <stdio.h>
#include <string.h>

int main() {
    char input[81]; // Vetor para armazenar a string de entrada
    int i, j;

    // Solicita ao usuário que insira a string
    printf("Digite uma string de até 80 caracteres: ");
    fgets(input, sizeof(input), stdin);

    // Remove o caractere de nova linha (\n) da string de entrada
    input[strcspn(input, "\n")] = '\0';

    // Calcula o tamanho da string
    int length = strlen(input);

    // Inverte a string no próprio vetor 'input' sem usar um vetor adicional
    for (i = 0, j = length - 1; i < j; i++, j--) {
        char temp = input[i];
        input[i] = input[j];
        input[j] = temp;
    }

    // Exibe a string invertida
    printf("String invertida: %s\n", input);

    return 0;
}
