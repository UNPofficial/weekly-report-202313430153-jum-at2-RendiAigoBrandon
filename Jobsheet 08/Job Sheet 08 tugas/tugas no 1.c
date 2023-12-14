#include <stdio.h>

//Created by Rendi Aigo Brandon_23343082

// Fungsi rekursif untuk mencetak penjumlahan
void printMultiplication(int a, int b) {
    if (b == 1) {
        printf("%d", a);
    } else {
        printf("%d + ", a);
        printMultiplication(a, b - 1);
    }
}

// Fungsi rekursif untuk menghitung hasil perkalian
int multiply(int a, int b) {
    if (b == 1) {
        return a;
    } else {
        return a + multiply(a, b - 1);
    }
}

int main() {
    int num1, num2;

    printf("Masukkan dua bilangan bulat positif: ");
    scanf("%d %d", &num1, &num2);

    // Memanggil fungsi rekursif untuk mencetak penjumlahan
    printf("%d x %d = ", num1, num2);
    printMultiplication(num1, num2);

    // Memanggil fungsi rekursif untuk menghitung hasil perkalian
    int result = multiply(num1, num2);

    printf(" = %d\n", result);

    return 0;
}
