/*
https://www.acmicpc.net/problem/11720
N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.

scanf에서 %d %s %c 차이를 알게되었다. %d 는 숫자, %s는 하나의 단어, %c는 제일 앞의 문자를 입력 받는다.
예를 들어 %d는 40, 44등 숫자를, %s 와 %c는 'apple'을 입력 받을시에 %s는 apple , %c는 a를 입력받는다.
이 문제에서는 모든 문자를 입력받아서 각 배열에 문자를 집어넣어야되므로, %s를 사용하여 입력받았다.
또한 char배열로 받았기 때문에 아스키코드에 의해 문자상수 '0'은 48, '1'은 49 ...로 된다. 
그래서 각 배열의 방에 '7'이 들어갔다면 55값이 저장되므로 각 방에 -'0'(48)을 뺴줘야 우리가 원하는 숫자의 값이 된다. 
*/

#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int num, input,  cnt = 0;
	char arr[101] = { 0, };
	scanf("%d", &num);
	scanf("%s", arr);
	for (int i = 0; i < num; i++)
	{
		cnt += arr[i]-'0';
		
	}
	printf("%d\n", cnt);
	return 0;
}

