#include <stdio.h>

//Created by Rendi Aigo Brandon_23343082

// Fungsi untuk menghitung besar potongan berdasarkan total pembelian
float potong(float totalPembelian) {
    float diskon = 0;

    if (totalPembelian > 1000000 && totalPembelian <= 3000000) {
        diskon = 0.2 * totalPembelian; // Diskon 20%
    } else if (totalPembelian > 3000000) {
        diskon = 0.35 * totalPembelian; // Diskon 35%
    }

    return diskon;
}

int main() {
    float totalPembelian;

    // Meminta pengguna untuk memasukkan total pembelian
    printf("Program Hitung Potongan\n");
    printf("Total Pembelian (Rp.) : ");
    scanf("%f", &totalPembelian);

    // Menghitung besarnya diskon
    float diskon = potong(totalPembelian);

    // Menghitung besar yang harus dibayarkan setelah diskon
    float totalSetelahDiskon = totalPembelian - diskon;

    // Menampilkan hasil perhitungan
    printf("Besar Diskon : Rp. %.2f\n", diskon);
    printf("Besar Yang Harus Dibayarkan : Rp. %.2f\n", totalSetelahDiskon);

    return 0;
}
