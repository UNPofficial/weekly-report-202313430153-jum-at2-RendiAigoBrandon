#include <stdio.h>

int main() {
    int banyakMahasiswa;

    // Meminta input banyak mahasiswa
    printf("Input banyak mahasiswa: ");
    scanf("%d", &banyakMahasiswa);

    // Membuat array untuk menyimpan nama mahasiswa
    char namaMahasiswa[banyakMahasiswa][50]; // Maksimal panjang nama adalah 50 karakter

    // Meminta input nama mahasiswa
    for (int i = 0; i < banyakMahasiswa; ++i) {
        printf("Input nama mahasiswa %d: ", i + 1);
        scanf("%s", namaMahasiswa[i]);
    }

    // Menampilkan seluruh elemen nama mahasiswa
    printf("\nNama-nama mahasiswa:\n");
    for (int i = 0; i < banyakMahasiswa; ++i) {
        printf("Nama mahasiswa ke-%d: %s\n", i + 1, namaMahasiswa[i]);
    }

    return 0;
}
