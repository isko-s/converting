#include<stdio.h>

 void prikaziPorukeDobrodoslice(){
    printf("Dobrodosli!\n");
    printf("Ovaj program konvertuje temperaturu iz *C u *F.\n");
    printf("Ispratite  instrukcije za rad programa");

 }
 float ucitajTemperaturuOdKorisnika()
    float temperatura;
    printf("Unesite temperaraturu u *C\n");
    scanf("%f", &temperatura);
    return temperatura;

float konvertujTempCUTempF(float tempC){
    return c * 1.8 + 32;
}
void prikaziTemperaturu(float F){
    printf("Prikazi temperaturu %.2f*F\n", f);
}

 void main(){
     float tempC; tempF;
     prikaziPorukeDobrodoslice();
         tempC = ucitajTemperaturuOdKorisnika();
         tempF = konvertujTempCUTempF(tempC);
        prikaziTemperaturu(tempF);
 }