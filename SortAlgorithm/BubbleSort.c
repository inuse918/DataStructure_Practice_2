#include <stdio.h>

void BubbleSort(int a[], int n)
{
	int chk = 1,j,temp=0,i=1;
	while (chk==1)
	{
		chk = 0;
		
		for (j = 0; j < n - i;j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				chk = 1;
			}
		}
		i++;
	} 
}
int main()
{
	int a[] = { 21,25,7,11,25,72,38,100,51 };
	int n = sizeof(a) / sizeof(int);
	int i;

	printf("정렬 전: ");
	for (i = 0; i < n; i++) printf("%d   ", a[i]);
	BubbleSort(a, n);
	printf("\n버블 정렬 후: ");
	for (i = 0; i < n; i++)printf("%d   ", a[i]);
	return 0;
}