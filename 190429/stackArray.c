#include <stdio.h>
#define SIZE 6

int stack[SIZE];
int top = -1;

int push(int data)
{
	if (top == SIZE - 1)
	{
		printf("Stack is full! \n");
		return -1;
	}
	stack[++top] = data;
	return 0;
}

pop(void)
{
	if (top <= -1)
	{
		printf("Stack is empty! \n");
		return -1;
	}
	return stack[top--];
}
int main()
{	
	push(5);
	push(10);
	push(15);
	push(20);
	push(25);
	push(30);
	//push(35);
	printf("%d\n", pop());
	printf("%d\n", pop());
	printf("%d\n", pop());

	return 0;
}