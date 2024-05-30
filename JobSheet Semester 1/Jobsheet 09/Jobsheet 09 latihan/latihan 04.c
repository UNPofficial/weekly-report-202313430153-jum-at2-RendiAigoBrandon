#include <stdio.h>

//create by 23343082_rendi aigo brandon

void main () {
    // membuat variabel score
    int score = 0;

    // membuat pointer dan referensikan dengan alamat
    // dari variabel score
    int *p_score = &score;

    // mengakses data variabel score dari pointer
    printf ("isi *P_score = %d\n", *p_score);
    
	printf ("isi score awal = %d\n", score);

    // mengubah data variabel score dari pointer
    *p_score = 5;

    // melihat isi variabel score
    printf ("isi score setelah diubah = %d\n", score);
}