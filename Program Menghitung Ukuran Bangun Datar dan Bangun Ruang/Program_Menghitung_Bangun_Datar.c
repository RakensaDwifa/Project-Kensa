#include <stdio.h>
void BangunDatar();
void Bangunruang();
void KelilingBD();
void VolumeBR();
void LuasBD();
void LuasBR();
void Lpersegi();
void Lpersegipanjang();
void Lsegitiga();
void Ltrapesium();
void Lbelahketupat();
void Llingkaran();
void Ljajargenjang();
void Kpersegi();
void Kpersegipanjang();
void Ksegitiga();
void Ktrapesium();
void Kbelahketupat();
void Klingkaran();
void Kjajargenjang();
void Lkubus();
void Lbalok();
void Llimassegiempat();
void Llimassegitiga();
void Lprismasegitiga();
void Ltabung();
void Lkerucut();
void Lbola();
void Vkubus();
void Vbalok();
void Vlimassegiempat();
void Vlimassegitiga();
void Vprismasegitiga();
void Vtabung();
void Vkerucut();
void Vbola();


int main(){
    int pilihan;

    system("cls");
    printf("\t\tProgram Menghitung Luas dan Keliling\n\t\t   Bangun Datar dan Bangun Ruang\n=====================================================================\n\n");
    printf("1) Bangun datar\n2) Bangun ruang\n3) Exit");
    printf("\n\nPilih: ");
    scanf("%d",&pilihan);
    switch (pilihan){
        case 1: 
        BangunDatar();
        break;
        case 2: 
        Bangunruang();
        break;
        case 3: 
        system("cls");
            printf("\t\tTerima kasih telah menggunakan program ini\n\t\t\t   Have a nice day ^_^");
            break;
    }
    return 0;
}

void BangunDatar(){
    int pilihan;
    
    system ("cls");
    printf("\t\tOperasi Hitung Bangun Datar");
    printf("\n===========================================================");
    printf("\n\n1) Hitung keliling\n2) Hitung Luas\n3) Kembali");
    printf("\n\nPilih: ");
    scanf("%d",&pilihan);

    switch(pilihan){
        case 1:
        KelilingBD();
        break;
        case 2:
        LuasBD();
        break;
        case 3:
        main();
        break;
    }
}

void LuasBD(){
    int pilihan;

    system("cls");
    printf("\t\tSilahkan pilih bangun datar yang akan dihitung");
    printf("\n==============================================================================");
    printf("\n\n1) Persegi\n2) Persegi panjang\n3) Segitiga\n4) Trapesium\n5) Belah ketupat\n6) Lingkaran\n7) Jajargenjang\n8) Kembali");
    printf("\n\nPilih: ");
    scanf("%d",&pilihan);
    switch(pilihan){
        case 1: 
        Lpersegi();
        break;
        case 2: 
        Lpersegipanjang();
        break;
        case 3: 
        Lsegitiga();
        break;
        case 4: 
        Ltrapesium();
        break;
        case 5: 
        Lbelahketupat();
        break;
        case 6: 
        Llingkaran();
        break;
        case 7:
        Ljajargenjang();
        break;
        case 8:
        BangunDatar();
    }
}

void Lpersegi(){
    int luas_persegi, panjang_persegi;
    
    system("cls");
    printf("\n\nMasukkan panjang segitiga persegi(cm): ");
    scanf("%d",&panjang_persegi);
    luas_persegi = panjang_persegi * panjang_persegi;
    printf("\nLuas persegi adalah %d cm^2",luas_persegi);
    printf("\n\nTerima kasih telah menggunakan program ini\nHave a nice day ^_^\n\n");
    system("pause");
    main();
}

void Lpersegipanjang(){
    int luas_persegi_panjang, panjang, lebar;

    system("cls");
    printf("\t\t====Program Menghitung Luas Persegi Panjang====\n\n");
    printf("Masukkan panjang persegi(cm): ");
    scanf("%d",&panjang);
    printf("Masukkan lebar persegi(cm): ");
    scanf("%d",&lebar);
    luas_persegi_panjang = panjang * lebar;
    printf("\nLuas persegi panjang adalah %d cm^2",luas_persegi_panjang);
    printf("\n\nTerima kasih telah menggunakan program ini\nHave a nice day^_^\n\n");
    system("pause");
    main();
}

