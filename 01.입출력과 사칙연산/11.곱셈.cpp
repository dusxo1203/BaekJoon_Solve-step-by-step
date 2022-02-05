/*(세 자리 수) × (세 자리 수)는 다음과 같은 과정을 통하여 이루어진다.



(1)과 (2)위치에 들어갈 세 자리 자연수가 주어질 때 (3), (4), (5), (6)위치에 들어갈 값을 구하는 프로그램을 작성하시오.*/

#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int a, b,fir,sec,thr,c,d,e;
	
	scanf("%d %d", &a, &b);

	fir = b / 100;
	sec = (b / 10) % 10;
	thr = b % 10;
	//printf("%d %d %d \n",fir,sec,thr );
	printf("%d\n", e = a * thr);
	printf("%d\n",d= a * sec);
	printf("%d\n", c = a * fir);
	printf("%d\n", e + d * 10 + c * 100);

	return 0;
}