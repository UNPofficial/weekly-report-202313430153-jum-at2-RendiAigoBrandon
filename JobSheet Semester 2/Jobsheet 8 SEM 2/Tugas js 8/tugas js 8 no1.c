#include <stdio.h>

//Created by Rendi Aigo Brandon_23343082

// Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Tukar elemen jika urutan salah
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Insertion Sort
void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Geser elemen yang lebih besar dari key ke posisi setelahnya
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr1[] = {64, 25, 12, 22, 11};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);

    printf("Array sebelum diurutkan (Bubble Sort):\n");
    for (int i=0; i < n1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    bubbleSort(arr1, n1);

    printf("Array setelah diurutkan (Bubble Sort):\n");
    for (int i=0; i < n1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    int arr2[] = {64, 25, 12, 22, 11};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    printf("Array sebelum diurutkan (Insertion Sort):\n");
    for (int i=0; i < n2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    insertionSort(arr2, n2);

    printf("Array setelah diurutkan (Insertion Sort):\n");
    for (int i=0; i < n2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
