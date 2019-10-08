#include<stdio.h>
#include<stdlib.h>

int count;

int main(int argc, char* argv[])
{
	if (argc < 3) {
		printf("Usage: ./a.out 3 5\n");
		return -1;
	}
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	printf("%d + %d = %d\n", a, b, get_sum(a, b));
	printf("%d - %d = %d\n", a, b, get_diff(a, b));

}
