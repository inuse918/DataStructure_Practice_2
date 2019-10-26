#include <stdio.h>

int main()
{
	int a[] = { 10,5,7,12,9,16,1,3 };
	int temp = 0;
	for (int i = 0; i < (sizeof(a) / 4); i++) {
		for (int j = i+1; j < (sizeof(a) / 4-1); j++) {
			if (a[i] > a[j]) {

			}
		}
	}

	return 0;
}


/*
void SelectionSort(int a[], int n);

int main()
{
	int a[] = { 10,5,7,12,9,16,1,3 };
	int n = sizeof(a) / sizeof(int);

	printf("정렬 전: ");
	for (int i = 0; i < n; i++) printf("%d ", a[i]);
	SelectionSort(a, n);
	printf("\n선택 정렬 후: ");
	for (int i = 0; i < n; i++) printf("%d ", a[i]);

	return 0;
}

void SelectionSort(int a[],int n)
{
	int min, index;
	for (int i = 0; i < n - 1; i++)
	{
		min = a[i];
		index = i;
		for (int j = i + 1; j < n; j++)
		{
			if (min > a[j]) {
				min = a[j];
				index = j;
			}
		}
		a[index] = a[i];
		a[i] = min;
	}
}*/