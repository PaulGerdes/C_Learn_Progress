#include <stdio.h>

// Arrays
// Arrays sind Variabeln welche mehrere Werte der selben Variablen Art beinhalten können.

void danne(void) {
    printf("\nDanne\n");
}

int main() {
    int numbers[10]; //definiert ein Array mit 10 integern

    // Einzelen Werten im Array einen Wert geben
    numbers[0] = 20;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;
    numbers[5] = 60;
    numbers[6] = 70;
    numbers[7] = 80;
    numbers[8] = 90;



    // Da ein Array immer bei 0 anfängt muss man immer beim darauf zugreifen den gewüntschten Wert+1 fordern
    printf("Die 5 Zahl in dem Array ist %d\n", numbers[4]); //Hier möchte ich den wert von 5 deshalb nehme ich frage ich nach 4

    // Mit Arrays Rechnen
    float durchschnitt_note;
    float noten[10]; //Defnieren des Arrays noten mit 10 float werten welche die Noten von 10 Schülern entsprechen

    noten[0] = 2.5;
    noten[1] = 3.6;
    noten[2] = 1.5;
    noten[3] = 7.4;
    noten[4] = 2.8;
    noten[5] = 7.2;
    noten[6] = 5.3;
    noten[7] = 5.2;
    noten[8] = 3.4;
    noten[9] = 4.3;

    durchschnitt_note = (noten[0] + noten[1] + noten[2] + noten[3] + noten[4] + noten[5] + noten[6] + noten[7] + noten[8] + noten[9])/10; // Durchschnitt der Noten wird Ausgerechnet und in durchschnitt_note initialisiert

    printf("Die Durchschnitts Note ist %f\n", durchschnitt_note); 
    danne();
    return 0;
    
}
