#include <stdio.h>

int main() {
    int i, j, res;
    for (i = 0; i <= 10; i++) {
        printf("\n Tabuada do %i",i);
        for (j = 0; j <= 10; j++) {
            res = i * j;
            printf("\n %i * %i = %i", i, j, res);
        }
        printf("\n");
    }
    return 0;
}

