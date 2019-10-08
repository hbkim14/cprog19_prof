#include <stdio.h>
#include <assert.h>

extern int cnt1, cnt2;
extern unsigned int clear_bit(unsigned int n, unsigned int i);
extern unsigned int set_bit(unsigned int n, 
	unsigned int v,
	unsigned int i);
extern unsigned int get_bit(unsigned int n, 
	unsigned int i);
extern void print_bit(unsigned int n);

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

	printf("Set_bit_counts : %d\n",cnt1);
	printf("Get_bit_counts : %d\n",cnt2);

}
