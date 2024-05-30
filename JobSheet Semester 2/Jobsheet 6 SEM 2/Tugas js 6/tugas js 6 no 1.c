#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Created by Rendi Aigo Brandon_23343082

#define MAX 100 // Jumlah maksimum mahasiswa yang dapat disimpan

// Struktur untuk menyimpan data mahasiswa
struct Mahasiswa {
    char nim[20];
    char nama[50];
    float nilai;
};

struct Mahasiswa stack[MAX]; // Stack untuk menyimpan data mahasiswa
int top = -1; // Indeks atas stack

// Fungsi untuk menambahkan data mahasiswa ke dalam stack
void push(struct Mahasiswa mhs) {
    if (top == MAX - 1) {
        printf("Stack penuh. Tidak dapat menambahkan data.\n");
    } else {
        top++;
        stack[top] = mhs;
        printf("Data mahasiswa berhasil ditambahkan ke dalam stack.\n");
    }
}

// Fungsi untuk menghapus data mahasiswa dari stack
void pop() {
    if (top == -1) {
        printf("Stack kosong. Tidak ada data untuk dihapus.\n");
    } else {
        printf("Data mahasiswa yang dihapus:\n");
        printf("NIM: %s\n", stack[top].nim);
        printf("Nama: %s\n", stack[top].nama);
        printf("Nilai: %.2f\n", stack[top].nilai);
        top--;
    }
}

// Fungsi untuk menampilkan seluruh data mahasiswa dalam stack
void display() {
    if (top == -1) {
        printf("Stack kosong. Tidak ada data untuk ditampilkan.\n");
    } else {
        printf("Data mahasiswa dalam stack:\n");
        for (int i = top; i >= 0; i--) {
            printf("Mahasiswa ke-%d:\n", top - i + 1);
            printf("NIM: %s\n", stack[i].nim);
            printf("Nama: %s\n", stack[i].nama);
            printf("Nilai: %.2f\n", stack[i].nilai);
            printf("\n");
        }
    }
}

// Fungsi untuk membandingkan nilai mahasiswa (digunakan dalam proses sorting)
int compare(const void *a, const void *b) {
    struct Mahasiswa *mhs1 = (struct Mahasiswa *)a;
    struct Mahasiswa *mhs2 = (struct Mahasiswa *)b;
    return (mhs1->nilai - mhs2->nilai);
}

// Fungsi untuk mengurutkan data mahasiswa berdasarkan nilai
void sort() {
    if (top == -1) {
        printf("Stack kosong. Tidak ada data untuk diurutkan.\n");
    } else {
        qsort(stack, top + 1, sizeof(struct Mahasiswa), compare);
        printf("Data mahasiswa berhasil diurutkan berdasarkan nilai.\n");
    }
}

int main() {
    int choice;
    struct Mahasiswa mhs;

    while (1) {
        printf("\n=== Menu Stack Nilai Mahasiswa ===\n");
        printf("1. Tambah Data Mahasiswa\n");
        printf("2. Hapus Data Mahasiswa\n");
        printf("3. Tampilkan Data Mahasiswa\n");
        printf("4. Urutkan Data Mahasiswa\n");
        printf("5. Keluar\n");
        printf("Pilih menu (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Masukkan NIM: ");
                scanf("%s", mhs.nim);
                printf("Masukkan Nama: ");
                scanf("%s", mhs.nama);
                printf("Masukkan Nilai: ");
                scanf("%f", &mhs.nilai);
                push(mhs);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                sort();
                break;
            case 5:
                printf("Terima kasih! Program selesai.\n");
                exit(0);
            default:
                printf("Pilihan tidak valid. Silakan pilih menu yang sesuai.\n");
        }
    }

    return 0;
}
