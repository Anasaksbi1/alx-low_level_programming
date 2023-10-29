#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - Checks if a string consists of digits
 * @str: The input string to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int check_num(char *str)
{
	for (int count = 0; str[count] != '\0'; count++)
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
	
	return (1);
}

int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (count = 1; count < argc; count++)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);

	return (0);
}
