#include <stdio.h>
#include <string.h>

//Created By Rendi Aigo Brandon_2343082

// Mendefinisikan struktur data mahasiswa
struct Mahasiswa {
    char NIM[20];
    char Nama[50];
    char TanggalLahir[15];
    float IPK;
};

// Fungsi untuk input data mahasiswa
void inputDataMahasiswa(struct Mahasiswa *mhs) {
    printf("Masukkan NIM: ");
    fgets(mhs->NIM, sizeof(mhs->NIM), stdin);
    mhs->NIM[strcspn(mhs->NIM, "\n")] = '\0'; // Menghapus karakter newline

    printf("Masukkan Nama: ");
    fgets(mhs->Nama, sizeof(mhs->Nama), stdin);
    mhs->Nama[strcspn(mhs->Nama, "\n")] = '\0'; // Menghapus karakter newline

    printf("Masukkan Tanggal Lahir (dd/mm/yyyy): ");
    fgets(mhs->TanggalLahir, sizeof(mhs->TanggalLahir), stdin);
    mhs->TanggalLahir[strcspn(mhs->TanggalLahir, "\n")] = '\0'; // Menghapus karakter newline

    printf("Masukkan IPK: ");
    scanf("%f", &mhs->IPK);
    getchar(); // Membersihkan buffer keyboard
}

// Fungsi untuk menampilkan data mahasiswa
void tampilkanDataMahasiswa(const struct Mahasiswa *mhs) {
    printf("NIM: %s\n", mhs->NIM);
    printf("Nama: %s\n", mhs->Nama);
    printf("Tanggal Lahir: %s\n", mhs->TanggalLahir);
    printf("IPK: %.2f\n", mhs->IPK);
}

int main() {
    struct Mahasiswa mhs1;

    printf("=== Input Data Mahasiswa ===\n");
    inputDataMahasiswa(&mhs1);

    printf("\n=== Data Mahasiswa ===\n");
    tampilkanDataMahasiswa(&mhs1);

    return 0;
}
