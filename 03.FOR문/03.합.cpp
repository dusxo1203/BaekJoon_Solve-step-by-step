/*https://www.acmicpc.net/problem/8393
n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.
*/

#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int a,i,sum=0;
	scanf("%d", &a);
	for (i = 1; i <= a; i++)
	{
		sum += i;
	}
	printf("%d", sum);
	return 0;
}