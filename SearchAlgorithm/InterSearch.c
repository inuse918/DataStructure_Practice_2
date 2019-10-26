#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int InterSearch(int a[], int n, int key) {
	int left = 0, right = n - 1, index;
	while (left <= right) {
		if (a[left] == a[right]) index = left;
		else
		{
			index = left + (right - left) * (key - a[left]) / (a[right] - a[left]);
			if (index<left) index = left;
			if (index > right) index = right;
		}
		if (key == a[index])return index;
		else if (key > a[index])left = index + 1;
		else right = index - 1;
	}
	return -1;
}
int main() {
	int a[] = {1,3,66,22,45,62,10};
	int n = sizeof(a) / sizeof(int);
	int index, key;
	printf("찾을 값: ");
	scanf("%d", &key);
	index = InterSearch(a, n, key);
	if (index == -1)printf("데이터가 없습니다.\n");
	else printf("%d에서 %d을(를)찾음!\n", index, key);

	return 0;
}