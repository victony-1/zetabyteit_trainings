#include <stdio.h>
int main()
{
	char carName[] = "Toyota";
	int i;
	for(i=0; i<6; ++i){
		printf("%c\n", carName[i]);
	}
	return 0;
}