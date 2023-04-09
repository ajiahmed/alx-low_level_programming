#include <stdlib.h>
#include <stdio.h>
/**
 * main - printing a name followed by a new line
 * @argc: count commands
 * @argv: vector commands
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i, j;
	int result = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[a]);
	}
	printf("%d\n, result);
	return (0);
}
