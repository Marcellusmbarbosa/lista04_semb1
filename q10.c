#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char entrada[81]; // Vetor para armazenar a string de entrada
    char entradaLimpa[81]; // Vetor para armazenar a string após a remoção dos espaços
    int i, j;

    // Solicita ao usuário que insira a string
    printf("Digite uma string de até 80 caracteres: ");
    fgets(entrada, sizeof(entrada), stdin);

    // Remove o caractere de nova linha (\n) da string de entrada
    entrada[strcspn(entrada, "\n")] = '\0';

    // Remove espaços em branco e converte a string para minúsculas
    for (i = 0, j = 0; entrada[i] != '\0'; i++) {
        if (!isspace(entrada[i])) {
            entradaLimpa[j++] = tolower(entrada[i]);
        }
    }
    entradaLimpa[j] = '\0'; // Adiciona o caractere nulo para finalizar a string

    // Verifica se a string é um palíndromo
    int tamanho = strlen(entradaLimpa);
    int ehPalindromo = 1; // Assume que é um palíndromo por padrão

    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        if (entradaLimpa[i] != entradaLimpa[j]) {
            ehPalindromo = 0; // Não é um palíndromo
            break;
        }
    }

    // Exibe o resultado
    if (ehPalindromo) {
        printf("A string é um palíndromo.\n");
    } else {
        printf("A string não é um palíndromo.\n");
    }

    return 0;
}
