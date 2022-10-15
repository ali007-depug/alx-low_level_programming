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
	if ((n % 10) > 5)
	{
	printf("last digit of %d", n);
	printf(" is ");
	printf("%d", n % 10);
	printf("is greater than 5");
	}
	else if ((n % 10) == 0)
	{
	printf("last digit of %d", n);
	printf(" is 0");
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
	printf("last digit of %d", n);
	printf(" is less than 6 and not zero");
	}
	return (0);
}
