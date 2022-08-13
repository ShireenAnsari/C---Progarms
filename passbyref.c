#include<stdio.h>
void display(int *);
void show(int **);
int main()
{
	int i;
	int marks[] = { 55,65,75,56,78,78,90 };
	for (i = 0; i <= 6; i++)
		display(&marks[i]);
	return 0;
}

void display(int* n)
{
	show(&n);
}
void show(int** num)
{
	printf("%d\t", **num);
}

