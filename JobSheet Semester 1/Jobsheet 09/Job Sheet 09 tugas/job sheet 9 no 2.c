#include <stdio.h>

//Created by Rendi Aigo Brandon_23343082

// Fungsi untuk menampilkan kalimat terbalik
void tampilkanTerbalik(char kalimat[], int panjang) {
    printf("Kalimat Terbalik: ");
    for (int i = panjang - 1; i >= 0; i--) {
        printf("%c", kalimat[i]);
    }
    printf("\n");
}

int main() {
    char kalimat[100];
    char karakter;
    int panjang = 0;

    // Meminta pengguna untuk memasukkan kalimat
    printf("Masukkan kalimat: ");

    // Membaca kalimat satu karakter per satu
    while (1) {
        karakter = getchar();

        if (karakter == '\n' || karakter == EOF) {
            break;
        }

        kalimat[panjang++] = karakter;
    }

    // Menampilkan kalimat terbalik
    tampilkanTerbalik(kalimat, panjang);

    return 0;
}
