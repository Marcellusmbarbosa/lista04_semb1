#include <stdio.h>
#include <string.h>

// Função que compara duas strings e retorna o resultado de acordo com as especificações
int compararStrings(const char *str1, const char *str2) {
    int resultado = strcmp(str1, str2);

    if (resultado == 0) {
        return 0;
    } else if (resultado < 0) {
        return -1;
    } else {
        return 1;
    }
}

int main() {
    char str1[81]; // Vetor para a primeira string, incluindo espaço para o caractere nulo
    char str2[81]; // Vetor para a segunda string, incluindo espaço para o caractere nulo

    // Leitura das duas strings
    printf("Digite a primeira string (até 80 caracteres): ");
    fgets(str1, sizeof(str1), stdin);

    printf("Digite a segunda string (até 80 caracteres): ");
    fgets(str2, sizeof(str2), stdin);

    // Remova o caractere de nova linha ('\n') das strings se estiver presente
    if (strchr(str1, '\n')) {
        *strchr(str1, '\n') = '\0';
    }
    if (strchr(str2, '\n')) {
        *strchr(str2, '\n') = '\0';
    }

    int resultado = compararStrings(str1, str2);

    // Exibe o resultado da comparação
    printf("Resultado da comparação: %d\n", resultado);

    return 0;
}
