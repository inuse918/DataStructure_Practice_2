#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct node
	{
		char data;
		struct node *link;
	};

	struct node *p,*del;
	
	p = (struct node *)malloc(sizeof(struct node));
	p->data = 'A';
	p->link = (struct node *)malloc(sizeof(struct node));
	p->link->data = 'B';
	p->link->link = (struct node *)malloc(sizeof(struct node));
	p->link->link->data = 'C';
	p->link->link->link = NULL;

	del = p;
	while (p != NULL)
	{
		printf("%c\n", p->data);
		p = p->link;
		free(del);
		del = p;
	}
	return 0;

}