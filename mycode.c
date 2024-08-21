#include <stdio.h>
int main()
{
	int myNum = 10; // is it a positive or negative number 
	if (myNum>0){
		printf("The value is a positive number");
	} else if (myNum<0) {
		printf("The value is negative number");
	} else {
		printf("The value is 0");
	}

	int myCode = 1425;
	if (myCode==1425) {
		printf("correct code\n the door is now open");
	} else {
		printf("wrong code\n the door remain close");
	}

	int myVariable = 500;
	if (myVariable>1000) {
		printf("myVariable is greater than one thousand");
	} else {
		printf("\nmyVariable is lesser than one thousand");
	}
	return 0;
}