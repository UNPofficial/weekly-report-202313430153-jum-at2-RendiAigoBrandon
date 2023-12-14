#include <stdio.h>

int main() {
    // Deklarasi array untuk menyimpan nilai mahasiswa
    float nilaiMahasiswa[20];

    // Memasukkan nilai mahasiswa
    printf("Masukkan nilai mahasiswa (0-100):\n");
    for (int i = 0; i < 20; ++i) {
        printf("Nilai mahasiswa %d: ", i + 1);
        scanf("%f", &nilaiMahasiswa[i]);

        // Validasi nilai antara 0 dan 100
        while (nilaiMahasiswa[i] < 0 || nilaiMahasiswa[i] > 100) {
            printf("Masukkan nilai yang valid (0-100): ");
            scanf("%f", &nilaiMahasiswa[i]);
        }
    }

    // Menghitung rata-rata nilai
    float totalNilai = 0;
    for (int i = 0; i < 20; ++i) {
        totalNilai += nilaiMahasiswa[i];
    }

    float rataRata = totalNilai / 20;

    // Menampilkan rata-rata nilai
    printf("Rata-rata nilai mahasiswa: %.2f\n", rataRata);

    return 0;
}
