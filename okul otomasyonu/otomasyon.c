

#include "stdio.h"
#include "stdlib.h"

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"

struct dersler{

char ders_adi[10];
float finall;
float vize;
float odev;

};

typedef struct{

char ad[20];
char soy_ad[20];
int numara;
int tckimlik_numara;
char telefon_no[12];
char email_adres[20];
int ders_sayisi;

struct dersler *ders;

}ogrenci_bilgi_sistemi;

ogrenci_bilgi_sistemi *ogren=NULL;
int tn = 0;

void ekle(){

int temp,i;

system("cls");
printf("\n\n -NEU Bilgisayar Muhendisligi Ogrenci Bilgi Sistemi- ");

if(ogren==NULL){

tn+=1;
ogren = (ogrenci_bilgi_sistemi *)calloc(sizeof(ogrenci_bilgi_sistemi),tn);

printf("%s",KBLU);

printf("\n\n\n    Ogrenci adi : ");
scanf("%s",&ogren->ad);

printf("\n\n    Ogrenci soyadi : ");
scanf("%s",&ogren->soy_ad);

printf("\n\n    Ogrenci Numara : ");
scanf("%d",&ogren->numara);



printf("\n\n    Ogrenci TC kimlik numarasi : ");
scanf("%d",&ogren->tckimlik_numara);

printf("\n\n    Ogrenci telefon numarasini girin : ");
scanf("%s",&ogren->telefon_no);

printf("\n\n    Ogrenci email adresini girin : ");
scanf("%s",&ogren->email_adres);




printf("\n\n    Ogrenci aldigi ders sayisi : ");
scanf("%d",&ogren->ders_sayisi);

printf("%s",KNRM);


ogren->ders = calloc(sizeof(*ogren->ders),ogren->ders_sayisi);

for(i=0; i<ogren->ders_sayisi; i++){

if (i%2==0){

printf("%s",KGRN);
printf("\n\n      %d. Ders adi : ",i+1);
scanf("%s",&(ogren->ders+i)->ders_adi);

printf("\n\n      %d. Ders finali : ",i+1);
scanf("%f",&(ogren->ders+i)->finall);

printf("\n\n      %d. Ders vizesi : ",i+1);
scanf("%f",&(ogren->ders+i)->vize);

printf("\n\n      %d. Ders odevi : ",i+1);
scanf("%f",&(ogren->ders+i)->odev);

printf("%s",KNRM);


}

else{

printf("%s",KYEL);
printf("\n\n      %d. Ders adi : ",i+1);
scanf("%s",&(ogren->ders+i)->ders_adi);

printf("\n\n      %d. Ders finali : ",i+1);
scanf("%f",&(ogren->ders+i)->finall);

printf("\n\n      %d. Ders vizesi : ",i+1);
scanf("%f",&(ogren->ders+i)->vize);

printf("\n\n      %d. Ders odev : ",i+1);
scanf("%f",&(ogren->ders+i)->odev);

printf("%s",KNRM);

}


}

}

else{

printf("%s",KBLU);

tn+=1;
ogren = (ogrenci_bilgi_sistemi *)realloc(ogren, tn * sizeof(ogrenci_bilgi_sistemi));

printf("\n\n\n    Ogrenci adi : ");
scanf("%s",&(ogren+tn-1)->ad);

printf("\n\n    Ogrenci soyadi : ");
scanf("%s",&(ogren+tn-1)->soy_ad);

printf("\n\n    Ogrenci Numara : ");
scanf("%d",&(ogren+tn-1)->numara);


printf("\n\n    Ogrenci TC kimlik numarasi : ");
scanf("%d",&(ogren+tn-1)->tckimlik_numara);

printf("\n\n    Ogrenci telefon numarasini girin : ");
scanf("%s",&(ogren+tn-1)->telefon_no);

printf("\n\n    Ogrenci email adresini girin : ");
scanf("%s",&(ogren+tn-1)->email_adres);


printf("\n\n    Ogrenci aldigi ders sayisi : ");
scanf("%d",&(ogren+tn-1)->ders_sayisi);

printf("%s",KNRM);

(ogren+tn-1)->ders = calloc(sizeof(*ogren->ders),(ogren+tn)->ders_sayisi);


for(i=0; i<(ogren+tn-1)->ders_sayisi; i++){

if (i%2==0){

printf("%s",KGRN);
printf("\n\n      %d. Ders adi : ",i+1);
scanf("%s",&((ogren+tn-1)->ders+i)->ders_adi);

printf("\n\n      %d. Ders finali : ",i+1);
scanf("%f",&((ogren+tn-1)->ders+i)->finall);

printf("\n\n      %d. Ders vizesi : ",i+1);
scanf("%f",&((ogren+tn-1)->ders+i)->vize);

printf("\n\n      %d. Ders odevi : ",i+1);
scanf("%f",&((ogren+tn-1)->ders+i)->odev);

printf("%s",KNRM);


}

else{

printf("%s",KYEL);
printf("\n\n      %d. Ders adi : ",i+1);
scanf("%s",&((ogren+tn-1)->ders+i)->ders_adi);

printf("\n\n      %d. Ders finali : ",i+1);
scanf("%f",&((ogren+tn-1)->ders+i)->finall);

printf("\n\n      %d. Ders vizesi : ",i+1);
scanf("%f",&((ogren+tn-1)->ders+i)->vize);


printf("\n\n      %d. Ders odevi : ",i+1);
scanf("%f",&((ogren+tn-1)->ders+i)->odev);

printf("%s",KNRM);

}


}


}

printf("%s",KGRN);
printf("\n\n      Ogrenci ekleme basarili, ana menü icin 1'e basiniz : ");
scanf("%d",&temp);
printf("%s",KNRM);


}

