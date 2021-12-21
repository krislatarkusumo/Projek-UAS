#include <stdio.h>
#include <stdlib.h>


int login(){
    char username[25],password[25];
    int kode_promo;
    login:
    printf("\nMasukkan Username : ");
    scanf("%s",&username);
    printf("Masukkan Password : ");

    char pass;
    int i=0;
    while((pass=(char)_getch())!='\r'){
    password[i]=pass;
    printf("*");
    i++;
    }
    printf("\n");
    if ((strcmp(username,"krislatar12")==0)&&(strcmp(password,"atar")==0)){
    printf ("\tAkses Diterima Login sukses\n");
    printf ("\tSelamat Datang %s\n",username);
    }else {
    puts("Maaf username & password anda salah");
    tanya:
    printf("Apakah Anda ingin kembali login ? ketik (Y)");
    char m;
    m=getche();
    if(m=='Y'||m=='y'){
    goto login;
    }else
    printf("\nKode tidak valid\n");
    goto tanya;
    }
}

 void promonataru(){                //fungsi promonataru
    int banyak,j,n=0;
    int i,plh,berapa,jumlah,total=0,total1=0,diskon1=0;
    char alamat[]="Jalan Dukuh Kupang Timur gang 14 no 2,Surabaya";
    int nama[20];
    nama[0]="1kg Beras";
    nama[1]="Kecap Bango";
    nama[2]="1Liter Minyak goreng";
    nama[3]="1kg Telur";
    nama[4]="1kg Tepung Terigu";
    nama[5]="1kg Gula";
    nama[6]="Garam";
    nama[7]="Mentega blueband";
    nama[8]="Penyedap Rasa Sasa";
    nama[9]="1R Penyedap Rasa Masako";
    nama[10]="Sarden Kaleng";
    nama[11]="Susu Kaleng";
    nama[12]="Teh Celup Sariwangi";
    nama[13]="Sabun Mandi batang";
    nama[14]="Obat Nyamuk";
    nama[15]="Saos ABC botol";
    nama[16]="1R kopi Abc";
    nama[17]="1R pop ice all";
    nama[18]="1R Nutrisari all";
    nama[19]="Bumbu Racik all";
    int net[20]={12000,20000,19000,25000,10000,12500,2500,10000,3000,4000,20000,10000,7000,3000,5000,7000,11000,10000,11000,2500};
    printf("\n\nPilihan Produk");
    for(i=1;i<21;i++) {
   printf("\n%d. %s",i,nama[i-1]);
   }
   printf("\nbeli berapa produk :");
   scanf("%d",&banyak);
   int data[banyak];

   for(j=1;j<=banyak;j++){
   printf("\nPilih %d: ",j);
   scanf("%d",&plh);
   if(plh <=20 ){
   printf("Harga %s = %d",nama[plh-1],net[plh-1]);
   printf("\nBerapa kilo atau pcs =");
   scanf("%d",&berapa);
   total=net[plh-1]*berapa;
   printf("Total Biaya = %d \n", total);
    total1=total1+total;
    diskon1=total1*0.05;
    jumlah=total1-diskon1;
   }
   }
  printf("\n\n\t Struk Pembayaran");
  printf("\njadi total :%d",total1);
  printf("\nDapat diskon = Rp %d",diskon1);
  printf("\nTotal Pembelian = Rp %d",jumlah);
  printf("\nBarang akan di kirimkan ke %s",alamat);
  printf("\n\tTerima Kasih Atas Kunjungannya");
}

