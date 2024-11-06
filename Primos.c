#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 2000000

int main() {

    int *primos = malloc((MAX + 1) * sizeof(int));
    int i, j;
    int count = 0;






    for (i = 2; i <= MAX; i++) {
        primos[i] = 1;
    }


    for (i = 2; i <= sqrt(MAX); i++) {
        if (primos[i]) {
            for (j = i * i; j <= MAX; j += i) {
                primos[j] = 0;
            }
        }
    }


    for (i = 2; i <= MAX; i++) {
        if (primos[i]) {
            printf("%d\n", i);
            count++;
        }
    }


    printf("Quantidade de primos: %d\n", count);




    return 0;
}
