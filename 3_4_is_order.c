#include <stdio.h>

//Ввести три числа і визначити, чи правда, що вони вводились у порядку зростання

int main()
{
	int array[3];	
	printf("Enter three numbers:\n");
	for (int i = 0; i < 3; i++)
	{
		scanf("%i", &array[i]);
	}
	printf("Are the numbers in order?\n");
	if (array[0] < array[1] && array[1] < array[2])
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}	
}
