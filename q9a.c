#include <stdio.h>
#include <string.h>

int main() {
    char input[81]; // Vetor para armazenar a string de entrada
    char inversa[81]; // Vetor para armazenar a string invertida
    int i, j;

    // Solicita ao usuário que insira a string
    printf("Digite uma string de até 80 caracteres: ");
    fgets(input, sizeof(input), stdin);

    // Remove o caractere de nova linha (\n) da string de entrada
    input[strcspn(input, "\n")] = '\0';

    // Calcula o tamanho da string
    int length = strlen(input);

    // Inverte a string e a armazena no vetor 'inversa'
    for (i = length - 1, j = 0; i >= 0; i--, j++) {
        inversa[j] = input[i];
    }
    inversa[j] = '\0'; // Adiciona o caractere nulo para finalizar a string invertida

    // Exibe a string invertida
    printf("String invertida: %s\n", inversa);

    return 0;
}
