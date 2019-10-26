#include <stdio.h>
#define SIZE 8

enum boolean { false, true };
int cqueue[SIZE];
int front = 0, rear = -1,cnt=0;

enum boolean add(int data)
{
	if (cnt == SIZE)
	{
		printf("Queue is full! \n");
		return false;
	}
	cqueue[++rear%SIZE] = data;
	cnt++;
	return true;
}

int delete(void)
{
	int value=0;
	if (cnt==0)
	{
		printf("Queue is empty! \n");
		return -1;
	}
	cnt--;
	return cqueue[front++%SIZE];
	
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
	add(45); //queue is full! 
	

	printf("%d\n", delete());
	printf("%d\n", delete());
	printf("%d\n", delete());
	printf("%d\n", delete());
	printf("%d\n", delete());
	printf("%d\n", delete());
	printf("%d\n", delete());
	printf("%d\n", delete());

	add(50);
	add(55);
	add(60);

	return 0;

}
