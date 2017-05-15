#include <stdio.h>
#include <stdlib.h>

#define LEN 40

int array[LEN];

int sum(int a[], int length)
{
	int sum = 0;
	for (int i = 0; i < length; i++)
	{
		sum += a[i];
	}
	return sum;
}

int sum_rec(int a[], int length)
{
	/*  **  **  **  **  **  */
	/* This validation is not part of the actual algorithm
		but if it's missing, then this code can be dangerous :) */
	if (length < 1)
		exit(EXIT_FAILURE);
	/*  **  **  **  **  **  */


	/*  **  **  **  **  **  */
	/* Actual Algorithm */

	if (length == 1)
		return *a;

	return *a + sum_rec(a + 1, length - 1);

	/*  **  **  **  **  **  */
}

int main()
{
	// Fill array with random numbers
	for (int i = 0; i < LEN; i++)
	{
		array[i] = rand() % 1000;
	}
	// Test result of iterative and recursive function
	printf("sum = %d\n", sum(array, LEN));
	printf("sum_rec = %d\n", sum_rec(array, LEN));
}
