#include <stdio.h>
#include <stdlib.h>

// Created By Rendi Aigo brandon_23343082

typedef struct {
    char nama[25];
    int nik;
    char alamat[30];
    char status[25];
} ktp;

int main() {
    ktp myktp;
    
    printf("Nama\t: ");
    fgets(myktp.nama, sizeof(myktp.nama), stdin); //Menggunakan fgets() untuk membaca string dari input keyboard, karena gets() tidak aman dan rentan terhadap buffer overflow.
    fflush(stdin);

    printf("NIK \t: ");
    scanf("%i", &myktp.nik);
    fflush(stdin);

    printf("Alamat\t: ");
    fgets(myktp.alamat, sizeof(myktp.alamat), stdin);

    printf("Kewarganegaraan\t: ");
    fgets(myktp.status, sizeof(myktp.status), stdin);

    return 0;
}
