#include <stdio.h>
#include <stdbool.h>
int main()
{
	printf("%d\n", 10>9);

	int x = 10;
	int y = 5;
	printf("%d\n", x>y);

	printf("%d\n", 10==10);

	printf("%d\n", 10==15);

	printf("%d\n", 5==55);

	bool hamBurger = true;
	bool pizzaTasty = true;
	//find out if both hamBurger and pizzaTasty
	printf("%d", hamBurger==pizzaTasty);

}