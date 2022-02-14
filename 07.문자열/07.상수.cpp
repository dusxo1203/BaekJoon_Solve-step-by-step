/*
 https://www.acmicpc.net/problem/2908

 문제: 상근이의 동생 상수는 수학을 정말 못한다. 상수는 숫자를 읽는데 문제가 있다. 
 이렇게 수학을 못하는 상수를 위해서 상근이는 수의 크기를 비교하는 문제를 내주었다. 
 상근이는 세 자리 수 두 개를 칠판에 써주었다. 그 다음에 크기가 큰 수를 말해보라고 했다.

상수는 수를 다른 사람과 다르게 거꾸로 읽는다. 예를 들어, 734와 893을 칠판에 적었다면, 
상수는 이 수를 437과 398로 읽는다. 따라서, 상수는 두 수중 큰 수인 437을 큰 수라고 말할 것이다.

두 수가 주어졌을 때, 상수의 대답을 출력하는 프로그램을 작성하시오.

 관련 블로그: https://dusxo1203.tistory.com/52
*/
#include <stdio.h>
#pragma warning(disable:4996)

int Change(int num);

int main(void)
{
	int num1 = 0, num2 = 0;

	scanf("%d %d", &num1, &num2);

	num1 = Change(num1);
	num2 = Change(num2);
	if (num1 > num2)
	{
		printf("%d", num1);
	}
	else
	{
		printf("%d", num2);
	}

	return 0;
}

int Change(int num)
{
	int fir, sec, thr;

	thr = num % 10;
	sec = (num / 10) % 10;
	fir = num / 100;
	num = thr * 100 + sec * 10 + fir * 1;

	return num;
}

//상수가 이지선다형에 체크한 답.
//상근이가 1. 123, 2. 456 두 수를 상수에게 주면, 
//상수는 1. 321, 2. 654로 읽고  2. 456 체크.
//#include <stdio.h>
//#pragma warning(disable:4996)
//
//int Change(int num);
//int SangsuNum(int num1,int num2);
//
//int main(void)
//{
//	int num1=0, num2=0,result;
//
//	scanf("%d %d", &num1, &num2);
//
//	result = SangsuNum(num1,num2);
//	
//	if (result ==1)
//	{
//		printf("%d", num1);
//	}
//	else if (result==2)
//	{
//		printf("%d", num2);
//	}
//	else
//	{
//		;
//	}
//	return 0;
//}
//int SangsuNum(int num1, int num2)
//{
//	num1 = Change(num1);
//	num2 = Change(num2);
//	if (num1 > num2)
//	{
//		return 1;
//	}
//	else if (num2 > num1)
//	{
//		return 2;
//	}
//	else
//	{
//		;
//	}
//}
//int Change(int num)
//{
//	int fir, sec, thr;
//	
//	thr = num % 10;
//	sec = (num / 10) % 10;
//	fir = num / 100;
//	num = thr * 100 + sec * 10 + fir * 1;
//
//	return num;
//}
