#include <stdio.h>

// Created by 23343082_Rendi Aigo Brandon

int main() {
	//deklarasi pak :)
    char nama[100];
    char nim[20];
    char prodi[50];
    char fakultas[50];
    double nilaiPraktikum, nilaiUTS, nilaiUAS, nilaiAkhir;

    //input dari pengguna
    printf("Masukkan Nama Kamu =  ");
    fgets(nama, sizeof(nama), stdin);
    
    printf("Masukkan Nim Kamu =  ");
    fgets(nim, sizeof(nim), stdin);
    
    printf("Masukkan Prodi Kamu = ");
    fgets(prodi, sizeof(prodi), stdin);

    printf("Masukkan Fakulitas Kamu = ");
    fgets(fakultas, sizeof(fakultas), stdin);

    printf("Masukkan Nilai Pratikum Kamu = ");
    scanf("%lf", &nilaiPraktikum);
    
    printf("Masukkan Nilai UTS Kamu = ");
    scanf("%lf", &nilaiUTS);
    
    printf("Masukkan Nilai UAS Kamu =");
    scanf("%lf", &nilaiUAS);

    // Menghitung nilai akhir
    nilaiAkhir = 0.3 * nilaiPraktikum + 0.3 * nilaiUTS + 0.4 * nilaiUAS;

    // Menampilkan output 
    printf("\nNama = %s", nama);
    printf("NIM = %s", nim);
    printf("Prodi = %s", prodi);
    printf("Fakultas =  %s", fakultas);
    printf("Nilai Praktikum = %.2lf\n", nilaiPraktikum);
    printf("Nilai UTS = %.2lf\n", nilaiUTS);
    printf("Nilai UAS =  %.2lf\n", nilaiUAS);
    printf("Nilai Akhir = %.2lf\n", nilaiAkhir);

    return 0;
}
