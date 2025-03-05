#include <stdio.h>

// Created By Rendi Aigo brandon_23343082

int main() {
    int n[10];
    int i, j;

    // Loop pertama untuk inisialisasi elemen-elemen array n
    for (i = 0; i < 10; i++) {
        n[i] = i + 100;
    }

    // Loop kedua untuk mencetak nilai-nilai elemen array n
    for (j = 0; j < 10; j++) {
        printf("Element [%d] = %d\n", j, n[j]);
    }

    return 0;
}
