#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - main function
 *
 *Return:0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastdigit = n % 10;

	if (n > 5)
	{
	printf("last digit of %d", n);
	printf(" is ");
	printf("%d", lastdigit);
	printf(" and is greater than 5");
	}
	else if (n == 0)
	{
	printf("last digit of %d", n);
	printf(" is ");
	printf("%d", lastdigit);
	printf(" and is zero")
	}
	else if (n < 6 && n != 0)
	{
	printf("last digit of %d", n);
	printf(" is ");
	printf("%d", lastdigit);
	printf(" and is less than 6 and not zero");
	}
	return (0);
}
