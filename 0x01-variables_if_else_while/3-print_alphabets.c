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
	for (i='a'; i <'z' + 1;  i++) {
	  putchar(i);
	}
	for (i='A'; i <'Z' + 1 ;  i++) {
          putchar(i);
        }
	putchar('\n');
	return (0);
}
