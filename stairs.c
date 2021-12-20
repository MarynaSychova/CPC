#include <stdio.h>
#include <string.h>

//Вивести на екран текст "драбинкою"

int main(int argc, char **argv)
{
	int space = 0;
	for (int i = 1; i < argc; i++)
	{
		if (space > 0)
		{
			for (int j = space; j > 0; j--)
			{
				printf(" ");
			}	
		}
		printf("%s\n", argv[i]);
		space += strlen(argv[i]);
	}	
}
