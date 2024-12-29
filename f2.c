#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

//  𝑓(𝑥)=𝑥1 /1!
//  + 𝑥2 /2!
//  +𝑥3 /3! 
// şeklindeki seriyi, kullanıcıdan alınan x ve k değerlerine göre hesaplayan 
// programı yazınız. Üs alma ve faktöriyel bulma işlemleri ayrı 
// fonksiyonlar olarak yazılacaktır (pow gibi hazır fonksiyonlar 
// kullanılmayacaktır).



int fakt (int k ) {
if(k==0 || k==1){
    return 1 ; 
}
int fakt =1; 
for (int i =1 ; i<=k;i++){
fakt=fakt*i ; 

}
return fakt ;
} 
int us (int us , int taban ){

int sonuc =1 ;

for(int i =0 ; i<us; i++){
    sonuc=taban*sonuc; 
}
return sonuc ; 
}


int main (){


 int k ; 
 int x ; 
  
  printf("taban giriniz :") ; 
  scanf("%d",&x); 
  printf("üs (hemde bölüm faktöriyeli) giriniz: "); 
  scanf("%d",&k);  

float sonuc =0 ; 

for (int i =k ;i>0;i--){

float usal=us(i,x); 
float faktt=fakt(i); 
sonuc += usal/faktt; 

}

printf("sonuc = %f",sonuc); 



    return 0 ; 
}