void Lsegitiga(){
    float luas_segitiga, alas, tinggi;

    system("cls");
    printf("\t\t====Program Menghitung Luas Segitiga====\n\n");
    printf("Masukkan alas segitiga(cm): ");
    scanf("%f",&alas);
    printf("Masukkan tinggi segitiga(cm): ");
    scanf("%f",&tinggi);
    luas_segitiga = 0.5 * (alas * tinggi);
    printf("\nLuas segitiga adalah %.2f cm^2",luas_segitiga);
    printf("\n\nTerima kasih telah menggunakan program ini\nHave a nice day ^_^\n\n");
    system("pause");
    main();
}

void Ltrapesium(){
    float luas_trapesium, panjang_sisiatas, panjang_sisibawah, tinggi;

    system("cls");
    printf("\t\t====Program Menghitung Luas Trapesium====\n\n");
    printf("Masukkan panjang segitiga sejajar atas(cm): ");
    scanf("%f",&panjang_sisiatas);
    printf("Masukkan panjang segitiga sejajar bawah(cm): ");
    scanf("%f",&panjang_sisibawah);
    printf("Masukkan tinggi trapesium(cm): ");
    scanf("%f",&tinggi);
    luas_trapesium = 0.5 * (panjang_sisiatas + panjang_sisibawah) * tinggi;
    printf("\nLuas trapesium adalah %.2f cm^2", luas_trapesium);
    printf("\n\nTerima kasih telah menggunakan program ini\nhave a nice day ^_^\n\n");
    system("pause");
    main();
}

void Lbelahketupat(){
    float luas_belah_ketupat, diagonal1, diagonal2;
    system("cls");
    printf("\t\t====Program Menghitung Luas Belah Ketupat====\n\n");
    printf("Masukkan panjang diagonal 1(cm): ");
    scanf("%f",&diagonal1);
    printf("Masukkan Panjang diagonal 2(cm): ");
    scanf("%f",&diagonal2);
    luas_belah_ketupat = 0.5 * (diagonal1 * diagonal2);
    printf("\nLuas belah ketupat adalah %.2f cm^2", luas_belah_ketupat);
    printf("\n\nTerima kasih telah menggunakan program ini\nHave a nice day ^_^\n\n");
    system("pause");
    main();
}

void Llingkaran(){
#define phi 3.14

    float luas_lingkaran, jari_jari;
    system("cls");
    printf("\t\t====Program Menghitung Luas Lingkaran====\n\n");
    printf("Masukkan jari-jari lingkaran(cm): ");
    scanf("%f",&jari_jari);
    luas_lingkaran = phi * jari_jari * jari_jari;
    printf("\nLuas lingkaran adalah %.2f cm^2", luas_lingkaran);
    printf("\n\nTerima kasih telah menggunakan program ini\nHave a nice day^_^\n\n");
    system("pause");
    main();
}

void Ljajargenjang(){
    float luas, alas, tinggi;

    system("cls");
    printf("\t\t====Program Menghitung Luas Jajargenjang====\n\n");
    printf("Masukkan panjang alas jajargenjang(cm): ");
    scanf("%f",&alas);
    printf("Masukkan tinggi jajargenjang(cm): ");
    scanf("%f",&tinggi);
    luas = alas * tinggi * 0.5;
    printf("\nLuas jajargenjang adalah %.2f cm^2",luas);
    printf("\n\nTerima kasih telah menggunakan program ini\nHave a nice day ^_^\n\n");
    system("pause");
    main();
}

void KelilingBD(){
    int pilihan;

    system("cls");
    printf("\t\tSilahkan pilih bangun datar yang akan dihitung\n");
    printf("================================================================================");
    printf("\n\n1) Persegi\n2) Persegi panjang\n3) Segitiga\n4) Trapesium\n5) Belah ketupat\n6) Lingkaran\n7) jajargenjang\n8) Kembali");
    printf("\n\nPilih: ");
    scanf("%d",&pilihan);
    switch(pilihan){
        case 1: 
        Kpersegi();
        break;
        case 2: 
        Kpersegipanjang();
        break;
        case 3: 
        Ksegitiga();
        break;
        case 4: 
        Ktrapesium();
        break;
        case 5: 
        Kbelahketupat();
        break;
        case 6: 
        Klingkaran();
        break;
        case 7: 
        Kjajargenjang();
        break;
        case 8: 
        BangunDatar();
        break;
    }
}