void listele(){

system("cls");
printf("\n\n -NEU Bilgisayar Mühendisligi Ogrenci Bilgi Sistemi- ");
int i=0, temp, j;

if(ogren==NULL){

printf("%s",KRED);
printf("\n\n      Ogrenci listesi bos, Ana menü icin 1'e basiniz : ");
scanf("%d",&temp);
printf("%s",KNRM);

return;

}

while(1){


if(*(ogren+i)->ad!='\0'){

printf("%s",KBLU);

printf("\n\n   %d. Ogrenci adi : %s",i+1,(ogren+i)->ad);

printf("\n\n   %d. Ogrenci soyadi : %s",i+1,(ogren+i)->soy_ad);

printf("\n\n   %d. Ogrenci numarasi : %d",i+1,(ogren+i)->numara);

printf("\n\n   %d. Ogrenci TC kimlik numarasi : %d",i+1,(ogren+i)->tckimlik_numara);

printf("\n\n   %d. Ogrenci telefon numarasi : %s",i+1,(ogren+i)->telefon_no);

printf("\n\n   %d. Ogrenci email adresini : %s",i+1,(ogren+i)->email_adres);




printf("%s",KNRM);

for(j=0; j<(ogren+i)->ders_sayisi; j++){

if(j%2==0){

printf("%s",KGRN);
}

else{

printf("%s",KYEL);
}

printf("\n\n      %d. Ders adi : %s",j+1, ((ogren+i)->ders+j)->ders_adi);

printf("\n\n      %d. Ders finali : %.2f",j+1, ((ogren+i)->ders+j)->finall);

printf("\n\n      %d. Ders vizesi : %.2f",j+1, ((ogren+i)->ders+j)->vize);

printf("\n\n      %d. Ders odevi : %.2f",j+1, ((ogren+i)->ders+j)->odev);

printf("%s",KNRM);

}

printf("\n\n ---------------");

}

i+=1;

if(i==tn){
break;
}


}

printf("%s",KGRN);
printf("\n\n        Ana menü icin 1'e basiniz : ");
scanf("%d",&temp);
printf("%s",KNRM);

}

int AraNo(int no){

int i=0;

while(1){

if((ogren+i)->numara==no){

return i;

}


i+=1;

if(i==tn){
return -3;
}

}

}

