/*
https://www.acmicpc.net/problem/2292

제목:
벌집

관련 블로그: 
https://dusxo1203.tistory.com/

*/

#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int input, ans, cnt = 1, front = 2, back = 7;

	scanf("%d", &input);

	if (input == 1)
	{
		printf("1");
		return 0;
	}
	while (1)
	{
		if (input >= front && input <= back)
		{
			break;
		}
		
		front += cnt*6;
		back += (cnt+1)*6;
		cnt++;
	}
	printf("%d", cnt + 1);
	return 0;
}