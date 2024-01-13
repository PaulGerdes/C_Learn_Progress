#include <stdio.h>

// Multidimensionale Arrays

// Multidimensionale Arrays sind Arrays wo die einzelnen Array Werte nochmal eigene Arrays besitzen können

/*Als ein Beispiel*/
int main(){
    int y[3][4]; // Hier steht die 3 für Reihen in einer Tabelle und die 4 für die Spalten also kann x hier 12 Werte haben

    // Hier x als Tabelle:
    //
    //
    //      x[0][0] | x[0][1]  | x[0][2] | x[0][3]
    //
    //      x[1][0] | x[1][1]  | x[1][2] | x[1][3]
    //
    //      x[2][0] | x[2][1]  | x[2][2] | x[2][3]

    // X initialisieren

    int x[3][4] = {{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12}
                    }; // Jede Zeile ist ein Array mit so vielen Werten wie Spalten(hier 3 Zeile und 4 Spalten)

 
    // Auf einen Wert aus x zugreifen

    int Wert1 = x[2][3]; //Hier werden die Variablen Wert1-3 mit den Werten aus x initialisiert
    int Wert2 = x[1][2];
    int Wert3 = x[1][3];

    printf("Wert 1 (3,4) entspricht %d\nWert 2 (2,2) entspricht %d\nund Wert 3 (1,2) entspricht %d\n", Wert1, Wert2, Wert3); // Ausgabe der Werte1-3 aus x
    return 0;
}