void ara(){

int no, j=0, temp;

system("cls");
printf("\n\n -NEU Bilgisayar Mühendisligi Ogrenci Bilgi Sistemi- ");

printf("\n\n   Aranacak ogrenci no : ");

scanf("%d",&no);

int kn = AraNo(no);

system("cls");
printf("\n\n -NEU Bilgisayar Mühendisligi Ogrenci Bilgi Sistemi- ");

if(kn==-3){

printf("%s",KRED);
printf("\n\n      Aranan ogrenci bulunamadi, Ana menü icin 1'e basiniz : ");
scanf("%d",&temp);
printf("%s",KNRM);
}

else{

printf("%s",KBLU);

printf("\n\n   Ogrenci adi : %s",(ogren+kn)->ad);

printf("\n\n   Ogrenci soyadi : %s",(ogren+kn)->soy_ad);

printf("\n\n   Ogrenci numarasi : %d",(ogren+kn)->numara);

printf("\n\n   Ogrenci TC kimlik numarasi : %d",(ogren+kn)->tckimlik_numara);

printf("\n\n    Ogrenci telefon numarasi : %s",(ogren+kn)->telefon_no);

printf("\n\n    Ogrenci email adres : %s",(ogren+kn)->email_adres);





printf("%s",KNRM);

for(j=0; j<(ogren+kn)->ders_sayisi; j++){

if(j%2==0){

printf("%s",KGRN);
}

else{

printf("%s",KYEL);
}

printf("\n\n      %d. Ders adi : %s",j+1, ((ogren+kn)->ders+j)->ders_adi);

printf("\n\n      %d. Ders finali : %.2f",j+1, ((ogren+kn)->ders+j)->finall);

printf("\n\n      %d. Ders vizesi : %.2f",j+1, ((ogren+kn)->ders+j)->vize);

printf("\n\n      %d. Ders odevi : %.2f",j+1, ((ogren+kn)->ders+j)->odev);


printf("%s",KNRM);


}

printf("%s",KGRN);
printf("\n\n       Ana menü icin 1'e basiniz : ");
scanf("%d",&temp);
printf("%s",KNRM);


}


}

void sil(){

int no, j=0, temp;

system("cls");
printf("\n\n -NEU Bilgisayar Mühendisligi Ogrenci Bilgi Sistemi- ");

printf("\n\n   Silinecek ogrenci no : ");

scanf("%d",&no);

int kn = AraNo(no);

if(kn==-3){

printf("%s",KRED);
printf("\n\n      Aranan ogrenci bulunamadi, Ana menü icin 1'e basiniz : ");
scanf("%d",&temp);
printf("%s",KNRM);
}

else{


*(ogren+kn)->ad = '\0';
(ogren+kn)->numara = -149;

printf("%s",KGRN);
printf("\n\n      Ogrenci basariyla silindi, Ana menü icin 1'e basiniz : ");
scanf("%d",&temp);
printf("%s",KNRM);

}


}

