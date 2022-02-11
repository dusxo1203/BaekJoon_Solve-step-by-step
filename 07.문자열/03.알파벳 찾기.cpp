/*
 https://www.acmicpc.net/problem/10809
 알파벳 소문자로만 이루어진 단어 S가 주어진다. 
 각각의 알파벳에 대해서, 단어에 포함되어 있는 경우에는 처음 등장하는 위치를, 
 포함되어 있지 않은 경우에는 -1을 출력하는 프로그램을 작성하시오.
 관련 블로그: https://dusxo1203.tistory.com/47
*/

#include <stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	char word[100] = { 0 };
	scanf("%s", word);
	for (int i = 97; i <= 122; i++) 
	{
		int j = 0;

		while (word[j] != 0) 
		{
			if (word[j] == i)
			{
				break;
			}	
			j++;
		}

		if (word[j] == i) 
			printf("%d ", j);
		else 
			printf("-1 ");
	}
}
