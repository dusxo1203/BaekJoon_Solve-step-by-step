/*
https://www.acmicpc.net/problem/1193

제목:
분수찾기

관련 블로그: 
https://dusxo1203.tistory.com/

*/

#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int input, front=2, back=3,inc=2, front_val, back_val,val_change,sum=2;

	scanf("%d", &input);
	if (input == 1)
	{
		printf("1/1");
		return 0;
	}
	while (1)
	{
		sum++;
		if (front<=input && back>=input)
		{
			front_val = input - front + 1;
			back_val = sum - front_val;
			if (sum % 2 == 0)
			{
				val_change = front_val;
				front_val = back_val;
				back_val = val_change;
			}
			break;
		}
		front += inc;
		back += inc+1;
		inc++;
		
	}
	printf("%d/%d", front_val, back_val);
	return 0;
}