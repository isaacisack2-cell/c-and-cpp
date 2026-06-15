#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

int main(){
    struct node* a;
    struct node* b;
    struct node* c;

    a = (struct node*)malloc(sizeof(struct node));
    b = (struct node*)malloc(sizeof(struct node));
    c = (struct node*)malloc(sizeof(struct node));

    a->data = 10; a->next = b;
    b->data = 20; b->next = c;
    c->data = 30; c->next = NULL;

    printf("---- BEFORE INSERT ----\n");
    struct node* temp = a;
    while(temp != NULL){
        printf("value:%d \n",temp->data);
        temp = temp->next;
    }

    struct node* intruder;
    intruder = (struct node*)malloc(sizeof(struct node));
    intruder->data = 15;
    intruder->next = b;
    a->next = intruder;

    printf("---- AFTER INSERTION ----\n");
    temp = a;
    while(temp != NULL){
        printf("VALUE:%d \n",temp->data);
        temp = temp->next;
    }
    free(a);
    free(intruder);
    free(b);
    free(c);
    return 0;
}