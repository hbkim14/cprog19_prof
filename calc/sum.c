#include<stdio.h>

//extern int count;
static int count;
int get_sum(int a, int b)
{
	count++;
	printf("count(get_sum) : %d\n", count);
	return a + b;
}
