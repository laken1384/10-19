#include<stdio.h>
#include<stdlib.h>
long int f(int p);
void main(void)
{
	int m, n;
	long int ans, a, b, c;
	printf("求排列組合C(m,n)\n");
	printf("m="); scanf_s("%d", &m);
	printf("n="); scanf_s("%d", &n);
	a = f(m);
	b = f(n);
	c = f(m - n);
	ans = a / (b*c);
	printf("C(%d,%d)=%d\n", m, n, ans);
	system("pause");
}
long int f(int p)
{
	long int re = 1;
	if (p > 1)
	{
		re = p * f(p-1);
		return re;
	}
	else return 1;
	
}