void hesapla(){

int no, j=0, temp;

system("cls");
printf("\n\n -NEU Bilgisayar Mühendisligi Ogrenci Bilgi Sistemi- ");

printf("\n\n   Durumu degerlendirilecek ogrenci no : ");

scanf("%d",&no);

int kn = AraNo(no);

float ort;

int gec=0, kal=0;

system("cls");
printf("\n\n -NEU Bilgisayar Mühendisligi Ogrenci Bilgi Sistemi- ");

if(kn==-3){

printf("%s",KRED);
printf("\n\n      Aranan ogrenci bulunamadi, Ana menü icin 1'e basiniz : ");
scanf("%d",&temp);
printf("%s",KNRM);
}

else{

printf("%s",KBLU);

printf("\n\n   Ogrenci adi : %s",(ogren+kn)->ad);

printf("\n\n   Ogrenci soyadi : %s",(ogren+kn)->soy_ad);

printf("\n\n   Ogrenci numarasi : %d",(ogren+kn)->numara);

printf("\n\n   Ogrenci TC kimlik numarasý : %d",(ogren+kn)->tckimlik_numara);

printf("\n\n   Ogrenci telefon numarasi : %s",(ogren+kn)->telefon_no);

printf("\n\n   Ogrenci email adres : %s",(ogren+kn)->email_adres);



printf("%s",KNRM);

for(j=0; j<(ogren+kn)->ders_sayisi; j++){

if(j%2==0){

printf("%s",KGRN);
}

else{

printf("%s",KYEL);
}

printf("\n\n      %d. Ders adi : %s",j+1, ((ogren+kn)->ders+j)->ders_adi);

printf("\n\n      %d. Ders finali : %.2f",j+1, ((ogren+kn)->ders+j)->finall);

printf("\n\n      %d. Ders vizesi : %.2f",j+1, ((ogren+kn)->ders+j)->vize);

printf("\n\n      %d. Ders odevi : %.2f",j+1, ((ogren+kn)->ders+j)->odev);


ort = ((((ogren+kn)->ders+j)->finall * 0.6)*0.8 + (((ogren+kn)->ders+j)->vize * 0.4)*0.8+(((ogren+kn)->ders+j)->odev));


if (ort>=60){
gec+=1;
}
else{
kal+=1;
}

printf("%s",KBLU);

printf("\n\n      %d. Ders ortalamasi : %.2f", j+1, ort);

printf("%s",KNRM);

}

printf("\n\n       Ogrencinin toplam gectigi ders sayisi : %d, Kalddigi ders sayisi : %d", gec, kal);

printf("%s",KGRN);
printf("\n\n       Ana menü icin 1'e basiniz : ");
scanf("%d",&temp);
printf("%s",KNRM);

}



}

void guncelle(){

int no, j=0, temp;

system("cls");
printf("\n\n -NEU Bilgisayar Mühendisligi Ogrenci Bilgi Sistemi- ");

printf("\n\n   Guncellenecek ogrenci no : ");

scanf("%d",&no);

int kn = AraNo(no);

system("cls");
printf("\n\n -NEU Bilgisayar Mühendisligi Ogrenci Bilgi Sistemi- ");

if(kn==-3){

printf("%s",KRED);
printf("\n\n      Aranan ogrenci bulunamadi, Ana menü icin 1'e basiniz : ");
scanf("%d",&temp);
printf("%s",KNRM);
}

else{

printf("%s",KBLU);

printf("\n\n   Guncel Ogrenci adi : ");
scanf("%s",&(ogren+kn)->ad);

printf("\n\n   Guncel Ogrenci soyadi : ");
scanf("%s",&(ogren+kn)->soy_ad);

printf("\n\n   Guncel Ogrenci numarasi : ");
scanf("%d",&(ogren+kn)->numara);

printf("\n\n   Guncel Ogrenci TC kimlik numarasý : ");
scanf("%d",&(ogren+kn)->tckimlik_numara);

printf("\n\n   Guncel Ogrenci telefon numarasi : ");
scanf("%s",&(ogren+kn)->telefon_no);

printf("\n\n   Guncel Ogrenci email adresi : ");
scanf("%s",&(ogren+kn)->email_adres);



printf("%s",KGRN);
printf("\n\n      Guncelleme basarili, Ana menü icin 1'e basiniz : ");
scanf("%d",&temp);

printf("%s",KNRM);

}


}

int main(){


while(1){

system("cls");

int secim;

printf("\n\n - NEU Bilgisayar Muhendisligi Ogrenci Bilgi Sistemi - ");

printf("\n\n\n   1-) Ogrenci Ekle");
printf("\n\n   2-) Ogrenci ara");
printf("\n\n   3-) Ogrenci sil");
printf("\n\n   4-) Ogrenci durumunu degerlendir");
printf("\n\n   5-) Ogrenci guncelle");
printf("\n\n   6-) Bolüm listele");
printf("\n\n   7-) Cikis");

printf("\n\n     Secim : ");
scanf("%d",&secim);

switch(secim){

case 1:
ekle();
break;

case 2:
ara();
break;

case 3:
sil();
break;

case 4:
hesapla();
break;

case 5:
guncelle();
break;

case 6:
listele();
break;


case 7:
return 0;
break;

}

}

return 0;
}