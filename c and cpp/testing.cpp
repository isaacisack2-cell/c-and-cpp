#include<iostream>
using namespace std;

int main(){
	int num[3][2] = {{10,20},{30,40},{50,60}};
	int* ptr = (int*)num;
	
	cout<<*ptr<<endl;
	return 0;
}