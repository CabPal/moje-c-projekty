#include <stdio.h>

int main() {
    char meno[50];
    printf("zadaj meno: ");
    scanf("%s", meno);

    int vek;
    printf("zadaj vek: ");
    scanf("%d", &vek);

    printf("vase meno je: %s\n", meno);
    printf("vas vek je: %d\n", vek);

    return 0;
}
