#include <stdio.h>


int main() {

    // Structures



    /* The most basic example of structures are points, which are a single entity that contains two variables - x and y. Let's define a point: */
    struct Point {
        int x;
        int y;
    };
    
    /* Now, let's define a new point, and use it.
    Assume the function draw receives a point and draws it on a screen.
    Without structs, using it would require two arguments - each for every coordinate: */
    
    int x = 10;
    int y = 5;
    draw(x, y);

    /* Using structs, we can pass a point argument: */

    struct Point p;
    p.x = 10;
    p.y = 5;
    draw(p);
    /* To access the point's variables, we use the dot . operator. */


    // Typedefs

    /* We can use the following syntax to remove the struct keyword from each time we want to define a new point: */
    typedef struct {
        int x;
        int y;
    } point;

    //  This will allow us to define a new point like this:
    point p;

    //  Structures can also hold pointers - which allows them to hold strings, 
    //  or pointers to other structures as well - which is their real power. 
    //  For example, we can define a vehicle structure in the following manner:
    typedef struct {
        char * brand;
        int model;
    } vehicle;    

    vehicle mycar;         //   With vehicle we created a new Struckture (mycar)
    mycar.brand = "Ford";  //   Defining the Values for mycar
    mycar.model = 2007;

    //  Exercise
    /* Define a new data structure, named "person",
    which contains a string (pointer to char) called name,
    and an integer called age. */

    typedef struct {  //    Creating Structure Person
        char* name;
        int age;
    } person;

    person john;  //    Definig john with the Structure
    john.name = "John";
    john.age = 27;
    
    printf("%s is %d years old.", john.name, john.age);



    return 0;

}
