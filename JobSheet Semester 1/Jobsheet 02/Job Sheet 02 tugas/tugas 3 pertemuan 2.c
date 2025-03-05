#include <stdio.h>

// Created by 23343082_Rendi Aigo Brandon

int main() {
    // Deklarasi variabel
    double panjang_alas = 8.0;
    double tinggi = 5.0;      
    double luas;

    // Menghitung luas segitiga
    luas = 0.5 * panjang_alas * tinggi;

    // Menampilkan hasil menghitung luas segitiga
    printf("Panjang Alas = %.2lf cm\n", panjang_alas);
    printf("Tinggi = %.2lf cm\n", tinggi);
    printf("Maka Luas Segitiga Adalah %.2lf cm^2\n", luas);
    
    return 0;
}