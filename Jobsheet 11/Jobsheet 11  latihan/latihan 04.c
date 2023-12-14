#include <stdio.h>
#include <stdlib.h>

//create by 23343082_rendi aigo brandon

void main(){
	char buff[255];
	char text[255];
	FILE *fptr;
	
	fptr = fopen("puisi2.txt", "w");
	
	printf("inputkan isi file : ");
	fgets(text, sizeof(text), stdin);
	
	fputs(text, fptr);
	
	printf("file berhasil ditulis\n");
	
	fclose(fptr);
}