void Kpersegi(){
    int Kpersegi, sisi_persegi;

    system("cls");
    printf("\t\t====Program Menghitung Keliling Persegi====\n\n");
    printf("Masukkan panjang segitiga persegi(cm): ");
    scanf("%d",&sisi_persegi);
    Kpersegi = sisi_persegi * 4;
    printf("\nKeliling persegi adalah %d cm", Kpersegi);
    printf("\n\nTerima kasih telah menggunakan program ini\nHave a nice day ^_^\n\n");
    system("pause");
    main();
}

void Kpersegipanjang(){
    int KP, panjangPP, lebarPP;

    system("cls");
    printf("\t\t====Program Menghitung Keliling Persegi Panjang====\n\n");
    printf("Masukkan panjang segitiga persegi(cm): ");
    scanf("%d",&panjangPP);
    printf("Masukkkan lebar segitiga persegi(cm): ");
    scanf("%d",&lebarPP);
    KP = (panjangPP * 2) + (lebarPP * 2);
    printf("\nKeliling persegi panjang adalah %d cm", KP);
    printf("\n\nTerima kasih telah menggunakan program ini\nHave a nice day ^_^\n\n");
    system("pause");
    main();
}

void Ksegitiga(){
    int Ksegitiga, sisi_segitiga;

    system("cls");
    printf("\t\t====Program Menghitung Keliling Segitiga====\n\n");
    printf("Masukkan panjang segitiga segitiga(cm): ");
    scanf("%d",&sisi_segitiga);
    Ksegitiga = sisi_segitiga * 3;
    printf("\nKeliling segitiga adalah %d cm", Ksegitiga);
    printf("\n\nTerima kasih telah menggunakan program ini\nHave a nice day ^_^\n\n");
    system("pause");
    main();
}

void Ktrapesium(){
    int Ktrapesium, sisi_atas, sisi_bawah, sisi_samping;

    system("cls");
    printf("\t\t====Program Menghitung Keliling Trapesium\n\n");
    printf("Masukkan panjang segitiga sejajar atas trapesium(cm): ");
    scanf("%d",&sisi_atas);
    printf("Masukkan panjang segitiga sejajar bawah trapesium(cm): ");
    scanf("%d",&sisi_bawah);
    printf("Masukkan panjang segitiga samping trapesium: ");
    scanf("%d",&sisi_samping);
    Ktrapesium = sisi_atas + sisi_bawah + (2 * sisi_samping);
    printf("\nkeliling trapesium adalah %d cm",Ktrapesium);
    printf("\n\nTerima kasih telah menggunakan program ini\nHave a nice day ^_^\n\n");
    system("pause");
    main();
}

void Kbelahketupat(){
    int KBK, sisiBK;

    system("cls");
    printf("\t\t====Program Menghitung Keliling Belah Ketupat===\n\n");
    printf("Masukkan panjang segitiga belah ketupat(cm): ");
    scanf("%d",&sisiBK);
    KBK = 4 * sisiBK;
    printf("\nKeliling belah ketupat adalah %d cm",KBK);
    printf("\n\nTerima kasih telah menggunakan program ini\nHave a nice day ^_^\n\n");
    system("pause");
    main();
}

void Klingkaran(){
    #define phi 3.14
    float KL, jari_jari;

    system("cls");
    printf("\t\t====Program Menghitung Keliling Lingkaran====\n\n");
    printf("Masukkan jari-jari lingkaran(cm): ");
    scanf("%f",&jari_jari);
    KL = 2 * phi * jari_jari;
    printf("\nKeliling lingkaran adalah %.2f cm",KL);
    printf("\n\nTerima kasih telah menggunakan program ini\n Have a nice day ^_^\n\n");
    system("pause");
    main();
}

void Kjajargenjang(){
    int keliling, alas, sisi_samping;

    system("cls");
    printf("\t\t====Program Menghitung Keliling Jajargenjang====\n\n");
    printf("Masukkan panjang alas jajargenjang(cm): ");
    scanf("%d",&alas);
    printf("Masukkan panjang segitiga samping(cm): ");
    scanf("%d",&sisi_samping);
    keliling = (2 * alas) + (2 * sisi_samping);
    printf("\nKeliling jajargenjang adalah %d cm",keliling);
    printf("\n\nTerima kasih telah menggunakan program ini\nHave a nice day ^_^\n\n");
    system("pause");
    main();
}

void Bangunruang(){
    int pilihan;

    system("cls");
    printf("\t\tOperasi Hitung Bangun Ruang\n");
    printf("==============================================================");
    printf("\n\n1) Hitung Volume\n2) Hitung luas\n3) Kembali");
    printf("\n\nPilih: ");
    scanf("%d",&pilihan);
    switch(pilihan){
        case 1:
        VolumeBR();
        break;
        case 2:
        LuasBR();
        break;
        case 3:
        main();
        break;
    }
}

