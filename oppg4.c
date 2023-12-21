/**
 * Skriv et selvlaget program (jfr. pkt.4 i pdf’en om enkel bruk av Code::Blocks) som skriver ut
ditt navn, gateadresse, postnummer, poststed, mobilnummer og alder. De tre tallene legges i
hver sin heltallsvariabel (som altså skrives ut). Utskriften skal være på fem ulike linjer, der
bare postnummer og poststed står på samme linje, med en blank mellom. Linjene starter med
ledetekstene «Navn:», «Adresse:», «Sted:», «Mobilnr:» og «Alder:». Prøv å få utskriften av
alle dataene til å starte på samme kolonne.
NB1: Alle tekster skal ikke leses inn fra tastaturet, men skrives rett i koden mellom gåsøyne.
NB2: Husk god kommentering ut fra standarden vi bruker/følger.
*/

#include <stdio.h>

int main()
{
    char navn[20] = "Richard";
    char adresse[20] = "Blekksprutveien 1337";
    char sted[20] = "Oslo";
    int mobilnr = 342423425;
    int alder = 32;

    printf("Navn: %s\nAdresse: %s\nSted: %s\n"
    "Mobil: %d\nAlder: %i\n", navn, adresse, sted, mobilnr, alder);

    return 0;
}