#include <stdio.h>
int main(){
    int baris, spasi, i, j, k, l;
    printf("Masukkan jumlah baris: ");
    scanf("%d", &baris);

    for(i=1;i<=baris;i++){
        for(j=i;j<=l;j++){
            printf(" ");
        }
        for(k=1;k<=(2*i - 1);k++){
            printf("*");
        }
        l++;
        printf("\n");
    }
    
return 0;
}