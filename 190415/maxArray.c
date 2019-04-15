#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int n = 100;
	/*int a[250000] = { 5 };
	printf("%d\n", a[0]);
	return 0;*/

	int *a = (int *)malloc(sizeof(int)*n);
	a[0] = 5;
	printf("%d\n", a[0]);
	free(a);
	return 0;
}