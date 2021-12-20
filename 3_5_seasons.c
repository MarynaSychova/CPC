#include <stdio.h>

//Ввести номер місяця і вивести назву пори року

int main()
{
	int n;
	do {
		printf("Enter a number of a month: ");
		scanf("%i", &n);
	} while (n < 1 || n > 12);
	
	if (n == 1 || n == 2 || n == 12)
	{
		printf("Winter");
	}
	else if (n >= 3 && n <= 5)
	{
		printf("Spring");
	}		
	else if (n >= 6 && n <= 8)
	{
		printf("Summer");
	}
	else
	{
		printf("Autumn");
	}		
}
