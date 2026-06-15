#include<stdio.h>
#include<windows.h>
int main(){
	int num[11] = {10,20,30,40,50,70,80,90,100};
	int value,pos,size;
	value = 60;
	pos = 5;
	size = 9;
	
	for(int i = size; i > pos; i--){
		num[i] = num[i-1];
	}
	num[pos] = value;
	
	
	printf("updated (INSERT) array of num will be\n");
	for(int i = 0;i <= size; i++){
		printf("%d \t",num[i]);
	}
	
	for(int i = pos; i < size - 1; i++){
		num[i] = num[i + 1];
	}
	printf("\nupdated (DELETE) array of num will be\n");
	for(int i = 0;i < size; i++){
		printf("%d \t",num[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}