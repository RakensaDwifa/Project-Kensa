#include <stdio.h>
int main(){
    int total, bayar;
    system("cls");
    printf("\t\t====Program Menghitung Diskon Harga====\n");
    printf("===============================================================\n");
    printf("\nTotal belanja: ");
    scanf("%d",&total);
    if (total>=1000000){
        printf("Selamat anda mendapatkan diskon 30%%");
        bayar = total-(total*30/100);
        printf("\nTotal bayar: %d",bayar);
    }
    else if((total>=500000)&&(total<1000000)){
        printf("Selamat anda mendapatkan diskon 20%%");
        bayar = total-(total*20/100);
        printf("\nTotal bayar: %d",bayar);
    }
    else if((total>=100000)&&(total<500000)){
        printf("Selamat anda mendapatkan diskon 10%%");
        bayar = total-(total*10/100);
        printf("\nTotal bayar: %d",bayar);
    }
    else{
        bayar=total;
        printf("Total bayar: %d",bayar);
    }
}