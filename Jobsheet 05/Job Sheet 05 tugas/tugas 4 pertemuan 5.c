#include <stdio.h>

int main() {
    // Deklarasi variabel
    float nilaiKehadiran, nilaiTugas, nilaiUTS, nilaiUAS, nilaiAkhir;
    char grade;

    // Memasukkan nilai mahasiswa
    printf("Masukkan nilai kehadiran (0-100): ");
    scanf("%f", &nilaiKehadiran);

    printf("Masukkan nilai tugas (0-100): ");
    scanf("%f", &nilaiTugas);

    printf("Masukkan nilai UTS (0-100): ");
    scanf("%f", &nilaiUTS);

    printf("Masukkan nilai UAS (0-100): ");
    scanf("%f", &nilaiUAS);

    // Menghitung nilai akhir
    nilaiAkhir = 0.2 * nilaiKehadiran + 0.2 * nilaiTugas + 0.25 * nilaiUTS + 0.35 * nilaiUAS;

    // Menentukan grade berdasarkan rentang nilai akhir
    if (nilaiAkhir >= 0 && nilaiAkhir <= 44) {
        grade = 'E';
        printf("Maaf, anda tidak lulus!\n");
    } else if (nilaiAkhir <= 55) {
        grade = 'D';
        printf("Anda lulus, tingkatkan lagi untuk kedepannya!\n");
    } else if (nilaiAkhir <= 65) {
        grade = 'C';
        printf("Anda lulus, tingkatkan terus belajarnya!\n");
    } else if (nilaiAkhir <= 75) {
        grade = 'B';
        printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
    } else if (nilaiAkhir <= 80) {
        grade = 'B';
        printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
    } else if (nilaiAkhir <= 85) {
        grade = 'B';
        printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
    } else if (nilaiAkhir <= 90) {
        grade = 'A';
        printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan!\n");
    } else {
        grade = 'A';
        printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan!\n");
    }

    // Menampilkan nilai akhir dan grade
    printf("Nilai Akhir: %.2f\n", nilaiAkhir);
    printf("Grade: %c\n", grade);

    return 0;
}
