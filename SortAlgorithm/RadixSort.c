#include <stdio.h>
#include <stdlib.h>

void RadixSort(int a[], int n) 
{
	int* bucket = (int*)malloc(sizeof(int) * n);
	int digit_cnt[10] = { 0 }, max = a[0], digit_Base = 1,i;
	for (i = 1; i < n; i++)if (max < a[i])max = a[i];
	while (digit_Base <= max) {
		for (i = 0; i < n; i++)digit_cnt[a[i] / digit_Base % 10]++;
		for (i = 1; i < 10; i++)digit_cnt[i] += digit_cnt[i - 1];
		for (i = n - 1; i >= 0; i--)bucket[--digit_cnt[a[i] / digit_Base % 10]] = a[i];
		for (i = 0; i < n; i++)a[i] = bucket[i];
		for (i = 0; i < 10; i++)digit_cnt[i] = 0;
		digit_Base *= 10;
	}
	free(bucket);
}

int main()
{
	int a[] = { 15,33,627,302,40,5,100,506,1104,918,2,913 };
	int n = sizeof(a) / sizeof(int);
	int i;
	RadixSort(a, n);

	printf("기수 정렬: ");
	for (i = 0; i < n; i++)
	{
		printf("%5d", a[i]);
	}
	printf("\n");
}