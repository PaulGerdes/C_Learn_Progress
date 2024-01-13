#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};


int main () {
    //Define Linked List rows
    struct node *head   = malloc(sizeof(struct node));
    struct node *middle = malloc(sizeof(struct node));
    struct node *last   = malloc(sizeof(struct node));
    //Link list rows
    head->next   = malloc(sizeof(struct node));
    head->next = middle;
    middle->next = last;
    last   = NULL;

   if (head == NULL || head->next == NULL || middle == NULL) {
        printf("NULL ERROR");
    } else if (last == NULL) { 
        printf("last is last");
    }
    // Assign Values to the rows
    head->data   = 10;
    head->next->data = 3;
    middle->data = 55;
    last->data   = 6;

 

    return 0;
}