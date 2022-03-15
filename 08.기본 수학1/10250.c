/*
https://www.acmicpc.net/problem/10250

제목:
ACM 호텔

관련 블로그: 
https://dusxo1203.tistory.com/

*/

#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
    int H, W, N, cnt;
    int output, stage = 0, ho = 0;

    scanf("%d", &cnt);
    for (int i = 0; i < cnt; i++) {
        scanf("%d %d %d", &H, &W, &N);
        if (N % H == 0)
        {
            ho = (N / H);
        }
        else {
            ho = (N / H) + 1;
        }
        stage = N % H;
        if (stage == 0)
        {
            stage = H;
        }
        output = stage * 100 + ho;
        printf("%d\n", output);
    }
    return 0;
}