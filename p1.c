#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main (){

 char cumle[100];
    char kelime[10][20];
    char enB[20], enK[20];
    int i = 0, j = 0, k = 0;

    printf("Cümle yazın: ");
    fgets(cumle, sizeof(cumle), stdin);
    cumle[strcspn(cumle, "\n")] = '\0'; 

    for (i = 0; cumle[i] != '\0'; i++) {
        if (cumle[i] != ' ') {
            kelime[j][k++] = cumle[i];
        } else {
            kelime[j][k] = '\0'; 
            j++;
            k = 0;
        }
    }
    kelime[j][k] = '\0';

    int toplamKelimeler = j + 1;

 
    strcpy(enB, kelime[0]);
    strcpy(enK, kelime[0]);


    for (i = 1; i < toplamKelimeler; i++) {
        if (strlen(kelime[i]) > strlen(enB)) {
            strcpy(enB, kelime[i]);
        }
        if (strlen(kelime[i]) < strlen(enK)) {
            strcpy(enK, kelime[i]);
        }
    }

    printf("En uzun kelime: %s\n", enB);
    printf("En kısa kelime: %s\n", enK);

    return 0;
}



