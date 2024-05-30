#include <stdio.h>

// Created by Rendi Aigo Brandon_23343082

int main() {
    int n, i, j, position, swap;
    printf("Masukkan jumlah elemen: ");
    scanf("%d", &n);
    printf("Masukkan %d buah bilangan\n", n);
    int a[n]; // Define array with size n
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Selection Sort Algorithm
    for (i = 0; i < n - 1; i++) {
        position = i;
        for (j = i + 1; j < n; j++) {
            if (a[position] > a[j])
                position = j;
        }
        if (position != i) {
            swap = a[i];
            a[i] = a[position];
            a[position] = swap;
        }
    }

    printf("Array yang telah diurutkan: \n");
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);

    return 0;
}
