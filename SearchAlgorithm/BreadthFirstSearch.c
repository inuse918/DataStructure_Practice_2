#include <stdio.h>
#define SIZE 8
typedef enum { false, true } bool;
int front = 0, rear = -1;
int queue[SIZE];

bool add(int index) {
	if (rear == SIZE)return false;
	queue[++rear] = index;
	return true;
}

int delete() {
	if (front > rear)return -1;
	return queue[front++];
}

void BreadFirstSearch(bool G[][SIZE], char V[]) {
	bool chk[SIZE] = { false, };
	int i, j;
	char startv;
	printf("출발 정점: ");
	scanf_s("%c", &startv,1);
	for (i = 0; i < SIZE; i++)
		if (startv == V[i]) break;
	printf("%c", V[i]);
	chk[i] = true;
	do {
		for (j = 0; j < SIZE; j++) {
			if (G[i][j] == 1 && chk[j] == 0) {
				printf("-> %c", V[j]);
				chk[j] = 1;
				add(j);
			}
		} i = delete();
	} while (i >= 0);
	printf("\n");
}
int main() {
	bool G[SIZE][SIZE] = {
		{0,1,0,1,0,0,0,0},
		{1,1,0,0,1,0,1,0},
		{0,0,1,0,1,1,0,0},
		{1,0,0,1,0,1,0,0},
		{0,1,1,0,1,0,1,1},
		{0,0,1,1,0,0,0,1},
		{0,1,0,0,1,0,1,1},
		{0,0,0,0,0,1,1,0}
	};

	char V[SIZE] = { 'A','B','C','D','E','F','G','H' };

	BreadFirstSearch(G, V);
	
	return 0;
}