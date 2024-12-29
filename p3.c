#include <stdio.h>
#include <stdlib.h>
#include <string.h> 


// Girilen bir kelimede kaç farklı karakter olduğunu bulunuz.(Birden fazla tekrar eden karakterler 1 defa sayılacaktır)
// Örnek: “programlama“ kelimesi 7 karakter kullanılarak oluşturulmuştur. (p, r, o, g, a, m, l)

int main (){

char kelime [10] = {""}; 
printf("kelime girin : "); 
gets(kelime); 


char Fharfler[10]; 
int sayac =0 ; 
for (int i =0 ; i<strlen(kelime) ; i++){
   int harfekli=0 ;
for (int j =0 ; j<10 ; j++){
if(Fharfler[j]==kelime[i]){
harfekli=1; 
}
}
 if (!harfekli) { // Eğer karakter farklıysa diziye ekle
            Fharfler[sayac] = kelime[i];
            sayac++;
        }

}
printf("%s",Fharfler); 

return 0 ; 
}