#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Created By Rendi Aigo brandon_23343082

// Mendefinisikan struktur Mahasiswa
struct Mahasiswa {
    char nim[20];
    char nama[50];
    char tanggal_lahir[20];
    float ipk;
};

// Fungsi untuk memasukkan data mahasiswa
void input_data(struct Mahasiswa *mhs) {
    printf("Masukkan NIM: ");
    scanf("%s", mhs->nim);
    
    printf("Masukkan Nama: ");
    getchar(); // Mengonsumsi newline character
    fgets(mhs->nama, sizeof(mhs->nama), stdin);
    mhs->nama[strcspn(mhs->nama, "\n")] = '\0'; // Menghapus newline character
    
    printf("Masukkan Tanggal Lahir (dd/mm/yyyy): ");
    scanf("%s", mhs->tanggal_lahir);
    
    printf("Masukkan IPK: ");
    scanf("%f", &mhs->ipk);
}

// Fungsi untuk menampilkan data mahasiswa
void tampil_data(struct Mahasiswa mhs) {
    printf("NIM: %s\n", mhs.nim);
    printf("Nama: %s\n", mhs.nama);
    printf("Tanggal Lahir: %s\n", mhs.tanggal_lahir);
    printf("IPK: %.2f\n", mhs.ipk);
}

int main() {
    // Mendeklarasikan variabel mahasiswa
    struct Mahasiswa mhs;

    // Memanggil fungsi input_data untuk memasukkan data
    printf("Masukkan data mahasiswa:\n");
    input_data(&mhs);

    // Memanggil fungsi tampil_data untuk menampilkan data
    printf("\nData mahasiswa yang dimasukkan:\n");
    tampil_data(mhs);

    return 0;
}
