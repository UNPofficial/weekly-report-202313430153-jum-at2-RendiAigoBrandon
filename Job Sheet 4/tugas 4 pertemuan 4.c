#include <stdio.h>

int main() {
    // Deklarasi variabel
    int durasiFilm;
    float tarifPertama = 15000.0;
    float tarifBerikutnya = 0.5 * tarifPertama;  // 50% dari tarif pertama
    float totalBiaya;

    // Memasukkan durasi film
    printf("Masukkan durasi film (jam): ");
    scanf("%d", &durasiFilm);

    // Menghitung total biaya
    if (durasiFilm > 0) {
        totalBiaya = tarifPertama + (tarifBerikutnya * (durasiFilm - 1));
        
        // Menampilkan total biaya
        printf("\nTotal Biaya: Rp %.2f\n", totalBiaya);
    } else {
        // Menampilkan pesan jika durasi tidak valid
        printf("\nDurasi film tidak valid. Harap masukkan durasi yang lebih dari 0 jam.\n");
    }

    return 0;
}
