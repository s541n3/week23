#include<stdio.h>
int main (){
	int baris, i, j, k;
	printf("Masukkan jumlah baris: ");
	scanf("%d", &baris);
	for (i=1 ; i<=baris ; i++){ // syaratin baris != 0
		for (j=i ; j<baris ; j++){
			printf(" ");
		}
		for (k=1 ; k<=i ; k++){
			printf("*");
		}
		printf("\n");
	}
	return 0;		
}