#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Created By Rendi Aigo Brandon_23343082

#define MAX 20

void InsertionSort(int arr[]) {
    int i, j, key;
    for (i = 1; i < MAX; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int data_awal[MAX], data_urut[MAX];
    int i;
    time_t k1, k2;

    printf("Sebelum pengurutan : \n");
    srand(time(NULL)); // Initialize random seed outside the loop

    for (i = 0; i < MAX; i++) {
        data_awal[i] = rand() % 100 + 1; // Corrected random number generation
        printf("%d ", data_awal[i]);
    }
    printf("\nSetelah pengurutan : \n");
    
    for (i = 0; i < MAX; i++)
        data_urut[i] = data_awal[i];

    time(&k1);
    InsertionSort(data_urut);
    time(&k2);
    
    for (i = 0; i < MAX; i++)
        printf("%d ", data_urut[i]);
    
    printf("\nWaktu = %ld\n", k2 - k1);
    
    return 0;
}
