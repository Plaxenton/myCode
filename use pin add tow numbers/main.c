#include<stdio.h>

int main(void)
{
	int num1 = 1; //show num1
	int num2 = 2;
	int* a = &num1;
	int* b = &num2;
	int sum = *a + *b;
	printf("sum = %d", sum);
	return 0;
}