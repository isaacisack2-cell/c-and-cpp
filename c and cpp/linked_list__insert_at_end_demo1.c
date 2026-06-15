#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

int main(){
    struct node* a;
    struct node* b;
    a = (struct node*)malloc(sizeof(struct node));
    b = (struct node*)malloc(sizeof(struct node));

    a->data = 10;   a->next = b;
    b->data = 20;   b->next = NULL;

    struct node* temp_before = a;
    printf("=== BEFORE INSERTION ===\n");
    while(temp_before != NULL){
        printf("before value: %d \n",temp_before->data);
        temp_before = temp_before -> next;
    }

    struct node* c;
    c = (struct node*)malloc(sizeof(struct node));
    c->data = 30;   c->next = NULL;     b->next = c;
    struct node* temp_after_end = a;
    printf("=== AFTER INSERT AT END ===\n");
    while(temp_after_end != NULL){
        printf("after end value: %d \n",temp_after_end->data);
        temp_after_end =temp_after_end -> next;
    }

    struct node* a0;
    a0 = (struct node*)malloc(sizeof(struct node));
    a0->data = 0;   a0->next = a;

    struct node* temp_after_begin = a0;
    printf("==== AFTER INSERT AT BEGIN ===\n");
    while(temp_after_begin != NULL){
        printf("after begin value: %d \n",temp_after_begin->data);
        temp_after_begin = temp_after_begin -> next;
    }

    free(a0);
    free(a);
    free(b);
    free(c);
    free(temp_after_begin);
    free(temp_after_end);
    free(temp_before);

    return 0;
}
