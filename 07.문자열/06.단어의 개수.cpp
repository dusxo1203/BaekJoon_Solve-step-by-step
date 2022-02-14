/*
 https://www.acmicpc.net/problem/1152

 문제: 영어 대소문자와 공백으로 이루어진 문자열이 주어진다. 
 이 문자열에는 몇 개의 단어가 있을까? 이를 구하는 프로그램을 작성하시오. 
 단, 한 단어가 여러 번 등장하면 등장한 횟수만큼 모두 세어야 한다.

 관련 블로그: https://dusxo1203.tistory.com/51
*/

#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)


int main(void)
{
	char input[1000000] = { 0, };
	int i=0, size=0,cnt = 0;

	scanf("%[^\n]s", &input);
	size = strlen(input);
	if (size == 1)
	{
		if (input[i] == ' ')
		{
			printf("0\n");
			return 0;
		}
	}
	for (i = 1; i < size-1; i++)
	{
		if (input[i] == ' ')
		{
			cnt++;
		}
	}
	
	printf("%d", cnt+1);

	return 0;
}
