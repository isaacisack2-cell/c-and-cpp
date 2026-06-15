#include<stdio.h>


int main(){
    int array[5] = {10,20,30,40};
    int n = 5;
    
    printf("--- ARRAY BEFORE INSERTION -----\n");
    for(int i = 0;i < n;i++){
        printf("value:%d \n",array[i]);
    }

    //inserting 25 at index of 2
    int index = 2; int value = 25;
    //shifting elements
    for(int i = n-1;i > index;i--){
        array[i] = array[i-1];
    }
    array[index] = value;

    printf("--- ARRAY AFTER INSERTION -----\n");
    for(int i = 0;i < n;i++){
        printf("value:%d \n",array[i]);
    }
    return 0;
}