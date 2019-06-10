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
	scanf("%d %s", &n, word); // 몇 개 칠 지  정한다.  
	array = (char**)malloc(sizeof(char*) * n);
	for (int i =0; i<n; i++)  // 글자를 친다. 
	{
		array[i] = malloc(sizeof(char)* 100);
		scanf("%s", array[i]); 
	}
	for (int i = 0; i<n; i++)  // 검색시 맞으면  
	{
		if(!strcmp(array[i], word))
		{
			printf("%d번째 원소입니다. \n", i+1);
			founded = 1;
		}
	}
	if (!founded) printf("원소를 못 찾겠다.\n");
	system("pause");
	return 0;
}
