#include<stdio.h>

void badilisha(int* x,int* y,int* z){
    int temp,temp1;
    temp = *x;
    temp1 = *y;
    *x = temp1;
    *y = *z;
    *z = temp;
}

int main(){
    int a = 10;
    int b = 20;
    int c = 30;

    printf("before kubadilisha a=%d and b=%d and c=%d\n\n",a,b,c);

    badilisha(&a,&b,&c);
    printf("after kubadilisha a=%d and b=%d and c=%d\n\n",a,b,c);
    
    return 0;
}