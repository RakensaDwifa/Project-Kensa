#include <stdio.h>

void celciustofahrenheit();
void celciustoreamur();
void celciustokelvin();
void fahrenheittocelcius();
void fahrenheittoreamur();
void fahrenheittokelvin();
void reamurtocelcius();
void reamurtofahrenheit();
void reamurtokelvin();
void kelvintocelcius();
void kelvintofahrenheit();
void kelvintoreamur();

int main(){
    int pilihan_1, pilihan_2;

    system("cls");
    printf("\t\t*-*-*Program Konversi Suhu*-*-*\n");
    printf("\t\t\t Buatan Rakensa");
    printf("\n=====================================================================");
    printf("\n\nSilahkan pilih suhu");
    printf("\n1) Celcius\n2) Fahrenheit\n3) Reamur\n4) Kelvin\n5) Exit program");
    printf("\nPilih: ");
    scanf("%d",&pilihan_1);

    switch(pilihan_1){
        case 1:
        system("cls");
        printf("Anda telah memilih suhu celcius\n");
        printf("Silahkan pilih suhu yang akan dikonversikan");
        printf("\n\n1) Fahrenheit\n2) Reamur\n3) Kelvin\n4) Kembali");
        printf("\n\nSilahkan pilih: ");
        scanf("%d",&pilihan_2);
        switch(pilihan_2){
            case 1:
            celciustofahrenheit();
            break;
            case 2:
            celciustoreamur();
            break;
            case 3:
            celciustokelvin();
            break;
            case 4:
            main();
            break;
        }
        break;
        case 2:
        system("cls");
        printf("Anda telah memilih suhu fahrenheit\n");
        printf("Silahkan pilih suhu yang akan dikonversikan");
        printf("\n\n1) Celcius\n2) Reamur\n3) Kelvin\n4) Kembali");
        printf("\n\nSilahkan pilih: ");
        scanf("%d",&pilihan_2);
        switch(pilihan_2){
            case 1:
            fahrenheittocelcius();
            break;
            case 2:
            fahrenheittoreamur();
            break;
            case 3:
            fahrenheittokelvin();
            break;
            case 4:
            main();
            break;
        }
        break;
        case 3:
        system("cls");
        printf("Anda telah memilih suhu reamur\n");
        printf("Silahkan pilih suhu yang akan dikonversikan");
        printf("\n\n1) Celcius\n2) Fahrenheit\n3) Kelvin\n4) Kembali");
        printf("\n\nSilahkan pilih: ");
        scanf("%d",&pilihan_2);
        switch(pilihan_2){
            case 1:
            reamurtocelcius();
            break;
            case 2:
            reamurtofahrenheit();
            break;
            case 3:
            reamurtokelvin();
            break;
            case 4:
            main();
            break;
        }
        break;
        case 4:
        system("cls");
        printf("Anda telah memilih suhu kelvin\n");
        printf("Silahkan pilih suhu yang akan dikonversikan");
        printf("\n\n1) Celcius\n2) Fahrenheit\n3) Reamur\n4) Kembali");
        printf("\n\nSilahkan pilih: ");
        scanf("%d",&pilihan_2);
        switch(pilihan_2){
            case 1:
            kelvintocelcius();
            break;
            case 2:
            kelvintofahrenheit();
            break;
            case 3:
            kelvintoreamur();
            break;
            case 4:
            main();
            break;
        }
        break;
        case 5:
        printf("\t\tTerima kasih telah menggunakan program ini\n\t\t\t    Have a nice day ^_^");
        break;
    }
}

void celciustofahrenheit(){
    float celcius, fahrenheit;

    system("cls");
    printf("Masukkan suhu celcius: ");
    scanf("%f",&celcius);
    fahrenheit = (9*celcius/5)+32;
    printf("\nKonversi suhu celcius %3.2f ke fahrenheit adalah %3.2f\n\n",celcius,fahrenheit);
    system("pause");
    main();
}