void promotebakultah(){  //fungsi promo tebak ultah
    int banyak,j,n=0;
    int i,plh,berapa,total=0,total2=0,diskon2=0;
    int jumlah;
    char alamat[]="Jalan Dukuh Kupang Timur gang 14 no 2,surabaya";
    int nama[20];
    nama[0]="1kg Beras";
    nama[1]="Kecap Bango";
    nama[2]="1Liter Minyak goreng";
    nama[3]="1kg Telur";
    nama[4]="1kg Tepung Terigu";
    nama[5]="1kg Gula";
    nama[6]="Garam";
    nama[7]="Mentega blueband";
    nama[8]="Penyedap Rasa Sasa";
    nama[9]="1R Penyedap Rasa Masako";
    nama[10]="Sarden Kaleng";
    nama[11]="Susu Kaleng";
    nama[12]="Teh Celup Sariwangi";
    nama[13]="Sabun Mandi batang";
    nama[14]="Obat Nyamuk";
    nama[15]="Saos ABC botol";
    nama[16]="1R kopi Abc";
    nama[17]="1R pop ice all";
    nama[18]="1R Nutrisari all";
    nama[19]="Bumbu Racik all";
    int net[20]={12000,20000,19000,25000,10000,12500,2500,10000,3000,4000,20000,10000,7000,3000,5000,7000,11000,10000,11000,2500};
    printf("\n\nPilihan Produk");
    for(i=1;i<21;i++) {
   printf("\n%d. %s",i,nama[i-1]);
   }
   printf("\nbeli berapa produk :");
   scanf("%d",&banyak);
   int data[banyak];

   for(j=1;j<=banyak;j++){
   printf("\nPilih %d: ",j);
   scanf("%d",&plh);
   if(plh <=20 ){
   printf("Harga %s = %d",nama[plh-1],net[plh-1]);
   printf("\nBerapa kilo atau pcs =");
   scanf("%d",&berapa);
   total=net[plh-1]*berapa;
   printf("Total Biaya = %d \n", total);
    total2=total2+total;
    diskon2=total2*0.10;
    jumlah=total2-diskon2;
   }
   }
  printf("\n\n\t Struk Pembayaran");
  printf("\njadi total :%d",total2);
  printf("\nDapat diskon = Rp %d",diskon2);
  printf("\nTotal Pembelian = Rp %d",jumlah);
  printf("\nBarang akan dikirimkan ke %s",alamat);
}

void minimalpembelian(){        //fungsi promo minimal pembelian
    int banyak,j,n=0;
    int i,plh,jumlah,berapa,total=0,total3=0,diskon3=0;
    char alamat[]="Jalan Dukuh Kupang Timur gang 14 no 2,surabaya";
    int nama[20];
    nama[0]="1kg Beras";
    nama[1]="Kecap Bango";
    nama[2]="1Liter Minyak goreng";
    nama[3]="1kg Telur";
    nama[4]="1kg Tepung Terigu";
    nama[5]="1kg Gula";
    nama[6]="Garam";
    nama[7]="Mentega blueband";
    nama[8]="Penyedap Rasa Sasa";
    nama[9]="1R Penyedap Rasa Masako";
    nama[10]="Sarden Kaleng";
    nama[11]="Susu Kaleng";
    nama[12]="Teh Celup Sariwangi";
    nama[13]="Sabun Mandi batang";
    nama[14]="Obat Nyamuk";
    nama[15]="Saos ABC botol";
    nama[16]="1R kopi Abc";
    nama[17]="1R pop ice all";
    nama[18]="1R Nutrisari all";
    nama[19]="Bumbu Racik all";
    int net[20]={12000,20000,19000,25000,10000,12500,2500,10000,3000,4000,20000,10000,7000,3000,5000,7000,11000,10000,11000,2500};
    printf("\n\nPilihan Produk");
    for(i=1;i<21;i++) {
   printf("\n%d. %s",i,nama[i-1]);
   }
   printf("\nbeli berapa produk :");
   scanf("%d",&banyak);
   int data[banyak];

   for(j=1;j<=banyak;j++){
   printf("\nPilih %d: ",j);
   scanf("%d",&plh);
   if(plh <=20 ){
   printf("Harga %s = %d",nama[plh-1],net[plh-1]);
   printf("\nBerapa kilo atau pcs =");
   scanf("%d",&berapa);
   total=net[plh-1]*berapa;
   printf("Total Biaya = %d \n", total);
    total3=total3+total;
    diskon3=total3*0.05;
    jumlah=total3-diskon3;
   }
   }
   printf("\n\n\t Struk Pembayaran\n");
   if(total3>=100000){
   printf("Harga Sebelum diskon = Rp %d",total3);
   printf("\nDapat Diskon = Rp %d",diskon3);
   printf("\nTotal Pembelian = Rp %d",jumlah);
   }else printf("\n Total Pembelian = Rp %d",total3);
   printf("\nBarang akan dikirimkan ke %s\n",alamat);
   printf("\t Terima Kasih atas kunjungannya");
}

