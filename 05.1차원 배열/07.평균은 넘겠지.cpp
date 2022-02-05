/*https://www.acmicpc.net/problem/4344
대학생 새내기들의 90%는 자신이 반에서 평균은 넘는다고 생각한다. 당신은 그들에게 슬픈 진실을 알려줘야 한다.
*/

//#include <stdio.h>
//#pragma warning (disable:4996)
//
//int main()
//{
//	int n, sum = 0,cnt=0, avrcnt = 0 , arr[1001];
//	float per,test,avr;
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s", &test);
//		arr[i] = test;
//		if (i == 0)
//		{
//			continue;
//		}
//		for (int j = 0; j < arr[0]; j++)
//		{
//			sum += arr[i];
//			cnt++;
//
//		}
//		avr =(float) sum / cnt;
//		
//
//		for (int k = 1; k < n; k++)
//		{
//			if (arr[k] < avr)
//			{
//				avrcnt++;
//			}
//
//		}
//		per = (float)avrcnt / cnt;
//		printf("%f\n", per);
//	}
//	return 0;
//}

#include<stdio.h>
#pragma warning(disable:4996)

int main() {

	int C = 0, N = 0;
	scanf("%d", &C);

	for (int i = 0; i < C; i++) 
	{
		scanf("%d", &N);
		int score[1000], sum = 0;
		double avg = 0.00;
		for (int j = 0; j < N; j++) {
			scanf("%d", &score[j]);
			sum += score[j];
		}

		avg = (double)sum / N;
		int count = 0;
		for (int j = 0; j < N; j++) {
			if (avg < score[j])
				count++;
		}
		printf("%.3f%%\n", (double)count * 100 / N);
	}
	return 0;
}