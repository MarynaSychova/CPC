#include <stdio.h>

int main()
{
	int array[3];
	
	printf("Enter three numbers:\n");
	for (int i = 0; i < 3; i++)
	{
		scanf("%i", &array[i]);
	}
	
	int sum = a + b + c;
	int mult = a * b * c;
	float ari_mean = ((a + b + c) / 3.0);
	
	printf("%i + %i + %i = %i\n", a, b, c, sum);
	printf("%i * %i * %i = %i\n", a, b, c, mult);
	printf("(%i + %i + %i) / 3 = %.2f", a, b, c, ari_mean);
}
