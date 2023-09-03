#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[100], result[300];

    // Leia as três strings
    printf("Digite a primeira string: ");
    scanf("%s", str1);

    printf("Digite a segunda string: ");
    scanf("%s", str2);

    printf("Digite a terceira string: ");
    scanf("%s", str3);

    // Ordenar as três strings em ordem alfabética
    if (strcmp(str1, str2) > 0) {
        char temp[100];
        strcpy(temp, str1);
        strcpy(str1, str2);
        strcpy(str2, temp);
    }
    if (strcmp(str2, str3) > 0) {
        char temp[100];
        strcpy(temp, str2);
        strcpy(str2, str3);
        strcpy(str3, temp);
    }
    if (strcmp(str1, str2) > 0) {
        char temp[100];
        strcpy(temp, str1);
        strcpy(str1, str2);
        strcpy(str2, temp);
    }

    // Concatenar as strings em ordem alfabética
    strcpy(result, str1);
    strcat(result, str2);
    strcat(result, str3);

    // Imprimir a string resultante
    printf("String concatenada em ordem alfabética: %s\n", result);

    return 0;
}
