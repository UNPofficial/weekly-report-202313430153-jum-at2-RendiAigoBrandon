#include <stdio.h>

int main() {
	double nilai_tukar = 14250; // 1$ = Rp. 14.250
	double jumlah_rupiah = 2500000; // jumlah dalam Rp
	
	double jumlah_yang_ditukar = jumlah_rupiah / nilai_tukar;
	
	printf("Jumlah dollar yang diberikan = $%.2f\n", jumlah_yang_ditukar);
	
	return 0;
}