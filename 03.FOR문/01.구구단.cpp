/*https://www.acmicpc.net/problem/2739
N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램을 작성하시오. 출력 형식에 맞춰서 출력하면 된다.
*/

#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int num,i;

	scanf("%d", &num);
	for (i = 1; i < 10; i++)
	{
		printf("%d * %d = %d\n", num, i, num * i);
	}
	return 0;
}