#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student{
	char name[30];
	int age;
	float gpa;
};

int main(){
	struct student* student_ptr = NULL;
	student_ptr = (struct student*)malloc(sizeof(struct student));
	strcpy(student_ptr->name,"isaac isack");
	student_ptr->age = 20;
	student_ptr->gpa = 4.9;
	
	printf("NAME: %s \n",student_ptr->name);
	printf("AGE: %d \n",student_ptr->age);
	printf("GPA: %.2f \n",student_ptr->gpa);
	printf("%x",student_ptr);
	free(student_ptr);
	return 0;
}