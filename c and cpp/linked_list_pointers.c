#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{
    char name[50];
    int age;
    float gpa;
};

int main(){
    struct student* s1;
    s1 = (struct student*)malloc(sizeof(struct student));
    strcpy(s1->name,"isaac isack");

    
    s1->age = 20;
    s1->gpa = 5.0;
    
    printf("student name %s \n age %d \n gpa %.2f \n",s1->name,s1->age,s1->gpa);
    free(s1);
}