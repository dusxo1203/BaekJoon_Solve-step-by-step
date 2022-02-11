/*
 https://www.acmicpc.net/problem/2675

 문제: 문자열 S를 입력받은 후에, 각 문자를 R번 반복해 새 문자열 P를 만든 후 출력하는 프로그램을 작성하시오. 
 즉, 첫 번째 문자를 R번 반복하고, 두 번째 문자를 R번 반복하는 식으로 P를 만들면 된다. 
 S에는 QR Code "alphanumeric" 문자만 들어있다.
 QR Code "alphanumeric" 문자는 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ\$%*+-./: 이다.

 관련 블로그: https://dusxo1203.tistory.com/48
*/

#include <stdio.h>
#pragma warning(disable:4996)


int main(void)
{
	int Ttime,Rtime;
	char input[20]={0,};

	scanf("%d", &Ttime);

	for (int i = 0; i < Ttime; i++)
	{
		scanf("%d %s", &Rtime, &input);
		int size = 0;

		while (input[size] != '\0')
			size++;

		for (int k = 0; k < size; k++)
		{
			for (int j = 0; j < Rtime; j++)
			{
				printf("%c", input[k]);
			}
		}
		printf("\n");
	}

	return 0;
}