void LuasBR(){
    int pilihan;

    system("cls");
    printf("\t\tSilahkan pilih bangun ruang yang akan dihitung");
    printf("\n==============================================================================");
    printf("\n\n1) Kubus\n2) Balok\n3) Prisma segitiga\n4) Limas segitiga\n5) limas segiempat\n6) tabung\n7) kerucut\n8) Bola\n9) Kembali");
    printf("\n\nPilih: ");
    scanf("%d",&pilihan);
    switch(pilihan){
        case 1:
        Lkubus();
        break;
        case 2:
        Lbalok();
        break;
        case 3:
        Lprismasegitiga();
        break;
        case 4:
        Llimassegitiga();
        break;
        case 5:
        Llimassegiempat();
        break;
        case 6:
        Ltabung();
        break;
        case 7:
        Lkerucut();
        break;
        case 8:
        Lbola();
        break;
        case 9:
        Bangunruang();
        break;
    }
}

void Lkubus(){
    int luas, rusuk;

    system("cls");
    printf("\t\t====Program Menghitung Luas Kubus====\n\n");
    printf("Masukkan panjang rusuk kubus(cm): ");
    scanf("%d",&rusuk);
    luas = 6 * rusuk;
    printf("\nLuas kubus adaah %d cm^2",luas);
    printf("\n\nTerima kasih telah menggunakan program ini\nHave a nice day^_^\n\n");
    system("pause");
    main();
}

void Lbalok(){
    int luas, panjang, lebar, tinggi;

    system("cls");
    printf("\t\t====Program Menghitung Luas Balok====\n\n");
    printf("Masukkan panjang balok(cm): ");
    scanf("%d",&panjang);
    printf("Masukan lebar balok(cm): ");
    scanf("%d",&lebar);
    printf("Masukkan tinggi balok(cm): ");
    scanf("%d",&tinggi);
    luas = 2 * (panjang * lebar) + 2 * (panjang * tinggi) + 2 * (lebar + tinggi);
    printf("\nLuas balok adalah %d cm^2",luas);
    printf("\n\nTerima kasih telah menggunakan program ini\nHave a nice day^_^\n\n");
    system("pause");
    main();
}

void Llimassegitiga(){
    int luas, luas_segitiga;

    system("cls");
    printf("\t\t====Program Menghitung Luas Limas Segitiga====\n\n");
    printf("Masukkan luas segitiga(cm^2): ");
    scanf("%d",luas_segitiga);
    luas = 4 * luas_segitiga;
    printf("\n Luas limas segitiga adalah %d cm^2",luas);
    printf("\n\nTerima kasih telah menggunakan program ini\nHave a nice day^_^\n\n");
    system("pause");
    main();
}

void Llimassegiempat(){
    int luas, luas_segitiga;

    system("cls");
    printf("\t\t====Program Menghitung Luas Limas Segiempat====\n\n");
    printf("Masukkan luas segiempat(cm^2): ");
    scanf("%d",luas_segitiga);
    luas = 5 * luas_segitiga;
    printf("\n Luas limas segiempat adalah %d cm^2",luas);
    printf("\n\nTerima kasih telah menggunakan program ini\nHave a nice day^_^\n\n");
    system("pause");
    main();
}

void Lprismasegitiga(){
    int luas, segitiga, tinggi;

    system("cls");
    printf("\t\t====Program Menghitung Luas Prisma Segitiga====\n\n");
    printf("Masukkan keliing segitga(cm^2): ");
    scanf("%d",&segitiga);
    printf("Masukkan tinggi prisma: ");
    scanf("%d",&tinggi);
    luas = (segitiga + segitiga + segitiga) * tinggi;
    printf("\nLuas prisma segitiga adalah %d cm^2",luas);
    printf("\n\nTerima kasih telah menggunakan program ini\nHave a nice day ^_^\n\n");
    system("pause");
    main();
}

