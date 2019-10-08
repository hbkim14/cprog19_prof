#include<stdio.h>

//extern int count;
static int count;
int get_sum(int a, int b)
{
	count++;
	printf("count(sum) : %d\n", count);
	return a + b;
}
