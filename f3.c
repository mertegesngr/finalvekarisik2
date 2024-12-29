#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Bir sınıftaki 10 öğrencinin bir derste aldıkları notlar için 10x4 
// boyutunda bir tabloda öğrenci no, vize notu ve final notları 
// bulunmaktadır(önceden girildiği varsayılacaktır). Buna göre her öğrenci 
// için vize ve final notunun ortalamasını hesaplayıp bu tablonun son 
// sütununa yerleştirdikten sonra tüm tabloyu ekrana yazdıran programın 
// kodunu yazınız (Vizenin %40’ı ve Finalin %60’ı alınarak 
// hesaplanacaktır).  
//        Ayrıca sınıftaki ortalaması en yüksek öğrencinin ortalama notunu 
// ve tüm sınıfın final ortalamasını hesaplayıp ayrı ayrı ekrana yazdırınız. 

int main (){

int sayi ; 
printf("öğrenci sayısı girin : "); 
scanf("%d",&sayi); 
int notlar [sayi] [4]; 
float ort ; 

for(int i =0 ; i<sayi ; i++){

    printf("öğrenci nosu giriniz:"); 
    scanf("%d",&notlar[i][0]); 
    printf("öğrenci vize notu giriniz:"); 
    scanf("%d",&notlar[i][1]);
    printf("öğrenci final notu giriniz:"); 
    scanf("%d",&notlar[i][2]); 
ort=(0.4*notlar[i][1])+(notlar[i][2]*0.6);
 notlar[i][3]= ort ; 
}
for (int i=0; i<sayi; i++) { 
        for(int j=0;j<4;j++){ 
         printf("%d ",notlar[i][j]); 
  } 
  printf("\n"); 
    }

  float max = notlar[0][3];     
    for (int i = 1; i < sayi; i++) { 
        if (notlar[i][3] > max) { 
            max = notlar[i][3]; 
        } 
    } 
    printf("\nSiniftaki en yuksek ortalama notu: %f ", max);



    return 0 ; 
}