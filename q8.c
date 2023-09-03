#include <stdio.h>
#include <string.h>

int isSubsequence(char *T1, char *T2) {
    int len1 = strlen(T1);
    int len2 = strlen(T2);

    int i = 0, j = 0;

    while (i < len1 && j < len2) {
        if (T1[i] == T2[j]) {
            i++;
        }
        j++;
    }

    return (i == len1);
}

int main() {
    char T1[100], T2[100];
    
    // Solicita que o usuário digite a primeira string T1
    printf("Digite a primeira string T1: ");
    scanf("%s", T1);

    // Solicita que o usuário digite a segunda string T2
    printf("Digite a segunda string T2: ");
    scanf("%s", T2);

    if (isSubsequence(T1, T2)) {
        printf("T1 é subsequência de T2.\n");
    } else {
        printf("T1 não é subsequência de T2.\n");
    }

    return 0;
}
