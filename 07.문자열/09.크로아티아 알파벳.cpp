/*
 https://www.acmicpc.net/problem/2941

 문제:예전에는 운영체제에서 크로아티아 알파벳을 입력할 수가 없었다. 
 따라서, 다음과 같이 크로아티아 알파벳을 변경해서 입력했다.
 예를 들어, ljes=njak은 크로아티아 알파벳 6개(lj, e, š, nj, a, k)로 이루어져 있다. 
 어가 주어졌을 때, 몇 개의 크로아티아 알파벳으로 이루어져 있는지 출력한다.

dž는 무조건 하나의 알파벳으로 쓰이고, d와 ž가 분리된 것으로 보지 않는다. lj와 nj도 마찬가지이다. 
위 목록에 없는 알파벳은 한 글자씩 센다.

 관련 블로그: https://dusxo1203.tistory.com/56
*/

#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main(void)
{
    char arr[101];   
    scanf("%s", arr);
    int len, sum; 

    len = strlen(arr); 
    sum = strlen(arr);  
    for (int i = 0; i < len; i++) {  

        if (arr[i] == 'c' || arr[i] == 's' || arr[i] == 'z') 
        {  
            if (arr[i + 1] == '=' || arr[i + 1] == '-')
            {
                sum--;
            }
        }
        else if (arr[i] == 'n' || arr[i] == 'l')
        { 
            if (arr[i + 1] == 'j')
            {
                sum--;
            }
        }
        else if (arr[i] == 'd') 
        {  
            if (arr[i + 1] == '-')
            {
                sum--;
            }
            else if (arr[i + 1] == 'z' && arr[i + 2] == '=')
            {
                sum--;
            }
        }
    }

    printf("%d\n", sum); 

    return 0;
}
// 틀린 부분 알려주시면 감사하겠습니다 ㅜ
//#include <stdio.h>
//#include <string.h>
//#pragma warning(disable:4996)
//
//int main(void)
//{
//	char input[101]={};
//	int cnt = 0, size = 0;
//
//		scanf("%s", &input);
//		while (input[size] != '\0')
//		{
//			size++;
//		}
//
//		for (int i = 0; i < size; i++)
//		{
//			if (input[i] == 'c')
//			{
//				if (input[i + 1] == '=' || input[i + 1] == '-')
//				{
//					i++;
//				}
//			}
//			if (input[i] == 'd')
//			{
//				if (input[i + 1] == '-')
//				{
//					i++;
//				}
//				if (input[i + 1] == 'z')
//				{
//					if (input[i + 2] == '=')
//					{
//						i += 2;
//					}
//
//				}
//			}
//			if (input[i] == 'l' || input[i] == 'n')
//			{
//				if (input[i + 1] == 'j')
//				{
//					i++;
//				}
//			}
//			if (input[i] == 's' || input[i] == 'z')
//			{
//				if (input[i + 1] == '=')
//				{
//					i++;
//				}
//			}
//			cnt++;
//		}
//		printf("%d", cnt);
//
//	return 0;
//}
