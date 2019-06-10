#include <stdio.h>

int max4(int a, int b, int c, int d)
{
	int max;
	max = a;
	if (b>max) max = b;
	if (c>max) max = c;
	if (d>max) max = d;
	return max;
}

int min3(int a, int b, int c)
{
	int min;
	min = a;
	if (b<min) min = b;
	if (c<min) min = c;
	return min;
}

int min4(int a, int b, int c, int d)
{
	int min;
	min = a;
	if (b<min) min = b;
	if (c<min) min = c;
	if (d<min) min = d;
	return min;
}

int main(void)
{
	int a, b, c, d;
	int max;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("Max, Min is %d %d %d", max4(a,b,c,d), min3(a,b,c), min4(a,b,c,d));
	
	return 0;
}
