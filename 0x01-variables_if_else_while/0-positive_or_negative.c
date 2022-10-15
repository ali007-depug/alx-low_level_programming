#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - main fucntion
 *
 *Return:0
 */

int main(void)
{
	int n=0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0){
	printf("%d",n);
	printf(" is postive");
	}
       	else if(n<0){
	printf("%d",n);
	printf(" is negative");
	}
	else if(n==0){
	printf("%d",n);
	printf(" is zero");
 	}
	return (0);
}
