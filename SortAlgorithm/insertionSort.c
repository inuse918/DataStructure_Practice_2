#include <stdio.h>

void insertionSort(int a[], int n);

int main() {
	int a[] = { 21,15,7,11,20,10,4,19 };
	int n = sizeof(a) / sizeof(int); //insertionSort �Լ����� �� ������ ������ ��� ���� 1�� ������ �ȴ�. 
	//	�ֳ��ϸ� �Լ��� a�� a�� ���� ������ �ּҰ��� ���� �ֱ� �����̴�.
	insertionSort(a, n);
	printf("��������: ");
	
	for (int i = 0; i < n; i++) {
		printf("%5d", a[i]);
	}
	printf("\n");
	return 0;
}

void insertionSort(int a[], int n) {
	int i, j, key;
	for (i = 1; i < n; i++) { 
		key = a[i];
		for (j = i - 1; j >= 0; j--) {
			if (key >= a[j])break;
			a[j + 1] = a[j];
		}
		a[j + 1] = key;
	}
}
