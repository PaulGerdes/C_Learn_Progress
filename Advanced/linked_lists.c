#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
int val;
struct node* next;
} node_t;




void printList(node_t* head) {
node_t *current1 = head;
int printCounter = 0;

while(current1 != NULL) { 
    printf("Linked List Value %d is %d\n",printCounter,current1->val);  // Print the Name of the List and the Value
    current1 = current1 -> next;
    printCounter++;
}
if(current1 == NULL) { 
    printCounter = 0;
}
int i;
printf("\n\n\nPress 1 for Main Menu");
scanf("%d", &i);
if(i == 1) {
    basicUIF(head);
}
}


void fillList(node_t* head, int val) {
int x = 0;
node_t * current = head;
while (current->next != NULL) {
    current = current->next;
    x++;
}

current->next = (node_t *) malloc(sizeof(node_t));
current->next->val = val;
current->next->next = NULL;
printf("The New created row(%d) of the List got the value%d\n\n", x,val);
}  

void basicUIF(node_t* head) { 


int userInput;
printf("\n\n\n\n\n\n\nLinked List System By Gape(Student of Danne)\nWhat do you want to do?\n1. Showing the whole List\n2. Adding rows to the List\n3. exit\n");
scanf("%d", &userInput);                // scanning for the User Input
if ( userInput == 1) { 
    printf("\n\n\n\n\n\n\n\n");
    printList(head);
} else if ( userInput == 2) { 
    printf("\n\n\n\n\n\n\n\n");
    int x;
    while (x != 88888) {
        scanf("%d",&x);
        if (x == 88888) {
            break;
        }
        fillList(head,x);
    }
    basicUIF(head);
} else if (userInput == 3) {
    
}
}

int main() { 
node_t *head = (node_t *) malloc(sizeof(node_t));
if(head == NULL) { 
    printf("ERROR");
}
basicUIF(head);

return 0;    
}