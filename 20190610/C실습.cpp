#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int code;
	char email[4];
	char spot[1];
	int price;
	int div;
	char adcode[1];
	int acgrade;
	char aclevel[1];
	int distance;
	int score;
} Ac;	// �ŷ�ó ������ ����ü�� ���� 

int main(void)
{
	int n = 100;
	FILE* fp;
	fp = fopen("c:\ecount\data\÷��_02.������ ����.txt","r");
	Ac* ac = (Ac*)malloc(sizeof(Ac) * n);
	for (int i=0; i<n; i++) {
		fscanf(fp, "%.6d %.4s %.1s %.2d %.2d %.1s %.3d %.1s %.2d %.2d", 
		&((ac + i)->code), &((ac + i)->email), &((ac + i)->spot),
		&((ac + i)->price), &((ac + i)->div), &((ac + i)->adcode),
		&((ac + i)->acgrade), &((ac + i)->aclevel), &((ac + i)->distance),
		&((ac + i)->score));
		printf("%d   %d", (ac + i)->code, (ac + i)->acgrade);
	}
	fclose(fp);
	return 0;
}

