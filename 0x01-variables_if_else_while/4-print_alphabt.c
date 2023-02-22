#include <stdio.h>
#include <time.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int i;
	/* your code goes there */
	for (i = 0; i < 26;  i++)
	{
		if (i != 4 && i != 16)
		{
			putchar('a' + i);
		}
	}
	putchar('\n');
	return (0);
}
