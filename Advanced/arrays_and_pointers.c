
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int j;
    int Ausgabe;
    int **pnumbers;

    pnumbers = (int **) malloc(5 * sizeof(pnumbers));

    pnumbers[0] = (int*) malloc(5 * sizeof(int));
    pnumbers[1] = (int*) malloc(2 * sizeof(int));
    pnumbers[2] = (int*) malloc(2 * sizeof(int));
    pnumbers[3] = (int*) malloc(2 * sizeof(int));
    pnumbers[4] = (int*) malloc(5 * sizeof(int));

    pnumbers[0][0] = 1;
    pnumbers[0][1] = 1;
    pnumbers[0][2] = 1;
    pnumbers[0][3] = 1;
    pnumbers[0][4] = 1;
    
    pnumbers[1][0] = 1;
    pnumbers[1][1] = 0;
    pnumbers[1][2] = 0;
    pnumbers[1][3] = 0;
    pnumbers[1][4] = 1;

    pnumbers[2][0] = 1;
    pnumbers[2][1] = 0;
    pnumbers[2][2] = 0;
    pnumbers[2][3] = 0;
    pnumbers[2][4] = 1;

    pnumbers[3][0] = 1;
    pnumbers[3][1] = 0;
    pnumbers[3][2] = 0;
    pnumbers[3][3] = 0;
    pnumbers[3][4] = 1;

    pnumbers[4][0] = 1;
    pnumbers[4][1] = 1;
    pnumbers[4][2] = 1;
    pnumbers[4][3] = 1;
    pnumbers[4][4] = 1;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (pnumbers[i][j] == 1) {
                printf("%d\t", pnumbers[i][j]);
            } else { 
                printf("\t");
            }
            
            
        }   
        printf("\n");
        free(pnumbers[i]);
        
    }
    
    free(pnumbers);
    
 
}



