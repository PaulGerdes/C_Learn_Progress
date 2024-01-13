#include <stdio.h>

int main(){

    int i;
    for (i = 0; i < 10; i++) { // Einfache Schleife welche bis 10 geht
        printf("%d\n", i+1);
    }

//  Arrays mit einer for schleife zusammenrechnen
    int zahlen[5]={ 1,5,7,3,8};
    int summe = 0;
    for(int i=0;i<5;i++){
        summe += zahlen[i];
        printf("\n%d",summe);
        
    }printf(" \n");

// AUFGABE  Alle Werte aus Array[] mit einander zu mulitplizieren

    int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int factorial = 1;
    

    /* calculate the factorial using a for loop  here*/
        for(int i=0;i<10;i++){
            factorial*= array[i];
        }    
    printf("10! is %d.\n", factorial);
    return 0;
}