#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Created by 23343082_Rendi Aigo Brandon

int main() {
    int secretNumber, guess, attempts = 0;
    char playAgain;

    // Menghasilkan seed berdasarkan waktu saat program dijalankan
    srand((unsigned)time(NULL));

    do {
        // Menghasilkan nomor acak antara 1 dan 20
        secretNumber = rand() % 20 + 1;

        printf("Tebak nomor antara 1 dan 20: ");

        do {
            scanf("%d", &guess);
            attempts++;

            if (guess < secretNumber) {
                printf("Nomor saya lebih besar!\n");
            } else if (guess > secretNumber) {
                printf("Nomor saya lebih kecil!\n");
            } else {
                printf("Selamat, Anda benar!\n");
                printf("Jumlah percobaan: %d\n", attempts);
            }
        } while (guess != secretNumber);

        // Meminta user apakah ingin bermain lagi
        printf("Apakah Anda ingin bermain lagi? (y/n): ");
        scanf(" %c", &playAgain);

        // Reset jumlah percobaan jika user ingin bermain lagi
        attempts = 0;

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Terima kasih telah bermain!\n");

    return 0;
}
