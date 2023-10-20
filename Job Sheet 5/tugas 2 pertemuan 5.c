#include <stdio.h>

int main() {
    // Deklarasi variabel
    float totalPembelian, diskon, cashback, totalSetelahDiskon;

    // Memasukkan total pembelian dari pembeli
    printf("Masukkan total pembelian (Rp): ");
    scanf("%f", &totalPembelian);

    // Menghitung diskon sesuai dengan ketentuan
    if (totalPembelian <= 75000) {
        diskon = 0.05 * totalPembelian;
    } else if (totalPembelian <= 125000) {
        diskon = 0.15 * totalPembelian;
    } else {
        diskon = 0.25 * totalPembelian;
        cashback = 5000;  // Cashback Rp. 5.000 untuk total pembelian lebih dari Rp. 125.000
    }

    // Menghitung total pembayaran setelah diskon
    totalSetelahDiskon = totalPembelian - diskon + cashback;

    // Menampilkan struk pembelian
    printf("\n=== Struk Pembelian ===\n");
    printf("Total Pembelian: Rp %.2f\n", totalPembelian);
    printf("Diskon: Rp %.2f\n", diskon);
    printf("Cashback: Rp %.2f\n", cashback);
    printf("Total Pembayaran: Rp %.2f\n", totalSetelahDiskon);
    printf("=======================\n");

    return 0;
}
