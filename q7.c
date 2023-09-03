#include <stdio.h>
#include <string.h>

int main() {
    char T[1000], p[100];
    
    // Solicita que o usuário digite a string T
    printf("Digite a string T: ");
    fgets(T, sizeof(T), stdin);
    
    // Remove o caractere de nova linha ('\n') da string T, se presente
    T[strcspn(T, "\n")] = '\0';

    // Solicita que o usuário digite a string p
    printf("Digite a string p: ");
    scanf("%s", p);

    int lenT = strlen(T);
    int lenp = strlen(p);

    int i, j;
    int encontrou = 0;

    for (i = 0; i <= lenT - lenp; i++) {
        encontrou = 1;
        for (j = 0; j < lenp; j++) {
            if (T[i + j] != p[j]) {
                encontrou = 0;
                break;
            }
        }
        if (encontrou) {
            printf("A string p ocorre na posição %d de T.\n", i);
        }
    }

    if (!encontrou) {
        printf("A string p não foi encontrada em T.\n");
    }

    return 0;
}
