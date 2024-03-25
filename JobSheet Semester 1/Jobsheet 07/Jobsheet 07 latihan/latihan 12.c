#include <stdio.h>

//create by 23343082_rendi aigo brandon

void main () {
    char strl [] = "Agariadne";
    char str2 [] = "Agariadne";
    int hasil;

    // membandingkan string
    hasil = strcmp (strl, str2);

    if (hasil ==0) {
        printf ("strl dan str2 sama");
    } else {
        printf ("strl dan str2 berbeda");
    }
}
