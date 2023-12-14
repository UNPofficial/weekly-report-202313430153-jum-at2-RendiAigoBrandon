#include <stdio.h>

int main() {
    // Deklarasi variabel
    float nilaiPresensi, nilaiPraktek, nilaiUTS, nilaiUAS;
    float bobotPresensi = 0.1, bobotPraktek = 0.2, bobotUTS = 0.3, bobotUAS = 0.4;
    float nilaiAkhir;

    // Memasukkan nilai presensi, praktek, UTS, dan UAS
    printf("Masukkan nilai presensi: ");
    scanf("%f", &nilaiPresensi);

    printf("Masukkan nilai praktek: ");
    scanf("%f", &nilaiPraktek);

    printf("Masukkan nilai UTS: ");
    scanf("%f", &nilaiUTS);

    printf("Masukkan nilai UAS: ");
    scanf("%f", &nilaiUAS);

    // Menghitung nilai akhir
    nilaiAkhir = (nilaiPresensi * bobotPresensi) + (nilaiPraktek * bobotPraktek) + (nilaiUTS * bobotUTS) + (nilaiUAS * bobotUAS);

    // Menampilkan nilai akhir
    printf("\nNilai Akhir: %.2f\n", nilaiAkhir);

    return 0;
}
