#include <stdio.h>

int BinarySearch(int a[], int key, int n)
{
	int left = 0, right = n - 1,mid;
	while (left<=right)
	{
		mid = (left + right) / 2;
		if (key == a[mid])return mid;
		else if (key > a[mid])left = mid + 1;
		else right = mid - 1;
	}
	return -1;
}

int main()
{
	int a[] = { 3,7,11,19,25,33,45,51,67,85,100 };
	int n = sizeof(a) / sizeof(int),index,key;

	printf("ã�� ��: ");
	scanf_s("%d", &key);
	index = BinarySearch(a, key, n);
	if (index >= 0)printf("%d���� %d�� ã��!\n", index, key);
	else printf("%d�� ���� Data!\n", key);
	return 0;
}

