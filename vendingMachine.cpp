#include <iostream>
#include <cstdio>
using namespace std;
// queue

int stock[1000];
int top;
int front;

void inicialize()
{
	top = 0;
	front = 0;
}

void push(int value)
{
	stock[top] = value;
	top++;
}

int size()
{
	return (top - front);
}

int pop()
{
	front++;
	return (stock[front]);
}

int 	main()
{
	int i = 0, j = 0;
	int nbOperation;
	scanf("%d", &nbOperation);
	inicialize();
	for (i = 0; i < nbOperation; i++) {
		int quantity , exp;
		scanf("%d%d",  &quantity, &exp);
		if (quantity > 0) {
			for (j = 0; j < quantity; j++)
				push(exp);
		}
		else {
			for (j = 0; j < -quantity; j++)
				pop();
		}
	}
/*
	printf("%d|%d|%d\n", size(), front, top);
	int exp = pop();

	while (size() - 1 > 0) {
		int current = pop();
		printf("{%d}\n", current);
		if (current < exp)
			exp = current;
	}
	printf("%d\n", exp);
	// print the hole stock
	for (i = front; i < top; i++)
		printf("--->%d\n", stock[i]);
*/
	int exp = stock[front];
	for (i = front+1; i < top; i++)
	{
		if (stock[i] < exp)
			exp = stock[i];
	}
	printf("%d\n", exp);
		
	return (0);
}
