/*
 https://www.acmicpc.net/problem/1157

 문제: 알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는
 프로그램을 작성하시오. 단, 대문자와 소문자를 구분하지 않는다.

 관련 블로그: https://dusxo1203.tistory.com/49
*/

#include <stdio.h>
#pragma warning(disable:4996)


int main(void)
{
	char input[1000000];
	int alphabat[26] = { 0, };
	int location, cnt = 0, cmp = 0, size = 0;

	scanf("%s", &input);

	while (input[size] != '\0')
	{
		size++;
	}

	cnt = 0;
	for (int i = 0; i < size; i++)//1번쨰 for문
	{
		for (int k = 0; k < 26; k++)
		{
			if (input[i] == k + 65 || input[i] == k + 97)
			{
				alphabat[k]++;
			}
		}

	}
	for (int j = 0; j < 26; j++)//2번째 for문
	{

		if (cmp < alphabat[j])
		{
			cmp = alphabat[j];
			location = j;
		}
	}
	for (int m = 0; m < 26; m++)//3번째 for문
	{
		
			if (cmp == alphabat[m])
			{
				cnt++;
			}

	}
	if (cnt == 1)
	{
		printf("%c", char(location + 65));
	}
	else if (cnt > 1)
	{
		printf("?");
	}

	return 0;
}