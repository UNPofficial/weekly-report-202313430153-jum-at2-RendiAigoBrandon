#include <stdio.h>
#include <stdlib.h>

// Created By Rendi Aigo Brandon_23343082

// Fungsi untuk menampilkan bilangan Fibonacci hingga ke-n
void printFibonacci(int n) {
    int *fib = (int*)malloc(n * sizeof(int));
    
    if (fib == NULL) {
        printf("Gagal mengalokasikan memori");
        return;
    }

    fib[0] = 0;
    fib[1] = 1;

    printf("Bilangan Fibonacci pertama %d:\n", n);
    printf("%d ", fib[0]);
    printf("%d ", fib[1]);

    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        printf("%d ", fib[i]);
    }

    printf("\n");

    // Free memory setelah selesai digunakan
    free(fib);
}

// Fungsi untuk memeriksa apakah sebuah angka adalah bilangan prima
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

// Fungsi untuk menampilkan bilangan prima pertama hingga ke-n
void printPrimes(int n, int m) {
    int *primes = (int*)malloc(n * sizeof(int));
    
    if (primes == NULL) {
        printf("Gagal mengalokasikan memori");
        return;
    }

    int count = 0;
    int num = 2;

    printf("Bilangan Prima pertama %d:\n", n);
    while (count < n) {
        if (isPrime(num)) {
            primes[count++] = num;
            printf("%d ", num);
        }
        num++;
    }

    printf("\n");

    // Realloc untuk menyesuaikan ukuran memori sesuai input m
    primes = (int*)realloc(primes, m * sizeof(int));

    if (primes == NULL) {
        printf("Gagal mengalokasikan memori");
        return;
    }

    // Free memory setelah selesai digunakan
    free(primes);
}

int main() {
    int n, m;

    printf("Masukkan nilai n untuk bilangan Fibonacci: ");
    scanf("%d", &n);
    printFibonacci(n);

    printf("Masukkan nilai n untuk bilangan prima: ");
    scanf("%d", &n);
    printf("Masukkan nilai m untuk realokasi memori: ");
    scanf("%d", &m);
    printPrimes(n, m);

    return 0;
}
