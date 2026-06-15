#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

int main(){
    int marks[10] = {10,20,10,30,40,10,50,30,10,20};
    for(int i = 0;i < 9;i++){
        for(int j = i+1;j < 9;j++){
            if(marks[i] == marks[i]){
                printf("%d \t",marks[j]);
            }
        }
    }
    return 0;
}