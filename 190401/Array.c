#include <stdio.h>

int main()
{
	int a[500000] = { 0 };
	a[0] = 5;
	printf("%d\n",a[0]);
	return 0;
}