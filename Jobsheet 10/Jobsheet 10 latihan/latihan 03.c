#include <stdio.h>

//create by 23343082_rendi aigo brandon

enum hari {SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU, MINGGU};

void main() {
    enum hari sekarang;
    sekarang = RABU;
    
	printf("Ukuran variabel enum: %d bytes\n", sizeof(sekarang));
}