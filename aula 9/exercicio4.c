#include <stdio.h>

int main() {
    char palavra1[41], palavra2[41], palavra3[41];

    printf("Palavra 1: ");
    scanf("%40s", palavra1);

    printf("Palavra 2: ");
    scanf("%40s", palavra2);

    printf("Palavra 3: ");
    scanf("%40s", palavra3);

    printf("%s\n%s\n%s\n", palavra3, palavra2, palavra1);

    return 0;
}