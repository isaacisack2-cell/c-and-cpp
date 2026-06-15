#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

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

    if(a==NULL || b==NULL || c==NULL){
        printf("RAM is full bro");
        return 1;
    }

    a->data = 10;
    a->next = b;
    b->data = 20;
    b->next = c;
    c->data = 30;
    c->next = NULL;

    /*
    printf("value on (node a):%d \n",a->data);
    printf("value on (node b):%d \n",b->data);
    printf("value on (node c):%d \n",b->next->data);
    */

    struct node* temp = a;
    while(temp != NULL){
        printf("value:%d\n",temp->data);
        Sleep(1000);
        temp = temp->next;
    }

    free(a);
    free(b);
    free(c);
    Beep(10000,500);
    return 0;
}