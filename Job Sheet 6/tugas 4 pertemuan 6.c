#include <stdio.h>

// Fungsi untuk mengecek saldo
void cekSaldo(float saldo) {
    printf("Saldo Anda saat ini: Rp %.2f\n", saldo);
}

// Fungsi untuk melakukan setoran
float setoran(float saldo, float jumlah) {
    saldo += jumlah;
    printf("Setoran berhasil. Saldo Anda sekarang: Rp %.2f\n", saldo);
    return saldo;
}

// Fungsi untuk melakukan penarikan tunai
float penarikanTunai(float saldo, float jumlah) {
    if (saldo - jumlah < 50000) {
        printf("Saldo minimal harus disisakan Rp. 50.000. Penarikan tidak dapat dilakukan.\n");
    } else {
        saldo -= jumlah;
        printf("Penarikan tunai berhasil. Saldo Anda sekarang: Rp %.2f\n", saldo);
    }
    return saldo;
}

int main() {
    float saldo = 175000;  // Saldo awal
    int pilihan;
    float jumlah;

    // Menampilkan informasi awal
    printf("No Rek : 0123\n");
    printf("Nama Akun : Hatori\n");
    printf("Saldo ATM : Rp. %.2f\n\n", saldo);

    do {
        // Menampilkan menu ATM
        printf("ATM\n");
        printf("1) Cek Saldo\n");
        printf("2) Setoran\n");
        printf("3) Penarikan Tunai\n");
        printf("4) Exit\n");
        printf("Pilih menu (1-4): ");
        scanf("%d", &pilihan);

        // Menangani pilihan menu
        switch (pilihan) {
            case 1:
                cekSaldo(saldo);
                break;
            case 2:
                printf("Masukkan jumlah setoran: Rp ");
                scanf("%f", &jumlah);
                saldo = setoran(saldo, jumlah);
                break;
            case 3:
                printf("Masukkan jumlah penarikan tunai: Rp ");
                scanf("%f", &jumlah);
                saldo = penarikanTunai(saldo, jumlah);
                break;
            case 4:
                printf("Terima kasih. Sampai jumpa!\n");
                break;
            default:
                printf("Pilihan tidak valid. Silakan masukkan pilihan yang benar.\n");
        }
    } while (pilihan != 4);

    return 0;
}
