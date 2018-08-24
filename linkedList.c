#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head;

struct node* createNode(int d) {
    struct node *nn = malloc(sizeof(struct node));
    nn->data = d;
    nn->next = NULL;
    return nn;
}

void push(int d) {
    struct node *f = createNode(d);
    f->next = head;
    head = f;
}

void pop() {
    int *ptr = head->next;
    free(head);
    head = ptr;
}

int checkEmpty() { return !!head; }

void getFirstNode() { printf("First node data value is %d",head->data); }

int main() {

    // Populating the linked list
    push(5);
    push(10);
    push(15);
    push(20);

    // Deleting latest added node in linked list
    pop();

    // Printing nodes of linked list
    struct node *curr;
    curr = head;
    while(curr != NULL) {
        printf("%d\n",curr->data);
        curr = curr->next;
    }

    // Checking weather list is empty or not
    if (checkEmpty() == 1) {
        printf("Linked List is not empty.\n");
    }
    else {
        printf("Linked List is empty.\n");
    }

    // get the first node data value of linked list
    getFirstNode();
}