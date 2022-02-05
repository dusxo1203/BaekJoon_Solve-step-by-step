/*https://www.acmicpc.net/problem/10950
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
*/

#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int num,a,b,i;
	scanf("%d", &num);
	for (i = num; i > 0; i--)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
	
	return 0;
}