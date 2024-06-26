#include <stdio.h>

//Created By Rendi Aigo Brandon_23343082

// Function to perform bubble sort
void bubbleSort(int array[], int size) {
    for (int step = 0; step < size - 1; ++step) {
        for (int i = 0; i < size - step - 1; ++i) {
            // To sort in ascending order, change ">" to "<".
            if (array[i] > array[i + 1]) {
                // Swap if the element found is greater than the next element
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}

// Function to print an array
void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i)
        printf("%d ", array[i]);
    printf("\n");
}

int main() {
    int data[] = {-2, 45, 0, 11, -9};
    int size = sizeof(data) / sizeof(data[0]);
    
    // Call bubble sort function
    bubbleSort(data, size);
    
    printf("Sorted Array in Ascending Order:\n");
    // Call printArray function to print the sorted array
    printArray(data, size);
    
    return 0;
}
