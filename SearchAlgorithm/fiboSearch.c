#include <stdio.h>

int fiboSearch(int a[], int key, int n) 
{
	int fibo[] = { 0,1,1,2,3,5,8,13,21,34,55,89 };
	int index = 0, pos, k = 0;
	while (fibo[k] < n)k++;
	while (k > 0) 
	{
		pos = index + fibo[--k];
		if (pos >= n || key < a[pos]);
		else if (key > a[pos]) 
		{
			index = pos;
			k--;
		}
		else return pos;
	}
	return -1;
}

int main()
{
	int a[] = { 1,4,7,10,14,16,20,21,24,28,30,35,40,41,42,47 };
	int n = sizeof(a) / sizeof(int);
	int key, index;
	printf("ã�� ��: ");
	scanf_s("%d", &key);
	index = fiboSearch(a, key, n);
	if (index == -1) printf("����\n");
	else printf("%d �� %d���� ã��!\n", key, index);
	return 0;

}