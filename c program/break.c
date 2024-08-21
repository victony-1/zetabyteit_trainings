#include <stdio.h>
int main()
{
	int i = 0;
	while(1<10){
		if (i == 4){
			break;
		}
		printf("%d\n", i);
		i++;
	}
	return 0;
}