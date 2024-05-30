#include <stdio.h>

//Created By Rendi Aigo Brandon_23343082

// Function prototypes
void shellSort(int array[], int n);
void printArray(int array[], int size);

// Function to perform Shell sort
void shellSort(int array[], int n) {
    for (int gap = n/2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i += 1) {
            int temp = array[i];
            int j;
            for (j = i; j >= gap && array[j - gap] > temp; j -= gap) {
                array[j] = array[j - gap];
            }
            array[j] = temp;
        }
    }
}

// Function to print an array
void printArray(int array[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// Main function
int main() {
    int data[] = {19, 8, 3, 7, 5, 6, 4, 1};
    int size = sizeof(data) / sizeof(data[0]);
    
    printf("Original array: ");
    printArray(data, size);
    
    shellSort(data, size);
    
    printf("Sorted array: ");
    printArray(data, size);

    return 0;
}