void Ltabung(){
    #define phi 3.14
    float selimut, permukaan, jari_jari, tinggi;
    int pilihan;
    system("cls");
    printf("\t\t====Program Menghitung Luas Tabung===\n\n");
    printf("1) Hitung luas selimut tabung\n2) Hitung luas permukaan tabung\n");
    printf("\nPilih: ");
    scanf("%d",&pilihan);
    switch(pilihan){
        case 1: 
        printf("Masukkan jari-jari tabung(cm): ");
        scanf("%f",&jari_jari);
        printf("Masukkan tinggi tabung(cm): ");
        scanf("%f",&tinggi);
        selimut = 2 * phi * jari_jari * tinggi;
        printf("\nLuas selimut tabung adalah %.2f cm^2",selimut);
        printf("\n\nTerima kasih telah menggunakan program ini\nHave a nice day ^_^\n\n");
        system("pause");
        main();
        break;

        case 2: 
        printf("Masukkan jari-jari tabung(cm): ");
        scanf("%d",&jari_jari);
        printf("Masukkan tinggi tabung(cm): ");
        scanf("%f",&tinggi);
        selimut = (2 * phi * jari_jari * tinggi) + (2 * phi * jari_jari * jari_jari);
        printf("\nLuas permukaan tabung adalah %.2f cm^2",selimut);
        printf("\n\nTerima kasih telah menggunakan program ini\nHave a nice day ^_^\n\n");
        system("pause");
        main();
    }
}

void Lkerucut(){
    #define phi 3.14
    float selimut, permukaan, S, T, r;
    int pilihan;

    system("cls");
    printf("\t\t====Program Menghitung Luas Kerucut====\n\n");
    printf("1) Hitung luas selimut kerucut\n2) Hitung luas permukaan kerucut");
    printf("\n\nPilih: ");
    scanf("%d",&pilihan);
    switch(pilihan){
        case 1:
        printf("Masukkan jari-jari kerucut(cm): ");
        scanf("%f",&r);
        printf("Masukkan panjang miring kerucut(cm): ");
        scanf("%f",&S);
        selimut = phi * r * S;
        printf("\nLuas selimut kerucut adalah %.2f cm^2",selimut);
        printf("\n\nTerima kasih telah menggunakan program ini\nHave a nice day ^_^\n\n");
        system("pause");
        main();
        break;

        case 2:
        printf("Masukkan jari-jari kerucut(cm): ");
        scanf("%f",&r);
        printf("Masukkan panjang miring kerucut(cm): ");
        scanf("%f",&S);
        permukaan = (phi * r * S) + (phi * r * r);
        printf("\nLuas permukaan kerucut adalah %.2f cm^2",selimut);
        printf("\n\nTerima kasih telah menggunakan program ini\nHave a nice day ^_^\n\n");
        system("pause");
        main();
        break;
    }
}

void Lbola(){
    #define phi 3.14
    int luas, r;

    system("cls");
    printf("\t\t====Program Menghitung Luas Bola====\n\n");
    printf("Masukkan jari-jari lingkaran(cm): ");
    scanf("%f",&r);
    luas = 4 * phi * r;
    printf("\nLuas bola adalah %.2f cm^2",luas);
    printf("\n\nTerima kasih telah menggunakan program ini\nHave a nice day ^_^\n\n");
    system("pause");
    main();
}

void VolumeBR(){
    int pilihan;

    system("cls");
    printf("\t\tSilahkan pilih bangun ruang yang akan dihitung");
    printf("\n==============================================================================");
    printf("\n\n1) Kubus\n2) Balok\n3) Prisma segitiga\n4) Limas segitiga\n5) limas segiempat\n6) tabung\n7) kerucut\n8) Bola\n9) Kembali");
    printf("\n\nPilih: ");
    scanf("%d",&pilihan);
    switch(pilihan){
        case 1:
        Vkubus();
        break;
        case 2:
        Vbalok();
        break;
        case 3:
        Vprismasegitiga();
        break;
        case 4:
        Vlimassegitiga();
        break;
        case 5:
        Vlimassegiempat();
        break;
        case 6:
        Vtabung();
        break;
        case 7:
        Vkerucut();
        break;
        case 8:
        Vbola();
        break;
        case 9:
        Bangunruang();
        break;
    }
}

void Vkubus(){
    int volume, rusuk;

    system("cls");
    printf("\t\t====Program Menghitung Volume Kubus====\n\n");
    printf("Masukkan panjang rusuk kubus(cm): ");
    scanf("%d",&rusuk);
    volume = rusuk * rusuk * rusuk;
    printf("\nVolume kubus adalah %d cm^3",volume);
    printf("\n\nTerima kasih telah menggunakan program ini\nHave a nice day ^_^\n\n");
    system("pause");
    main();
}

