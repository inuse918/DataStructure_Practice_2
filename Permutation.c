#include <stdio.h>
#define R 3
int b[R];

void Per() {
	int i;
	for (i = 0; i < R; i++)
		printf("%5d", b[i]);
	printf("\n");
}

void Swap(int* p1, int* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void Permutation(int a[], int r, int n) {
	int i;
	if (r >= R) Per();
	else for (i = r; i < n; i++) {
		Swap(a+r, &a[i]);
		b[r] = a[r];
		Permutation(a, r + 1, n);
		Swap(a + r, a + i);
	}//for
}//RePermutation

int main() {
	int  a[] = { 1,2,3,4,5 };
	int n = sizeof(a) / sizeof(int); //원소의 개수

	Permutation(a, 0, n);
}