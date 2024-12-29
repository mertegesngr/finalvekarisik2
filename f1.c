#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

//  Kullanıcıdan bir kelime ve kelimede aranacak karakter alındıktan 
// sonra konumBul fonksiyonuna gönderilecektir. Bu fonksiyon kelimenin 
// sonundan aramaya başlayarak aranan karakterin sondan kaçıncı sırada 
// olduğunu döndürüp main’de ekrana yazdıracaktır. (Karakter yoksa 
// “bulunamadı” yazmalıdır). Not: Programda dizi ve dizi sembolü(köşeli 
// parantez []) kullanılmayacak olup pointer ile yapılacaktır.


void Kbul(char *kelime,int *adres,char karakter){
int sayac =0 ; 
for (int i =0 ; i<20 ; i++){
if(*(kelime+i) == '\0'){
    break ; 
}
sayac ++ ; 
}
for(int i =sayac-1 ;i>=0;i--){
    if(karakter==*(kelime+i)){
        *adres = sayac-i;
       return ;  
    }

}
*adres=-1 ; 
}



int main (){

char *kelime =(char*)malloc(20*sizeof(char)); 
char karakter ; 

printf("kelime girin : "); 
gets(kelime); 
printf("hangi harfin sondan kaçıncı sırada olduğunu bulmak istiyorsunuz : "); 
scanf("%c",&karakter);


int adres ; 
Kbul(kelime,&adres,karakter);

if (adres == -1) {
        printf("'%c' karakteri kelimede bulunamadı.\n", karakter);
    } else {
        printf("'%s' kelimesindeki '%c' harfi sondan %d. sırada.\n", kelime, karakter, adres);
    }



    return 0 ; 
}