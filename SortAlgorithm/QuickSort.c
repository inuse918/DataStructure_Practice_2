#include <stdio.h>

void QuickSort(int a[],int left,int right) // 범위의 왼쪽은 left, 범위의 오른쪽은 right
{
	int pivot=a[left],i=left, j=right, temp;
	if (left < right)
	{
		while (i < j)
		{
			while (pivot >= a[i] && i < right)i++;
			while (pivot <= a[j] && j > left)j--;
			if (i < j)
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		a[left] = a[j];
		a[j] = pivot;
		QuickSort(a, left, j - 1);
		QuickSort(a, j + 1, right);
	}
}

int main()
{
	int i;
	int a[] = { 10,21,2,30,4,7,17,49,102,1,51,18,99,71,63,3,32,69,11,52,19};
	int n = sizeof(a)/sizeof(int);
	QuickSort(a,0,n-1);
	printf("Quick Sort: ");
	for (i = 0; i < n; i++)
	{
		printf("%5d", a[i]);
	}
	printf("\n");
	return 0;
}