#include <stdio.h>
int main()
{
	const int myNum = 15; // my number will always be 15
	myNum = 10; // there will be error
	printf("%f", myNum);//error: assignment of read-only variable 'myNum'
	return 0;
}
