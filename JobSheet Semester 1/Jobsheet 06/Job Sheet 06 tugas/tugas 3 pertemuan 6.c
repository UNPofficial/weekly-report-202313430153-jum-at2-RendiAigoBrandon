#include <stdio.h>

int main() {
    int baris;

    // Meminta input jumlah baris dari pengguna
    printf("Masukkan jumlah baris: ");
    scanf("%d", &baris);

    // Menampilkan pola segitiga dengan angka
    printf("Pola segitiga dengan angka:\n");
    for (int i = 1; i <= baris; ++i) {
        int nilai = i;
        for (int j = 1; j <= i; ++j) {
            printf("%d ", nilai);
            nilai += i;  // Menambahkan nilai berdasarkan baris
        }
        printf("\n");
    }

    return 0;
}