void celciustoreamur(){
    float celcius, reamur;

    system("cls");
    printf("Masukkan suhu celcius: ");
    scanf("%f",&celcius);
    reamur = 4*celcius/5;
    printf("\nKonversi suhu celcius %3.2f ke reamur adalah %3.2f\n\n",celcius,reamur);
    system("pause");
    main();
}

void celciustokelvin(){
    float celcius, kelvin;

    system("cls");
    printf("Masukkan suhu celcius: ");
    scanf("%f",&celcius);
    kelvin = celcius+273.15;
    printf("\nKonversi suhu celcius %3.2f ke reamur adalah %3.2f\n\n",celcius,kelvin);
    system("pause");
    main();
}

void fahrenheittocelcius(){
    float celcius, fahrenheit;

    system("cls");
    printf("Masukkan suhu fahrenheit: ");
    scanf("%f",&fahrenheit);
    celcius = (fahrenheit-32)*5/9;
    printf("\nKonversi suhu fahrenheit %3.2f ke celcius adalah %3.2f\n\n",fahrenheit,celcius);
    system("pause");
    main();
}

void fahrenheittoreamur(){
    float reamur, fahrenheit;

    system("cls");
    printf("Masukkan suhu fahrenheit: ");
    scanf("%f",&fahrenheit);
    reamur = (fahrenheit-32)*4/9;
    printf("\nKonversi suhu fahrenheit %3.2f ke celcius adalah %3.2f\n\n",fahrenheit,reamur);
    system("pause");
    main();
}

void fahrenheittokelvin(){
    float kelvin, fahrenheit;

    system("cls");
    printf("Masukkan suhu fahrenheit: ");
    scanf("%f",&fahrenheit);
    kelvin = (fahrenheit-32)*5/9+273.15;
    printf("\nKonversi suhu fahrenheit %3.2f ke celcius adalah %3.2f\n\n",fahrenheit,kelvin);
    system("pause");
    main();
}

void reamurtocelcius(){
    float reamur, celcius;

    system("cls");
    printf("Masukkan suhu reamur: ");
    scanf("%f",&reamur);
    celcius= 5*reamur/4;
    printf("\nKonversi suhu reamur %3.2f ke celcius adalah %3.2f\n\n",reamur,celcius);
    system("pause");
    main();
}
void reamurtofahrenheit(){
    float reamur, fahrenheit;

    system("cls");
    printf("Masukkan suhu reamur: ");
    scanf("%f",&reamur);
    fahrenheit= 9*reamur/4+32;
    printf("\nKonversi suhu reamur %3.2f ke fahrenheit adalah %3.2f\n\n",reamur,fahrenheit);
    system("pause");
    main();
}
void reamurtokelvin(){
    float reamur, kelvin;

    system("cls");
    printf("Masukkan suhu reamur: ");
    scanf("%f",&reamur);
    kelvin= 5*reamur/4+273.15;
    printf("\nKonversi suhu reamur %3.2f ke kelvin adalah %3.2f\n\n",reamur,kelvin);
    system("pause");
    main();
}

void kelvintocelcius(){
    float celcius, kelvin;

    system("cls");
    printf("Masukkan suhu kelvin: ");
    scanf("%f",&kelvin);
    celcius= kelvin-273.15;
    printf("\nKonversi suhu kelvin %3.2f ke celcius adalah %3.2f\n\n",kelvin,celcius);
    system("pause");
    main();
}
void kelvintofahrenheit(){
    float fahrenheit, kelvin;

    system("cls");
    printf("Masukkan suhu kelvin: ");
    scanf("%f",&kelvin);
    fahrenheit= 9*(kelvin-273.15)/5+32;
    printf("\nKonversi suhu kelvin %3.2f ke fahrenheit adalah %3.2f\n\n",kelvin,fahrenheit);
    system("pause");
    main();
}
void kelvintoreamur(){
    float reamur, kelvin;

    system("cls");
    printf("Masukkan suhu kelvin: ");
    scanf("%f",&kelvin);
    reamur= 5*kelvin/4;
    printf("\nKonversi suhu kelvin %3.2f ke reamur adalah %3.2f\n\n",kelvin,reamur);
    system("pause");
    main();
}