void menu2(){           //fungsi menu 2
     int banyak,j,n=0;
    int i,plh,berapa,total=0,totalbeli=0,totalseluruh=0,ongkir=5000;
    int jumlah;
    int nama[20];
    char alamat[] = "Jalan Dukuh Kupang Timur gang 14 no 2,Surabaya";
    nama[0]="1kg Beras";
    nama[1]="Kecap Bango";
    nama[2]="1Liter Minyak goreng";
    nama[3]="1kg Telur";
    nama[4]="1kg Tepung Terigu";
    nama[5]="1kg Gula";
    nama[6]="Garam";
    nama[7]="Mentega blueband";
    nama[8]="Penyedap Rasa Sasa";
    nama[9]="1R Penyedap Rasa Masako";
    nama[10]="Sarden Kaleng";
    nama[11]="Susu Kaleng";
    nama[12]="Teh Celup Sariwangi";
    nama[13]="Sabun Mandi batang";
    nama[14]="Obat Nyamuk";
    nama[15]="Saos ABC botol";
    nama[16]="1R kopi Abc";
    nama[17]="1R pop ice all";
    nama[18]="1R Nutrisari all";
    nama[19]="Bumbu Racik all";
    int net[20]={12000,20000,19000,25000,10000,12500,2500,10000,3000,4000,20000,10000,7000,3000,5000,7000,11000,10000,11000,2500};
    printf("\n\nPilihan Produk");
    for(i=1;i<21;i++) {
   printf("\n%d. %s",i,nama[i-1]);
   }
   printf("\nbeli berapa produk :");
   scanf("%d",&banyak);
   int data[banyak];

   for(j=1;j<=banyak;j++){
   printf("\nPilih %d: ",j);
   scanf("%d",&plh);
   if(plh <=20 ){
   printf("Harga %s = %d",nama[plh-1],net[plh-1]);
   printf("\nBerapa kilo atau pcs =");
   scanf("%d",&berapa);
   total=net[plh-1]*berapa;
   printf("Total Biaya = %d \n", total);
    totalbeli=totalbeli+total;
    totalseluruh=totalbeli+ongkir;
   }
   }
   printf("\n\n\tStruk Pembayaran\n");
   printf("total belanja = Rp %d\n",totalbeli);
   printf("biaya ongkir = Rp %d\n",ongkir);
   printf("total pembelanjanan = Rp %d\n",totalseluruh);
   printf("Barang akan Dikirmkan ke %s",alamat);
}

int promo(){
    diskon:
    printf("\n\nDaftar Promo\n");
    puts("1. nataru");
    puts("2. tebak ultah");
    puts("3. Promo minimal Pembelanjaan");
    int p_promo;
    printf("pilih promo :");
    scanf("%d",&p_promo);
    if (p_promo==1){
    printf("\nKlaim Promo ya atau tidak (Y/T): ");
    char m;
    m=getche();
    if(m=='Y'||m=='y'){
    printf("\nPromo diskon 5 persen dan gratis ongkir aktif\n");
    promonataru();
    }else if (m=='T'||m=='t'){
   goto diskon;}
    }else if (p_promo==2){
    printf("\nSilahkan Tebak Ultah Saya :");
    int tebak;
    scanf("%d",&tebak);
    if(tebak==9){printf("Benar\n");
    printf("\n\nAnda dapat diskon 10 persen Dan Gratis Ongkir\n");
    promotebakultah();
    }
    else if(tebak!=9){printf("Salah Coba promo lain\n"); goto diskon;}
    }else if(p_promo==3){
    printf("\nAnda akan Mendapatkan diskon 5 persen dan gratis ongkir\n");
    printf("Dengan pembelanjaan diatas Rp 100.000\n");
    minimalpembelian();
    }
}

void main(){
    printf("\tSilahkan Login Dahulu");
login();
    menu_utama:
    printf("\n\n\tToko Sembako Sumber Rezeki\n");
    printf("Jalan Dukuh Kupang Barat gang 22 no 29\n");
    printf("(60225) Dukuh Pakis, Kota Surabaya\n");
    printf("1. Promo\n");
    printf("2. Beli produk\n");
    printf("3. Petunjuk Penggunaan Aplikasi\n");
    int pilih;
    printf("pilih menu :");
    scanf("%d",&pilih);
    if(pilih==1){
    promo();
    }else if(pilih==2){
    menu2();
    }else if(pilih==3){
    printf("\nPetunjuk Penggunaan Aplikasi\n");
    puts("1. Login menggunakan Username dan Password");
    puts("2. Jika Username dan Password salah Ulangi Hingga Benar");
    puts("3. Jika Login Sukses Anda akan ditujukan Pada Menu");
    puts("4. Pilih Menu Sesuai Kebutuhan");
    puts("5. Menu Promo Untuk Anda bisa Mendapatkan Promo");
    puts("6. Menu Beli Produk Untuk Anda Membeli Produk tanpa Promo");
    printf("Ingin kembali ke menu ? (Y/T)");
    char z;
    z=getche();
    if(z=='Y'||z=='y'){
    goto menu_utama;
    }else if (z=='T'||z=='t'){
    printf("\nTerima Kasih atas Kunjungannya");
    }
}else printf("input kode salah ");
goto menu_utama;
}
