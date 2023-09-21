#include <stdio.h>
#include <stdlib.h>
#include "bubble_sorti.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Uso: %s <num1> <num2> <num3> ...\n", argv[0]);
        return 1;
    }

    int num_count = argc - 1;
    int *numbers = (int *)malloc(num_count * sizeof(int));

    if (!numbers) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for (int i = 1; i <= num_count; i++) {
        numbers[i - 1] = atoi(argv[i]);
    }

    bubble_sort(numbers, num_count);

    printf("Saída:");

    for (int i = 0; i < num_count; i++) {
        printf(" %d", numbers[i]);
    }

    printf("\n");

    free(numbers);

    return 0;
}
// dsa