#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    char a;
    int i, j;
    int maks_yol = 10;

    printf("Bir karakter giriniz: ");
    scanf(" %c", &a);

    while (1) {
        for (i = 0; i < maks_yol; i++) {
            for (j = 0; j < i; j++) {
                printf(" ");
            }
            printf("%c\n", a);
            usleep(10000);
        }
        for (i = maks_yol - 2; i >= 0; i--) {
            for (j = 0; j < i; j++) {
                printf(" ");
            }
            printf("%c\n", a);
            usleep(10000);
        }
    }

    return 0;
}
