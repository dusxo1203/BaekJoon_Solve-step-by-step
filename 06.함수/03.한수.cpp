/*
https://www.acmicpc.net/problem/1065
어떤 양의 정수 X의 각 자리가 등차수열을 이룬다면, 그 수를 한수라고 한다. 
등차수열은 연속된 두 개의 수의 차이가 일정한 수열을 말한다. N이 주어졌을 때, 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력하는 프로그램을 작성하시오.
*/

#include <stdio.h>
#pragma warning (disable:4996)

void han_su(int i);
int cnt = 0;
int main()
{
	int input, seq=0, arr[1000]={0,};

	scanf("%d", &input);
	for (int i = 1; i <= input; i++)
	{
		han_su(i);
		
	}
	printf("%d\n", cnt);

	return 0;
}
void han_su(int i)
{
	int fir=0,sec=0,thr=0;

	if (i < 100)
	{
		cnt++;
	}
	else
	{
		thr = i % 10;
		sec = (i / 10) % 10;
		fir = i / 100;
		if ((fir - sec) == (sec - thr) && (sec - fir) == (thr - sec))
		{
			cnt++;
		}
	}
}