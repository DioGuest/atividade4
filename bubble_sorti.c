#include "bubble_sorti.h"

void bubble_sorti(int arr[], int n) {
    int temp;
    int swapped;

    for (int i = 0; i < n - 1; i++) {
        swapped = 0;

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Troca os elementos se estiverem fora de ordem
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }

        // Se nenhum elemento foi trocado na passagem interna, o array está ordenado
        if (swapped == 0) {
            break;
        }
    }
}
// asd