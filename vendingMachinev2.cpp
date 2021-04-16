#include <iostream>
#include <cstdio>
using namespace std;
// queue

struct product
{
	int quantity, expDate;
};



product stock[1000];
int top;
int front;

void	inicialize()
{
	top = 0;
	front = 0;
}

void	push(int q, int e)
{
	stock[top].quantity = q;
	stock[top].expDate = e;
	top++;
}

int		main()
{
	int nbOperation;
	inicialize();
	scanf("%d", &nbOperation);
	for (int i = 0 ; i < nbOperation; i++) {
		int q, e;
		scanf("%d%d", &q, &e);
		if (q > 0) {
			push(q, e);
		}
		else {
			while (-q > 0) {
				if (-q < stock[front].quantity) {
					stock[front].quantity += q;
					q = 0;
				}
				else {
					q += stock[front].quantity;
					stock[front].quantity = 0;
					stock[front].expDate = 0;
					front++;
				}
			}
		}
	}
	int oldestProduct = stock[front++].expDate;
	while (front < top)
	{
		if (oldestProduct > stock[front].expDate)
			oldestProduct = stock[front].expDate;
		front++;
	}
	printf("%d\n", oldestProduct);
//	for (int j = 0; j < top; j++)
//		printf("%d %d\n", stock[j].quantity, stock[j].expDate);
	return (0);
}
