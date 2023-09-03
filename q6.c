#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    
    // Solicita que o usuário digite as duas strings
    printf("Digite a primeira string: ");
    scanf("%s", str1);

    printf("Digite a segunda string: ");
    scanf("%s", str2);

    // Calcula o comprimento das strings
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // Cria um array de flags para rastrear os caracteres a serem eliminados
    int eliminar[256] = {0}; // Supõe que estamos trabalhando com caracteres ASCII

    // Marca os caracteres da primeira string a serem eliminados
    for (int i = 0; i < len1; i++) {
        eliminar[(int)str1[i]] = 1;
    }

    // Filtra a segunda string, eliminando os caracteres marcados
    int k = 0;
    for (int i = 0; i < len2; i++) {
        if (!eliminar[(int)str2[i]]) {
            str2[k++] = str2[i];
        }
    }

    // Adiciona o caractere nulo ao final da string resultante
    str2[k] = '\0';

    // Imprime a segunda string após a eliminação dos caracteres
    printf("Segunda string após a eliminação dos caracteres da primeira string: %s\n", str2);

    return 0;
}
