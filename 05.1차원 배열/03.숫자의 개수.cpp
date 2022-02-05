/*https://www.acmicpc.net/problem/2577
세 개의 자연수 A, B, C가 주어질 때 A × B × C를 계산한 결과에 0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를 구하는 프로그램을 작성하시오.

예를 들어 A = 150, B = 266, C = 427 이라면 A × B × C = 150 × 266 × 427 = 17037300 이 되고, 계산한 결과 17037300 에는 0이 3번, 1이 1번, 3이 2번, 7이 2번 쓰였다.
*/

#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int a, b, c,mul,val;
	int arr[10]={ 0, };//10개의 배열방을 0으로 초기화
	scanf("%d %d %d", &a, &b, &c);
	mul = a * b * c;
	while (mul>0)
	{
		val = mul % 10;
		arr[val]++;
		mul = mul / 10;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}