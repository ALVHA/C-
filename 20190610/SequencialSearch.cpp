#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LENGTH 1000

char **array;
int founded;

int main(void)
{
	int n;
	char* word;
	word = malloc(sizeof(char) * 100)
	scanf("%d %s", &n, word); // �� �� ĥ ��  ���Ѵ�.  
	array = (char**)malloc(sizeof(char*) * n);
	for (int i =0; i<n; i++)  // ���ڸ� ģ��. 
	{
		array[i] = malloc(sizeof(char)* 100);
		scanf("%s", array[i]); 
	}
	for (int i = 0; i<n; i++)  // �˻��� ������  
	{
		if(!strcmp(array[i], word))
		{
			printf("%d��° �����Դϴ�. \n", i+1);
			founded = 1;
		}
	}
	if (!founded) printf("���Ҹ� �� ã�ڴ�.\n");
	system("pause");
	return 0;
}
