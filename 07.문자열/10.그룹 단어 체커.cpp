/*
 https://www.acmicpc.net/problem/1316
 문제 
 그룹 단어란 단어에 존재하는 모든 문자에 대해서, 
 각 문자가 연속해서 나타나는 경우만을 말한다. 예를 들면, 
 ccazzzzbb는 c, a, z, b가 모두 연속해서 나타나고, 
 kin도 k, i, n이 연속해서 나타나기 때문에 그룹 단어이지만, 
 aabbbccb는 b가 떨어져서 나타나기 때문에 그룹 단어가 아니다.

단어 N개를 입력으로 받아 그룹 단어의 개수를 출력하는 프로그램을 작성하시오.
 관련 블로그: https://dusxo1203.tistory.com/
*/

/*
 https://www.acmicpc.net/problem/1316

 문제: 영어 대소문자와 공백으로 이루어진 문자열이 주어진다.
 이 문자열에는 몇 개의 단어가 있을까? 이를 구하는 프로그램을 작성하시오.
 단, 한 단어가 여러 번 등장하면 등장한 횟수만큼 모두 세어야 한다.

 관련 블로그: https://dusxo1203.tistory.com/58
*/

#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

int main()
{

    char input[101] = { 0, };
    int WordCnt = 0, cnt = 0, size = 0;
    int  alphabat[26] = { 0, };

    scanf("%d", &WordCnt);
    cnt = WordCnt;

    for (int i = 0; i < WordCnt; i++)
    {
        for (int k = 0; k < 26; k++)
        {
            alphabat[k] = 0;
        }

        scanf("%s", &input);
        size = strlen(input);
       
        for (int i = 0; i < size; i++)
        {
            int plus = 0;
            if (i == 0)
            {
                plus = input[0] - 97;
                alphabat[plus] += 1;
            }
            else
            {
                if (input[i] != input[i - 1])
                {
                    plus = input[i] - 97;
                    alphabat[plus] += 1;
                }
            }
        }
        for (int j = 0; j < 26; j++)
        {
            if (alphabat[j] > 1)
            {
                cnt--;
                break;
            }
        }
    }
    printf("%d", cnt);
    return 0;
}