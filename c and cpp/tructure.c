#include<stdio.h>
#include<string.h>
#include<windows.h>

struct student{
	char name[20];
	int age;
	float GPA;
};

int main(){
	struct student student1;
	system("color a");
	strcpy(student1.name,"isaac");
	student1.age = 20;
	student1.GPA = 4.9;
	printf("===== HACKER INFO ====\n");
	printf("NAME: %s \n",student1.name);
	printf("AGE: %d \n",student1.age);
	printf("GPA: %.2f \n",student1.GPA);
	
	return 0;
}