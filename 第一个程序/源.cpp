#include<stdio.h>
int factorial(int n);
int main(void)
{
	long long n;

	scanf_s("%d",&n);		/*�Ժ�scanf����scanf_s*/
	printf("%d\n", factorial(n));

	return 0;
}

int factorial(int n)	
{
	int i, fact = 1;
	for (i = 1; i <= n; i++) {
		fact = fact * i;
	}
	return fact;
}