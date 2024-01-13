#include <stdio.h>
// Integer sind ganze Zahlen welche positiv und negativ sein können. 
// Sie werden definiert mit:
// Char
// Int
// Short
// Long
// Long Long

//Unsigned Integers sind ganze Zahlen die nur Positiv sein können
// Sie werden definiert mit:
// unsigned Char
// unsigned Int
// unsigned Short
// unsigned Long
// unsigned Long Long

// Floating point numbers sind reele Zahlen welche auch nachKommarstellen haben können
//Sie werden definiert mit:
// float
// double

// C hat nicht nur einen Boolean Typen sondern 3:
// #define Bool char
// #define FALSE 0
// #define True 1

// C Benutzt Buchstaben Arrays um Strings zu definieren 
// Als Beispiel: "Auto" = {["a"],["u"],["t"],["0"]}





//Variablen Defnieren

// FÜr die Meisten Zahlen Benutzt man den Typ Int, da die meisten Computer 32bit unterstützen,
// es bedeutet das die Zahlen von -2,147,483,648 zu 2,147,483,647 gehen können

// Variabeln Foo und Bar definieren 

int foo;
int bar = 1;

// Bei der Variable foo weiß man das sie ein int ist jeddoch den inhalt nicht da diese nicht initialisiert wurde.
// Bei bar weiß man das sie ein int ist und das sie die Zahl 1 enthält





// Mathe Beispiel Rechnung
int main(){
    int a = 5;              // Variabeln werden erstellt und auch alle initialisiert bis auf sum
    float b = 2.6;
    double c = 2.66;
    float sum;

    sum = a + b + c;        // Rechnung bzw eigentliche initialisierung von sum

    printf("The sum of a, b and c is %f", sum);     // Ausgabe des Ergebnisses
    return 0;                                       // %f ist hier ein Platzhalter für das dannach definierte sum(float)
}
 


