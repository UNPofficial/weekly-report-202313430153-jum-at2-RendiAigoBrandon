#include <stdio.h>

//Created by 23343082_Rendi Aigo Brandon

// Struktur untuk menyimpan data mahasiswa
struct Mahasiswa {
    int npm;
    char nama[50];
    char tglLahir[11]; // Format: mm-dd-yyyy
    char alamat[100];
    char hp[15]; // Nomor handphone sebagai string
};

int main() {
    // Array untuk menyimpan data mahasiswa
    struct Mahasiswa mahasiswa[50];

    char inputLagi;

    int i = 0; // Indeks array mahasiswa

    do {
        // Input data mahasiswa
        printf("NPM : ");
        scanf("%d", &mahasiswa[i].npm);

        printf("NAMA : ");
        scanf(" %[^\n]", mahasiswa[i].nama);

        printf("TANGGAL LAHIR : ");
        scanf("%s", mahasiswa[i].tglLahir);

        printf("ALAMAT : ");
        scanf(" %[^\n]", mahasiswa[i].alamat);

        printf("NOMOR HP : ");
        scanf("%s", mahasiswa[i].hp);

        i++; // Pindah ke mahasiswa berikutnya

        // Mau memasukkan data lagi?
        printf("Mau memasukkan data lagi [y/t]? ");
        scanf(" %c", &inputLagi);

    } while (inputLagi == 'y' || inputLagi == 'Y');

    // Menampilkan data mahasiswa yang telah dimasukkan
    printf("\nData Mahasiswa:\n");
    printf("%-10s %-18s %-12s %-20s %-15s\n", "NPM", "NAMA", "TGL LAHIR", "ALAMAT", "HP");

    for (int j = 0; j < i; j++) {
        printf("%-10d %-18s %-12s %-20s %-15s\n",
               mahasiswa[j].npm, mahasiswa[j].nama, mahasiswa[j].tglLahir,
               mahasiswa[j].alamat, mahasiswa[j].hp);
    }

    return 0;
}
