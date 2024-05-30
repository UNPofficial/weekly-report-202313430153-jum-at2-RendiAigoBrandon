#include<stdio.h>

// Created By Rendi Aigo brandon_23343082

int main () {
	int nil[3]; // Deklarasi array dengan 3 elemen
	int rr;
	
	nil[0] = 80;
	nil[1] = 85; // Menginisialisasi nilai kedua
	nil[2] = 90;
	
	rr = (nil[0] + nil[1] + nil[2]) / 3;
	printf ("The average of the 3 grades is: %d", rr);
	       
     return 0;
} 
