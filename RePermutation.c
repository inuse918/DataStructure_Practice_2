#include <stdio.h>
#define R 3
int b[R];

void Reper() {
	int i;
	for (i = 0; i < R; i++)
		printf("%5d", b[i]);
	printf("\n");
}

void Repermutation(int a[], int r, int n) {
	int i;
	if (r == R) Reper();
	else for (i = 0; i < n; i++) {
		b[r] = a[i];
		Repermutation(a, r + 1, n);
	}//for
}//RePermutation

int main() {
	int  a[] = { 1,2,3,4,5 };
	int n = sizeof(a) / sizeof(int); //원소의 개수

	Repermutation(a, 0, n);
}