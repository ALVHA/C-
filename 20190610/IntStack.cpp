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
		{"김영준", 179,79},
		{"박현구", 179,79},
		{"이수진", 179,79},
		{"김뷁스", 179,79},
		{"실업자", 179,79},
		{"개극혐", 179,79},
		{"짲은", 179,79},
		{"김영", 179,79},
	};
	
	int nx = sizeof(x)/sizeof(x[0]);
	int retry; 
}
