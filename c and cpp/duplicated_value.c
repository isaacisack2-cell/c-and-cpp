#include<stdio.h>>
int main(){
	int array[6]={101,104,106,101,109,104};

	for(int i = 0;i < 6;i++){
		for(int j = i+1;j < 6;j++){
			if(array[i] == array[j]){
				printf("%d\n",array[i]);
			}
		}
	}

	return 0;
}