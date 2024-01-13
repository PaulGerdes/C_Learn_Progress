#include <stdio.h>
// IF Abfragen

// Beispiel 1
int main(){
    int Punkte1 = 3;
    int Punkte2 = 5;
    int Punkte3 = 5;
    int Punkte4 = 4;

    if (Punkte1 < Punkte2) {                                            // Normale If abfragen mit else if
        printf("Punkte1 ist kleiner als Punkte 2\n");
    } else if (Punkte1 == Punkte2) {
        printf("Punkte 1 ist gleich Groß wie Punkte 2\n");
    } else {
        printf("Punkte 1 ist Größer als Punkte 2\n");
    }

    if (Punkte1 < Punkte2 && Punkte1 == Punkte3) {                                                  //if abfrage mit 2 Statements die Gleich sein muessen
        printf("Punkte1 ist kleiner als Punkte 2 und Punkte 3 ist gleich gross wie Punkte3\n");
    } else if (Punkte1 == Punkte2 || Punkte2 == Punkte3) {                                          //if abfrage mit 2 Statements wovon mindestens eine zutreffen muss
        printf("Punkte 1 ist gleich Groß wie Punkte 2 oder Punkte2 ist gleich gross wie Punkte3\n");
    }
    

    if(Punkte4 != 5){                                  // Mit != fragt man ab ob ein Wert nicht gleich wie ein anderer ist
        printf("Punkte1 ist nicht 5\n");
    }else{
        printf("Punkte1 ist 5\n");
    }

    return 0;
}
