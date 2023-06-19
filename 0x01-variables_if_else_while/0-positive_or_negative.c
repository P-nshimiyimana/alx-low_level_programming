#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - print "string"
 *
 * Description: This is the first function of the program
 * Return: retuns 0 shown succesful execution
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND-MAX / 2;
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else
	{
	printf("%d is negative\n", n)
	}
	return (0);
}
