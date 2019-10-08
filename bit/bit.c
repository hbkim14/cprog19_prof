#include<stdio.h>
#include<assert.h>

unsigned int clear_bit(unsigned int n, unsigned int i)
{
	unsigned int mask = 1 << i; 
	return n & ~mask;
}

unsigned int set_bit(unsigned int n, 
	unsigned int v,
	unsigned int i)
{
	unsigned int mask = v << i;
	unsigned int cn = clear_bit(n,i);
	return cn |= mask;	
}

unsigned int get_bit(unsigned int n, unsigned int i)
{
	unsigned int mask = 1 << i; 
	return (n & mask)? 1 : 0;
}


void print_bit(unsigned int n)
{
	unsigned int mask = 1 << 31;
	for(int i=0; i < 32; i++)
		printf("%u", n & ( mask >> i)? 1 : 0);
	printf("\n");
}


int main()
{
	unsigned int n = 0, v = 1, i = 0;
	print_bit(n);
	printf("ith = ");
	scanf("%u", &i);
	printf("value = ");
	scanf("%u", &v);
	
	n = set_bit(n, v, i);
	assert(v == get_bit(n, i));
	print_bit(n);	
}
