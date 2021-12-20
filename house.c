#include <stdio.h>

//Вивести на екран рисунок із літер

void build_roof(int h);
void build_walls(int h);

int main()
{
	int h;
	do
	{
		printf("Enter a roof height of a house: ");
		scanf("%i", &h);
	} while (h < 4);

	build_roof(h);
	build_walls(h);
}

void build_roof(int h)
{
	for (int i = 0; i < h; i++)
	{
		for (int j = h - 1 - i; j >= 1; j--)
		{
			printf(" ");
		}
		for (int k = 0; k < i * 2 + 1 ; k++)
		{
			printf("A");
		}
		
		printf("\n");	
	}
}

void build_walls(int h)
{
	int w;
	if (w % 2 == 0)
	{
		w = h - 3;
	}
	else
	{
		w = h - 2;
	}

	for (int a = 0; a < w; a++)
	{
		printf(" ");
		for (int b = 0; b < h / 2; b++)
		{
			printf("H");
		}
		for (int c = 0; c < w; c++)
		{
			printf(" ");
		}
		for (int d = 0; d < h / 2; d++)
		{
			printf("H");
		}
		printf("\n");
	}
	
	printf(" ");
	for (int e = 0; e < h / 2 + w + h / 2; e++)
	{
		printf("Z");
	}	
}
