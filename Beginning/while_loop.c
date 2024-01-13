#include <stdio.h>

int main(){
    // While loops sind änlich wie for loops nur haben sie weniger funktionen
    
            
    int n = 0;          // BEISPIEL while loop welcher bis 10 zählt
    while (n < 10) {
        n++;
        printf("%d\n",n);
    }

    printf("\n\n"); //nur zum visuelem damit es besser zum erkennnen ist

    int b = 0;
    while (1) {         // obwohl der loop eigentlich unendlich ist 
        b++;   
        printf("%d\n",b);         // kann er mit break angehalten werden
        if (b == 10) {
            break;
            printf("B ist = 10\n");
        }
    }
    
    printf("\n\n"); //nur zum visuelem damit es besser zum erkennnen ist

    int c = 0;
    while (c < 10) {
        c++;

        /* checkt ob c nicht even ist*/
        if (c % 2 == 1) {
            /* Mit continue überspringt man den rest der While schleife und fängt wieder oben an*/
            continue;
        }

        /* nur wenn c even ist kommen wir hier hin*/
        printf("The number %d is even.\n", c);
    }

    //Aufgabe 

    int array[] = {1, 7, 4, 5, 9, 3, 5, 11, 6, 3, 4};
    int u = -1;

    while (u < 10) {
        u++;
        if (array[u] > 10) {
            break;
        }
        if (array[u] > 6) {
            continue;
        }
        printf(" \n %d \n", array[u]);
    }

    return 0;
}