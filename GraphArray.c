#define SIZE 9
#include <stdio.h>

int main()
{
	int G[SIZE][SIZE] = { {0,30,6,21,0,0,0,0,0},
						{30,0,0,0,11,7,0,0,0},
						{6,0,0,0,0,5,3,0,0},
						{21,0,0,0,0,0,27,6,0},
						{0,11,0,0,0,0,0,0,15},
						{0,7,5,0,0,0,0,0,5},
						{0,0,3,27,0,0,0,0,3},
						{0,0,0,6,0,0,0,0,18},
						{0,0,0,0,15,5,3,18,0}
	};

	char V[] = { 'A','B','H','C','D','E','F','G','I' };
	int i, j;

	printf("정점의 집합: ");
	for (i = 0; i < SIZE; i++) printf("%3c",V[i]);
	printf("\n 인접행렬 \n");
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {
			printf("%3d", G[i][j]);
		}
		printf("\n");
	}
	return 0;
}