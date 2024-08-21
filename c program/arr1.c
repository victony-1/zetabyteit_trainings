#include <stdio.h>
int main()
{
	// Array storing different ages 
	int ages[] = {20,22,18,35,48,26,87,70,91,25};
	float average,sum;
	int i;

	// get the length of the array
	int length = sizeof(ages) / sizeof(ages[0]);

	// loop through the element of the array
	for(i=0; i<length; i++){
		sum += ages[i];
	}

	// calculate the average by dividing the sum by the length
	average = sum / length;
	
	// print the average 
	printf("The average is: %.2f", average);
	return 0;
}