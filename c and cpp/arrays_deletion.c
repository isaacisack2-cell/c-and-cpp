#include<stdio.h>

int main(){
    int array[5] = {10,20,25,30,40};
    int index = 2; int n = 5;

    for(int i = index;i < n-1;i++){
        array[i] = array[i+1];
    }

    printf("--- AFTER DELETING IN ARRAY ---\n");
    for(int i = 0;i < n-1;i++){
        printf("value:%d \n",array[i]);
    }

    int* ptr;
    for(int i = 0; i < n-1;i++){
        ptr = &array[i];
        printf("address of %d -> %X \n",array[i],ptr);
    }
    return 0;
}