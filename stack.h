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

int isEmpty() { return !head; }

int peek() { return (head->data); }
