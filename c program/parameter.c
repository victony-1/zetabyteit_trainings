#include <stdio.h>

void myFunction(char name[]){
	printf("hello %s\n", name);
}

int main(){
	myFunction("femi");
	myFunction("temi");
	myFunction("ola");
	return 0;
}