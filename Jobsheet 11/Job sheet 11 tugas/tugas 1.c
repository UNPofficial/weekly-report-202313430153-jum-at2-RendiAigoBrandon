#include <stdio.h>

//create by 23343082_rendi aigo brandon 

int main() {
    FILE *file;
    int jumlahMahasiswa;

    // Input jumlah mahasiswa
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlahMahasiswa);

    // Membuka file untuk penulisan
    file = fopen("datamahasiswa.txt", "w");

    if (file == NULL) {
        printf("Gagal membuka file.");
        return 1;
    }

    // Loop untuk menginput dan menyimpan biodata mahasiswa
    for (int i = 1; i <= jumlahMahasiswa; i++) {
        fprintf(file, "Masukan data mahasiswa ke-%d\n", i);
        
        char nama[100], nim[20], jurusan[50], prodi[50];

        // Input data mahasiswa dengan fgets
        printf("Nama: ");
        getchar(); // Membersihkan newline karakter dari buffer
        fgets(nama, sizeof(nama), stdin);
        fprintf(file, "Nama: ");
        fputs(nama, file);

        printf("NIM: ");
        fgets(nim, sizeof(nim), stdin);
        fprintf(file, "NIM: ");
        fputs(nim, file);

        printf("Jurusan: ");
        fgets(jurusan, sizeof(jurusan), stdin);
        fprintf(file, "Jurusan: ");
        fputs(jurusan, file);

        printf("Program Studi: ");
        fgets(prodi, sizeof(prodi), stdin);
        fprintf(file, "Program Studi: ");
        fputs(prodi, file);

        fprintf(file, "\n");
    }

    // Menutup file setelah selesai
    fclose(file);

    printf("Data mahasiswa telah disimpan dalam datamahasiswa.txt.\n");

    return 0;
}
