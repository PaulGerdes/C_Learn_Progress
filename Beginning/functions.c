#include <stdio.h>

// functions like this can return values
int foo(int bar) {
    return bar * 2;
}


//functions with void a the beginning can't return anything

void moo() {
    printf("\nVoid Function\n");
}

void print_big(int number) {
    if(number > 10) {
        printf("\nx is big\n");
    }
}




int main() {
    printf("\nDer wert von foo ist %d\n", foo(1));
    moo();
    
    int array[] = { 1, 11, 2, 22, 3, 33 };
    int i;
    for (i = 0; i < 6; i++) {
        print_big(array[i]);
    }
    return 0;
}