void Vbalok(){
    int volume, panjang, lebar, tinggi;

    system("cls");
    printf("\t\t====Program Menghitung Volume Balok====\n\n");
    printf("Masukkan panjang Balok(cm): ");
    scanf("%d",&panjang);
    printf("Masukkan lebar balok(cm): ");
    scanf("%d",&lebar);
    printf("Masukkan tinggi balok(cm): ");
    scanf("%d",&tinggi);
    volume = panjang * lebar * tinggi;
    printf("\nVolume balok adalah %d cm^3",volume);
    printf("\n\nTerima kasih telah menggunakan program ini\nHave a nice day ^_^\n\n");
    system("pause");
    main();
}

void Vprismasegitiga(){
    float volume, Lalas, tinggi; 

    system("cls");
    printf("\t\t====Program Menghitung Volume Prisma Segitiga====\n\n");
    printf("Masukkan luas alas prisma(cm^2): ");
    scanf("%f",&Lalas);
    printf("Masukkan tinggi prisma(cm): ");
    scanf("%f",&tinggi);
    volume = 0.5 * Lalas * tinggi;
    printf("\nVolume kubus adalah %.2f cm^3",volume);
    printf("\n\nTerima kasih telah menggunakan program ini\nHave a nice day ^_^\n\n");
    system("pause");
    main();
}

void Vlimassegiempat(){
    int volume, Lalas, tinggi;

    system("cls");
    printf("\t\t====Program Menghitung Volume Limas Segiempat====\n\n");
    printf("Masukkan luas alas limas segiempat(cm^2): ");
    scanf("%d",&Lalas);
    printf("Masukkan tinggi limas segiempat(cm): ");
    scanf("%d",&tinggi);
    volume = (Lalas * tinggi) / 3;
    printf("\nVolume limas segiempat adalah %d cm^3",volume);
    printf("\n\nTerima kasih telah menggunakan program ini\nHave a nice day ^_^\n\n");
    system("pause");
    main();
}

void Vlimassegitiga(){
    int volume, Lalas, tinggi;

    system("cls");
    printf("\t\t====Program Menghitung Volume Limas Segitiga====\n\n");
    printf("Masukkan luas alas limas segiempat(cm^2): ");
    scanf("%d",&Lalas);
    printf("Masukkan tinggi limas segitiga(cm): ");
    scanf("%d",&tinggi);
    volume = (Lalas * tinggi) / 3;
    printf("\nVolume limas segitiga adalah %d cm^3",volume);
    printf("\n\nTerima kasih telah menggunakan program ini\nHave a nice day ^_^\n\n");
    system("pause");
    main();
}

void Vtabung(){
    #define phi 3.14
    float volume, jari_jari, tinggi;

    system("cls");
    printf("\t\t====Program Menghitung Volume Tabung====\n\n");
    printf("Masukkan jari-jari tabung(cm): ");
    scanf("%f",&jari_jari);
    printf("Masukkan tinggi tabung(cm): ");
    scanf("%f",&tinggi);
    volume = phi * jari_jari * jari_jari * tinggi;
    printf("\nVolume tabung adalah %.2f cm^3",volume);
    printf("\n\nTerima kasih telah menggunakan program ini\nHave a nice day ^_^\n\n");
    system("pause");
    main();
}

void Vkerucut(){
    #define phi 3.14
    float volume, jari_jari, tinggi;

    system("cls");
    printf("\t\t====Program Menghitung Volume Kerucut====\n\n");
    printf("Masukkan jari-jari kerucut(cm): ");
    scanf("%f",&jari_jari);
    printf("Masukkan tinggi kerucut(cm): ");
    scanf("%f",&tinggi);
    volume = (phi * jari_jari * jari_jari * tinggi) / 2;
    printf("\nVolume kerucut adalalah %.2f cm^3",volume);
    printf("\n\nTerima kasih telah menggunakan program ini\nHave a nice day ^_^\n\n");
    system("pause");
    main();
}

void Vbola(){
    #define phi 3.14
    float volume, jari_jari;

    system("cls");
    printf("\t\t====Program Menghitung Volume Bola====\n\n");
    printf("Masukkan jari-jari bola(cm): ");
    scanf("%f",&jari_jari);
    volume = 4 * (phi * jari_jari * jari_jari * jari_jari) / 3;
    printf("\nVolume bola adalah %.2f cm^3",volume);
    printf("\n\nTerima kasih telah menggunakan program ini\nHave a nice day ^_^\n\n");
    system("pause");
    main();
}