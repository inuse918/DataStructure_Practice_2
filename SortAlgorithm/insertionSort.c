#include <stdio.h>

void insertionSort(int a[], int n);

int main() {
	int a[] = { 21,15,7,11,20,10,4,19 };
	int n = sizeof(a) / sizeof(int); //insertionSort 함수에서 이 문장을 실행할 경우 값이 1이 나오게 된다. 
	//	왜냐하면 함수의 a는 a를 간접 참조해 주소값을 갖고 있기 때문이다.
	insertionSort(a, n);
	printf("삽입정렬: ");
	
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
