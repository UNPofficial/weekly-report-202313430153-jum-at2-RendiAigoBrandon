#include <stdio.h>

int main() {
    int baris;

    // Meminta input jumlah baris dari pengguna
    printf("Masukkan jumlah baris: ");
    scanf("%d", &baris);

    // Menampilkan pola segitiga siku-siku
    printf("Pola segitiga siku-siku:\n");
    for (int i = 1; i <= baris; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
