#include <stdio.h>
int main()
{
	char greeting[] = {'H', 'E', 'L', 'L', 'O', ' ', 'W', 'O', 'R', 'L', 'D', '\0'};
	char greeting2[] = {"hello world"};
	printf("%lu\n", sizeof(greeting));
	printf("%lu\n", sizeof(greeting2));
	return 0;
}