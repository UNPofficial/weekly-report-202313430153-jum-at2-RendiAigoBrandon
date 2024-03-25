#include <stdio.h>

//Created by Rendi Aigo Brandon_23343082

// Fungsi untuk menghitung luas lingkaran
float luas(float radius) {
    return 3.14159 * radius * radius;
}

// Fungsi untuk menghitung keliling lingkaran
float keliling(float radius) {
    return 2 * 3.14159 * radius;
}

int main() {
    float radius;

    // Meminta pengguna untuk memasukkan radius lingkaran
    printf("Masukkan radius lingkaran: ");
    scanf("%f", &radius);

    // Menampilkan hasil perhitungan luas dan keliling lingkaran
    printf("Luas lingkaran: %.2f\n", luas(radius));
    printf("Keliling lingkaran: %.2f\n", keliling(radius));

    return 0;
}
