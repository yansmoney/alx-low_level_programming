#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	/* your code goes there */
	for (int i=0; i <26;  i++) {
	  putchar('a' + i);
	}
	for (int i=0; i <26;  i++) {
          putchar('A' + i);
        }
	putchar('\n');
	return (0);
}
