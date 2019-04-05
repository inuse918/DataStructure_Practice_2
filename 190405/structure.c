#include <stdio.h>

struct student
{
	char hakbun[5];
	char name[9];
	int age;
	char tel[14];
};
struct student a, b, c;

int main(void)
{

	a.age = 18;
	//a.hakbun = "2201";
	printf("학번 입력: ");
	scanf_s("%s",&a.hakbun,5);
	printf("학번: %s \n", a.hakbun);

	return 0;
} 