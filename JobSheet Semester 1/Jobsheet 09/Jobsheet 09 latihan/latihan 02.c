#include <stdio.h>

//create by 23343082_rendi aigo brandon

void main(){
	//membat variabel
	int umur = 19;
	float tinggi = 175.6;
	
	//membuat pointer
	int *pointer_umur = &umur;
	int *pointer2 = &umur;
	float *p_tinggi = &tinggi;
	
    // mecetak alamat memori variabel
    printf ("alamat memori variabel 'umur' = %d\n", &umur);
    printf ("alamat memori variabel 'tinggi' = %d\n", &tinggi);
    // mencetak referensi alamat memori pointer
    printf ("referensi alamat memori *pointer umur = %d\n", pointer_umur);
    printf ("referensi alamat memori *pointer2 = %d\n", pointer2);
    printf ("referensi alamat memori*p_tinggi = %d\n", p_tinggi);
}