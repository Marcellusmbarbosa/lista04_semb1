#include <stdio.h>
#include <string.h>

// Função para verificar se duas strings são anagramas
int saoAnagramas(char str1[], char str2[]) {
    int contador1[256] = {0}; // Inicializa um contador de caracteres para str1
    int contador2[256] = {0}; // Inicializa um contador de caracteres para str2
    int i;

    // Calcula a frequência de cada caractere em str1
    for (i = 0; str1[i] != '\0'; i++) {
        contador1[str1[i]]++;
    }

    // Calcula a frequência de cada caractere em str2
    for (i = 0; str2[i] != '\0'; i++) {
        contador2[str2[i]]++;
    }

    // Compara as contagens de caracteres
    for (i = 0; i < 256; i++) {
        if (contador1[i] != contador2[i]) {
            return 0; // As strings não são anagramas
        }
    }

    return 1; // As strings são anagramas
}

int main() {
    char str1[100], str2[100];

    // Solicita que o usuário digite as duas strings
    printf("Digite a primeira string: ");
    scanf("%s", str1);

    printf("Digite a segunda string: ");
    scanf("%s", str2);

    // Verifica se as duas strings são anagramas
    if (saoAnagramas(str1, str2)) {
        printf("As duas strings são anagramas.\n");
    } else {
        printf("As duas strings não são anagramas.\n");
    }

    return 0;
}
