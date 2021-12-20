#include <stdio.h>

int main()
{
	int n;
	do {
		printf("How many numbers do you want to enter (3 or 5):");
		scanf("%i", &n);
	} while (n != 3 && n != 5);
		
	int array[n];
	if (n == 3)		
		printf("Enter three numbers:\n");
	else
		printf("Enter five numbers:\n");
	
	for (int i = 0; i < n; i++)
	{	
		scanf("%i", &array[i]);
	}
	
	int max = 0;
	for (int i = 1; i < n; i++)
	{
		if (array[i] > array[max])
			max = i;
	}
	
	printf("The biggest number: %i", array[max]);
	return 0;
}
