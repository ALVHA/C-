#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

typedef struct{
	char name[10];
	int height;
	int weight;
} Person;

int npcmp(const Person *x, const Person *y)
{
	return strcmp(x->name, y->name);
}

int main(void)
{
	Person x[]
	{
		{"�迵��", 179,79},
		{"������", 179,79},
		{"�̼���", 179,79},
		{"��", 179,79},
		{"�Ǿ���", 179,79},
		{"������", 179,79},
		{"�L��", 179,79},
		{"�迵", 179,79},
	};
	
	int nx = sizeof(x)/sizeof(x[0]);
	int retry; 
}
