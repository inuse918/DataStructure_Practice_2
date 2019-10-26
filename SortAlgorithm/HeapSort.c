#include <stdio.h>
#include <limits.h>

void HeapSort(int a[],int n)
{
	int i, value, parent, child;

	for (i = n / 2; i >= 1; i--)
	{
		value = a[i];
		parent = i;
		while ((child = parent * 2) <= n)
		{
			if (child + 1 <= n && a[child] < a[child + 1])child++;
			if (value >= a[child]) break;
			a[parent] = a[child];
			parent = child;
		}
		a[parent] = value;
	}

	while (n > 1)
	{
		value = a[n];
		a[n--] = a[1];
		parent = 1;
		while ((child = parent * 2) <= n)
		{
			if (child + 1 <= n && a[child] < a[child + 1])child++;
			if (value >= a[child]) break;
			a[parent] = a[child];
			parent = child;
		}
		a[parent] = value;
	}
}

int main()
{
	int a[] = { INT_MIN,56,7,8,10,39,21,18,28,20,67,2,4 }; //정수 값이 들어가야 하는 곳에 NULL을 넣음 : 경고 발생
	int n = sizeof(a) / sizeof(int),i;
	printf("정렬 전 : ");
	for (i = 1; i < n; i++)printf("%d  ", a[i]);
	HeapSort(a, n - 1);
	printf("\n힙 정렬 후 : ");
	for (i = 1; i < n; i++)printf("%d  ", a[i]);
	printf("\n");
	return 0;

}