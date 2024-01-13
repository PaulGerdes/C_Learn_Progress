#include <stdio.h>
int main(){
    // Pointers

    /*Pointers are also variables and play a very important role in C programming language. They are used for several reasons, such as:

    Strings
    Dynamic memory allocation
    Sending function arguments by reference
    Building complicated data structures
    Pointing to functions
    Building special data structures (i.e. Tree, Tries, etc...)
    */

    /*A pointer is essentially a simple integer variable which holds a memory address that points to a value,
    instead of holding the actual value itself.*/

    // String as pointers

    char * name = "John";
    /*
    The Line does three things:
    1. It allocates a local (stack) variable called name, which is a pointer to a single character.
    2. It causes the string "John" to appear somewhere in the program memory (after it is compiled and executed, of course).
    3. It initializes the name argument to point to where the J character resides at (which is followed by the rest of the string in the memory).*/

    // Dereferencing a pointer is done using the asterisk operator *.

    /* define a local variable a */
    int a = 1;

    /* define a pointer variable, and point it to a using the & operator */
    int * pointer_to_a = &a;

    printf("The value a is %d\n", a);
    printf("The value of a is also %d\n", *pointer_to_a);
    //Notice that we used the & operator to point at the variable a, which we have just created    

    /* let's change the variable a */
    a += 1;
    printf("We can change a directly %d\n", a);

    /*changed the variable again! */
    *pointer_to_a += 1;

    printf("Or change it with the Pointer %d\n", *pointer_to_a);

    //Exercise
    /*Create a pointer to the local variable n called pointer_to_n,
    and use it to increase the value of n by one.*/

    int n = 10;
    int * pointer_to_n = &n;
    pointer_to_n += 1;
    if (pointer_to_n != &n) {printf("\nDone!\n");}
    if (*pointer_to_n != 11) {printf("\nDone!\n"); }
    return 0;
}
