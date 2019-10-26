#include <stdio.h>
#include <stdlib.h>

struct node {
	struct node* llink;
	char data;
	struct node* rlink;
};

void preOrder(struct node* p)
{
	if (p != NULL) {
		printf("%c  ", p->data); //D
		preOrder(p->llink); //L
		preOrder(p->rlink); //R
	}
	//return 0;
}

void inOrder(struct node* p)
{
	if (p != NULL) {
		inOrder(p->llink);
		printf("%c  ", p->data);
		inOrder(p->rlink);
	}
	//return 0;
}

void postOrder(struct node* p)
{
	if (p != NULL) {
		postOrder(p->llink); // Àç±ÍÈ£Ãâ
		postOrder(p->rlink);
		printf("%c  ", p->data);
	}
	//return 0;
}


int main()
{
	struct node* root;
	root = (struct node*)malloc(sizeof(struct node));
	root->data = 'A';
	root->llink = (struct node*)malloc(sizeof(struct node));
	root->rlink = (struct node*)malloc(sizeof(struct node));
	root->llink->data = 'B';
	root->rlink->data = 'C';
	root->llink->llink = (struct node*)malloc(sizeof(struct node));
	root->llink->rlink = (struct node*)malloc(sizeof(struct node));
	root->llink->llink->data = 'D';
	root->llink->rlink->data = 'E';
	root->llink->rlink->llink = NULL;
	root->llink->rlink->rlink = NULL;
	root->llink->llink->llink = NULL;
	//root->llink->llink->rlink = NULL;
	root->llink->llink->rlink = (struct node*)malloc(sizeof(struct node));
	root->llink->llink->rlink->data = 'G';
	root->llink->llink->rlink->llink = NULL;
	root->llink->llink->rlink->rlink = NULL;
	root->rlink->llink = (struct node*)malloc(sizeof(struct node));
	root->rlink->rlink = NULL;
	root->rlink->llink->data = 'F';
	root->rlink->llink->llink = NULL;
	root->rlink->llink->rlink = (struct node*)malloc(sizeof(struct node));
	root->rlink->llink->rlink->data = 'H';
	root->rlink->llink->rlink->llink = NULL;
	root->rlink->llink->rlink->rlink = NULL;

	preOrder(root);
	printf("\n");
	inOrder(root);
	printf("\n");
	postOrder(root);
	printf("\n");

}