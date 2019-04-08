#include <stdio.h>

int main() {

	int a[4][5] = {{ 5,41,24,6,10 }, { 50,33,20,15,11 }, { 7,17,35,21,16 }, { 38,9,48,4,14 }};
	int b[5][4];

	printf("배열 a 출력\n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%2d ", a[i][j]);
		}
		printf("\n");
	}
	printf("a값을 대입한 배열 b 출력\n");
	
	// printf("%d\n", sizeof(a[4])/4-1);
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			//b[(sizeof(a[4]) / 4 - 1) - j][i] = a[i][j]; 
			b[4-j][i] = a[i][j];
		}
	}

	// 출력
	for (int i = 0; i < 5; i++)
	{  
		for (int j = 0; j < 4; j++)
		{
			printf("%4d", b[i][j]);
		}
		printf("\n");
	}

	return 0;
}