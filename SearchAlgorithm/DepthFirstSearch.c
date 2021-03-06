#define SIZE 8
#include <stdio.h>
typedef enum{false,true} bool;
int top = -1;
int stack[SIZE] = { 0 };

bool push(int index) {
	if (top == SIZE-1)return false;
	stack[++top] = index; return true;
}
int pop(void) {
	if (top == -1)return -1;
	return stack[top--];
}

void DepthFirstSearch(bool G[][SIZE], char V[]) {
	bool chk[SIZE] = { false };
	int i, j;
	char StartV;
	printf("출발 정점:");
	scanf_s("%c", &StartV, 1);
	for (i = 0; i < SIZE; i++)if (StartV == V[i])break;
	printf("%c", StartV);
	chk[i] = true;
	do {
		for (j = 0; j < SIZE; j++) {
			if (G[i][j] == 1 && chk[j] == 0) {
				printf("-> %c", V[j]);
				chk[j] = 1;
				push(i);
				i = j;
				break;
			}
		}
		if (j == SIZE)i = pop();
	} while (i >= 0);
	printf("\n");
}

int main(void) {
	bool G[SIZE][SIZE] = {
	{0,1,0,1,0,0,0,0},
	{0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0},
	{0,0,1,1,0,0,0,1},
	{0,0,0,0,0,0,0,0},
	{0,0,0,0,0,1,1,0}
	};
	char V[] = { 'A','B','C','D','E','F','G','H' };
	int i, j;
	printf("인접행렬\n");
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++)
			printf("%5d", G[i][j]);
		printf("\n");
	}
	DepthFirstSearch(G, V);
	return 0;
}