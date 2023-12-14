#include <stdio.h>

int main() {
    // Deklarasi variabel
    char operator;
    float angka1, angka2, hasil;

    // Menampilkan menu utama
    printf("=== Kalkulator Sederhana ===\n");
    printf("Pilih operasi:\n");
    printf("a) Penjumlahan\n");
    printf("b) Pengurangan\n");
    printf("c) Perkalian\n");
    printf("d) Pembagian\n");
    printf("e) Hasil Bagi\n");
    printf("Pilihan: ");
    scanf(" %c", &operator);  // Spasi sebelum %c untuk menghindari masalah karakter ganda

    // Memasukkan dua angka
    printf("Masukkan angka pertama: ");
    scanf("%f", &angka1);

    printf("Masukkan angka kedua: ");
    scanf("%f", &angka2);

    // Melakukan operasi sesuai dengan pilihan
    switch (operator) {
        case 'a':
            hasil = angka1 + angka2;
            printf("Hasil: %.2f\n", hasil);
            break;
        case 'b':
            hasil = angka1 - angka2;
            printf("Hasil: %.2f\n", hasil);
            break;
        case 'c':
            hasil = angka1 * angka2;
            printf("Hasil: %.2f\n", hasil);
            break;
        case 'd':
            if (angka2 != 0) {
                hasil = angka1 / angka2;
                printf("Hasil: %.2f\n", hasil);
            } else {
                printf("Pembagian dengan nol tidak diizinkan.\n");
            }
            break;
        case 'e':
            if (angka2 != 0) {
                hasil = angka1 / angka2;
                int hasilBulat = (int)hasil;  // Mengambil bagian bulat dari hasil pembagian
                printf("Hasil Bagi: %d\n", hasilBulat);
            } else {
                printf("Pembagian dengan nol tidak diizinkan.\n");
            }
            break;
        default:
            printf("Pilihan tidak valid.\n");
            break;
    }

    return 0;
}
