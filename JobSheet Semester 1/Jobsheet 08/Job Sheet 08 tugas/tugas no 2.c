#include <stdio.h>

//Created by Rendi Aigo Brandon_23343082

// Fungsi untuk penjumlahan
float tambah(float num1, float num2) {
    return num1 + num2;
}

// Fungsi untuk pengurangan
float kurang(float num1, float num2) {
    return num1 - num2;
}

// Fungsi untuk perkalian
float kali(float num1, float num2) {
    return num1 * num2;
}

// Fungsi untuk pembagian
float bagi(float num1, float num2) {
    // Mencegah pembagian oleh nol
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Error: Pembagian oleh nol.\n");
        return 0;
    }
}

int main() {
    float num1, num2;

    // Meminta pengguna untuk memasukkan dua bilangan
    printf("Masukkan dua bilangan: ");
    scanf("%f %f", &num1, &num2);

    // Menampilkan hasil operasi aritmetika
    printf("Hasil penjumlahan: %.2f\n", tambah(num1, num2));
    printf("Hasil pengurangan: %.2f\n", kurang(num1, num2));
    printf("Hasil perkalian: %.2f\n", kali(num1, num2));
    
    // Memanggil fungsi pembagian dan menangani kasus pembagian oleh nol
    if (num2 != 0) {
        printf("Hasil pembagian: %.2f\n", bagi(num1, num2));
    }

    return 0;
}
