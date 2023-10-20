#include <stdio.h>

int main() {
    // Input jumlah waktu dalam detik
    int totalDetik;
    printf("Masukkan jumlah waktu dalam detik: ");
    scanf("%d", &totalDetik);

    // Menghitung jam, menit, dan sisa detik
    int jam = totalDetik / 3600;
    int sisaDetik = totalDetik % 3600;
    int menit = sisaDetik / 60;
    int detik = sisaDetik % 60;

    // Menampilkan hasil output
    printf("Hasil Output: %d Jam, %d Menit, %d Detik\n", jam, menit, detik);

    return 0;
}
