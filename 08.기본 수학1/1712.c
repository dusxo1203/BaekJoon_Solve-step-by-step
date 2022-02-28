/*
https://www.acmicpc.net/problem/1712

제목:
손익분기점

관련 블로그: 
https://dusxo1203.tistory.com/

*/

#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
    int A = 0, B = 0, C = 0;

    scanf("%d %d %d", &A, &B, &C);
    if (B >= C){
        printf("-1\n");
    }
    else {
        printf("%d\n", A / (C - B) + 1);
    }
    return 0;
}