/*
 https://www.acmicpc.net/problem/2562
9개의 서로 다른 자연수가 주어질 때, 이들 중 최댓값을 찾고 그 최댓값이 몇 번째 수인지를 구하는 프로그램을 작성하시오.

예를 들어, 서로 다른 9개의 자연수

3, 29, 38, 12, 57, 74, 40, 85, 61

이 주어지면, 이들 중 최댓값은 85이고, 이 값은 8번째 수이다.*/

#include <stdio.h>
#include <limits.h>
#pragma warning (disable:4996)

int main()
{
	int arr[9],num,max=INT_MIN;

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] > max)
		{
			max = arr[i];
			num = i+1;
		}
	}
	printf("%d\n", max);
	printf("%d", num);
	return 0;
}