#include <stdio.h>
#include <math.h>

int main() {
    // Deklarasi variabel
    char pilihan;
    float luasPermukaan;

    // Menampilkan menu pilihan
    printf("Pilih bentuk untuk menghitung luas permukaan:\n");
    printf("a) Bola\n");
    printf("b) Kubus\n");
    printf("c) Balok\n");
    printf("d) Tabung\n");
    printf("Pilihan: ");
    scanf(" %c", &pilihan);  // Spasi sebelum %c untuk menghindari masalah karakter ganda

    // Menggunakan switch case untuk memilih rumus luas permukaan
    switch (pilihan) {
        case 'a':
            {
                float jariJari;
                printf("Masukkan jari-jari bola: ");
                scanf("%f", &jariJari);
                luasPermukaan = 4 * M_PI * pow(jariJari, 2);
                printf("Luas Permukaan Bola: %.2f\n", luasPermukaan);
                break;
            }
        case 'b':
            {
                float sisi;
                printf("Masukkan panjang sisi kubus: ");
                scanf("%f", &sisi);
                luasPermukaan = 6 * pow(sisi, 2);
                printf("Luas Permukaan Kubus: %.2f\n", luasPermukaan);
                break;
            }
        case 'c':
            {
                float panjang, lebar, tinggi;
                printf("Masukkan panjang balok: ");
                scanf("%f", &panjang);
                printf("Masukkan lebar balok: ");
                scanf("%f", &lebar);
                printf("Masukkan tinggi balok: ");
                scanf("%f", &tinggi);
                luasPermukaan = 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);
                printf("Luas Permukaan Balok: %.2f\n", luasPermukaan);
                break;
            }
        case 'd':
            {
                float jariJariTabung, tinggiTabung;
                printf("Masukkan jari-jari tabung: ");
                scanf("%f", &jariJariTabung);
                printf("Masukkan tinggi tabung: ");
                scanf("%f", &tinggiTabung);
                luasPermukaan = 2 * M_PI * jariJariTabung * (jariJariTabung + tinggiTabung);
                printf("Luas Permukaan Tabung: %.2f\n", luasPermukaan);
                break;
            }
        default:
            printf("Pilihan tidak valid.\n");
    }

    return 0;
}
