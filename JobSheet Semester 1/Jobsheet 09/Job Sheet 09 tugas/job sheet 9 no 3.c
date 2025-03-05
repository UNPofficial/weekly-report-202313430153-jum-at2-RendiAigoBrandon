#include <stdio.h>

int main() {
    // Bagian A
    printf("Bagian A:\n");
    int Lesley_A = 57082;
    int Layla_A = Lesley_A;
    int Balmond_A = Layla_A + 1;

    // a) Nilai Layla_A
    printf("a) Nilai Layla_A: %d\n", Layla_A);

    // b) Nilai Balmond_A
    printf("b) Nilai Balmond_A: %d\n", Balmond_A);
    printf("\n");

    // Bagian B
    printf("Bagian B:\n");
    int Lesley_B = 57082;
    int *Layla_B = &Lesley_B;
    int Balmond_B = *Layla_B + 1;

    // a) Nilai Layla_B
    printf("a) Nilai Layla_B: %d\n", *Layla_B);

    // b) Nilai Balmond_B
    printf("b) Nilai Balmond_B: %d\n", Balmond_B);

    return 0;
}
