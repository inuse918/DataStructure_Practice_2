#include <stdio.h>
#include <stdlib.h>

void Merge(int a[], int left, int mid, int right)
{
	// 동적할당
	int *result = (int *)malloc(sizeof(int)*(right - left + 1));
	int i = left;
	int j = mid + 1;
	int k = 0;
	while (i <= mid && j <= right)
	{
		if (a[i] < a[j]) result[k++] = a[i++];
		else result[k++] = a[j++];
	}
	if (i > mid) while (j <= right) result[k++] = a[j++];
	
	else while (i <= mid) result[k++] = a[i++];
	k = 0;
	for (i = left; i <= right; i++)a[i] = result[k++];
	free(result);
}
void Divide(int a[],int left,int right)
{
	int mid;
	if (left < right) {
		mid = (left + right) / 2;
		Divide(a, left, mid);
		Divide(a, mid + 1, right);
		Merge(a, left, mid, right);
	}
}

int main()
{
	int a[] = { 100,2,10,35,29,59,21,34,9,5,11,28 };
	int n = sizeof(a) / sizeof(int);
	int i;
	Divide(a, 0, n - 1);
	printf("병합 정렬: ");
	for (i = 0; i < n; i++)
	{
		printf("%5d", a[i]);
	}
	printf("\n");
	
	return 0;
}