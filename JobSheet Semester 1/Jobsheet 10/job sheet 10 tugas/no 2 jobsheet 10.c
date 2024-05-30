#include <stdio.h>

//Created by 23343082_Rendi Aigo Brandon

// Struktur untuk menyimpan informasi zodiak
struct Zodiak {
    char nama[12];
    int awal_tanggal;
    int awal_bulan;
    int akhir_tanggal;
    int akhir_bulan;
};

// Fungsi untuk menentukan zodiak berdasarkan tanggal lahir
void tentukanZodiak(int tanggal, int bulan, struct Zodiak zodiak[], int jumlahZodiak) {
    for (int i = 0; i < jumlahZodiak; i++) {
        if ((bulan == zodiak[i].awal_bulan && tanggal >= zodiak[i].awal_tanggal) ||
            (bulan == zodiak[i].akhir_bulan && tanggal <= zodiak[i].akhir_tanggal)) {
            printf("Zodiak Anda adalah: %s\n", zodiak[i].nama);
            return;
        }
    }
    printf("Tanggal lahir tidak valid.\n");
}

int main() {
    // Inisialisasi array struktur zodiak
    struct Zodiak zodiak[] = {
        {"CAPRICORN", 22, 12, 19, 1},
        {"AQUARIUS", 20, 1, 18, 2},
        {"PISCES", 19, 2, 20, 3},
        {"ARIES", 21, 3, 19, 4},
        {"TAURUS", 20, 4, 20, 5},
        {"GEMINI", 21, 5, 20, 6},
        {"CANCER", 21, 6, 22, 7},
        {"LEO", 23, 7, 22, 8},
        {"VIRGO", 23, 8, 22, 9},
        {"LIBRA", 23, 9, 22, 10},
        {"SCORPIO", 23, 10, 21, 11},
        {"SAGITTARIUS", 22, 11, 21, 12}
    };

    int tanggal, bulan, tahun;

    printf("Tanggal Lahir Anda [tgl-bln-tahun] : ");
    scanf("%d-%d-%d", &tanggal, &bulan, &tahun);

    // Memanggil fungsi untuk menentukan zodiak
    tentukanZodiak(tanggal, bulan, zodiak, sizeof(zodiak) / sizeof(zodiak[0]));

    return 0;
}
