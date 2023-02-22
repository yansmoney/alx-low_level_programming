#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int i;
	/* your code goes there */
	for (i=0; i <26;  i++) {
	  putchar('a' + i);
	}
	for (i=0; i <26;  i++) {
          putchar('A' + i);
        }
	putchar('\n');
	return (0);
}
