#include <stdio.h>

int main() {
    // Deklarasi variabel
    char namaPembeli[50], namaBarang[50];
    float hargaSatuan, hargaTotal;
    int jumlahBarang;

    // Meminta input dari pengguna
    printf("Nama Pembeli: ");
    fgets(namaPembeli, sizeof(namaPembeli), stdin);

    printf("Nama Barang: ");
    fgets(namaBarang, sizeof(namaBarang), stdin);

    printf("Harga Barang Satuan: ");
    scanf("%f", &hargaSatuan);

    printf("Jumlah Barang yang Dibeli: ");
    scanf("%d", &jumlahBarang);

    // Menghitung harga total
    hargaTotal = hargaSatuan * jumlahBarang;

    // Menampilkan struk pembelian
    printf("\n===== Struk Pembelian =====\n");
    printf("Nama Pembeli: %s", namaPembeli);
    printf("Nama Barang: %s", namaBarang);
    printf("Harga Satuan: %.2f\n", hargaSatuan);
    printf("Jumlah Barang: %d\n", jumlahBarang);
    printf("Harga Total: %.2f\n", hargaTotal);
    printf("===========================\n");

    return 0;
}
