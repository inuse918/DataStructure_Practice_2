#include <stdio.h>
#define SIZE 8

enum boolean{false,true};
int queue[SIZE];
int front = 0, rear = -1;

enum boolean add(int data) 
{
	if (rear == SIZE - 1) 
	{
		printf("Queue is full! \n");
		return false;
	}
	queue[++rear] = data;
	return true;
}

int delete(void)
{
	if(front > rear)
	{
		printf("Queue is empty! \n");
		return -1;
	}
	return queue[front++];
}

int main()
{
	add(5);
	add(10);
	add(15);
	add(20);
	add(25);
	add(30);
	add(35);
	add(40);
	add(45); //Queue is full!

	printf("%d\n", delete());
	printf("%d\n", delete());
	printf("%d\n", delete());
	printf("%d\n", delete());
	printf("%d\n", delete());
	printf("%d\n", delete());
	printf("%d\n", delete());
	printf("%d\n", delete());
	
}
