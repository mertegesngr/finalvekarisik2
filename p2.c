#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 1-10 arası rastgele sayılardan oluşturulan 10 elemanlı bir dizide;
// Her bir elemanın kaç defa tekrar ettiğini bulunuz.
// Sadece 1 defa tekrar eden elemanları yazdırınız.

int main (){

srand(time(NULL)); 

int arr[10]; 
for (int i = 0 ; i<10 ; i++){
arr[i]= rand() %10 + 1 ; 
}

int sayac[10]={0}; 

for(int i =0 ; i<10 ; i++){
    for(int j =0 ;j<10;j++){
        if(arr[j]==arr[i]){
            sayac[i]++ ; 
        }
    }
}

for(int i =0 ; i<10 ; i++){
printf("%d sayisindan %d tane var \n",arr[i],sayac[i]); 
}

for(int i =0 ; i<10 ; i++){

if(sayac[i]==1){
    printf("%d sayısından bir tane var. \n",arr[i]);  
}
}
    return 0 ; 
}

// aynı sayıları yazıyor tek problemi o düzeltmeye üşendim :) 