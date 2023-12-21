/**
 * Oppgave 5
Skriv et program som inneholder de totalt uavhengige kodebitene for å:
a) beregne og skrive ut volumet for en rettvinklet prisme (kloss). Sidene er henholdsvis 8, 12
og 16. Lagre disse verdiene i hver sin variabel, før volumet beregnes og skrives ut.
b) har en variabel med verdien «19600406», og som finner årstallet 1960 og skriver ut dette.
*/
 
 #include <stdio.h>

 int main()
 {
    int side1 = 8;
    int side2 = 12;
    int side3 = 16;

    int volum = side1 * side2 * side3;

    printf("Volum av en kloss med sidene %im, %im, %im er %im3.\n", 
    side1, side2, side3, volum);

    char dato[10] = "19600406";

   char aarstall[4] = {dato[0], dato[1], dato[2], dato[3]};

   printf("Aarstall er %s\n", aarstall);

    return 0;
 }