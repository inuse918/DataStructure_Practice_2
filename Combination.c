#include <stdio.h>
#define R 3
int b[R];

void Com() {
	int i;
	for (i = 0; i < R; i++)
		printf("%5d", b[i]);
	printf("\n");
}

void Combination(int a[], int r, int n, int ii) {
	int i;
	if (r == R) Com();
	for (i = ii + 1; i < n; i++){
		b[r] = a[i];
		Combination(a, r + 1, n,i);
	}
}

int main() {
	int  a[] = { 1,2,3,4,5 };
	int n = sizeof(a) / sizeof(int); //원소의 개수

	Combination(a, 0, n,-1);
}