#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct hacker
{
    char name[50];
    int age;
};

int main(){
    struct hacker hacker1;
    strcpy(hacker1.name,"isaac");
    hacker1.age = 20;
    printf("hacker name:%s \n hacker age:%d \n",hacker1.name,hacker1.age);

    //creating a pointer for hacker1
    struct hacker* hacker1_ptr;
    hacker1_ptr = (struct hacker*)malloc(sizeof(struct hacker));
    if(hacker1_ptr != NULL){
        strcpy(hacker1_ptr->name,"isack");
        hacker1_ptr->age = 25;
        printf("hacker name from pointer:%s \n hacker age from pointer:%d \n",hacker1_ptr->name,hacker1_ptr->age);
    }else{
        printf("RAM is full bro");
    }
    free(hacker1_ptr);
    return 0;
}
