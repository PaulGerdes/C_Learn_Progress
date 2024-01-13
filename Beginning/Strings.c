#include <stdio.h>
#include <string.h>

//Strings
int main(){
    char * name = "Tom"; // Ein so erstellter String kann man nur lesen und nicht bearbeiten

    char namen[]="Tom und Tommi"; // DIesen String kann man bearbeiten
    //char namen[14]="Tom und Tommi"; Diese Schreibweise ist das gleiche nur das wir das Zählen der Buchstaben schon im Vorhinein machen



    // Strings mit Printf

    int alter = 7;
    // char * name = "Tom";

    printf("%s ist %d Jahre alt", name,alter);    
        
    // Länge eines Stringes Herausfinden

    printf("%ld\n", strlen(name)); // Mit strlen kann man die länge der Strings herausfinden

    int namenlänge = strlen(namen); // Man kann die Länge auch direkt in eine Variable abspeichern
    printf("\n%d\n", namenlänge);

    // Strings vergleichen

    if(strncmp(name, "Tom", 3) == 0){ // Überprüfen ob der String name gleich ist mit allen Parameter ("Tom" und 3)
        printf("Hi %s\n", name);
    }else{
        printf("DU HUND %s\n", name);
    }


    // Mit Strncat Strings zusammenfügen

    char dest[20]="Hello";
    char src[20]="World";
    strncat(dest,src,1); // Mit der Zahl hinter dem 2ten String bestimmt man wie viele Stellen des ersten Strings an den 2ten angehangen werden
    printf("%s\n",dest);
    strncat(dest,src,3);
    printf("%s\n",dest);

    /*Beispiel*/
    for(int i = 0; i<6; i++){
        char Test[20]="Tommy";
        char Test1[20]="Luise";
        strncat(Test,Test1,i);
        printf("\n%s\n",Test);
    }


    // Aufgabe Thema Strings

    /* define first_name */
    char first_name[]="John";
    /* define last_name */
    char last_name[]="Doe";
    char nameergebnis[100];

    last_name[0] = 'B';
    sprintf(nameergebnis, "%s %s", first_name, last_name);
    if (strncmp(nameergebnis, "John Boe", 100) == 0) {
        printf("Done!\n");
    }
    nameergebnis[0]='\0';
    strncat(nameergebnis,first_name,4);
    strncat(nameergebnis,last_name,20);
    printf("%s\n",nameergebnis);
    
    return 0;

}
