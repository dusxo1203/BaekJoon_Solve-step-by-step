/*
https://www.acmicpc.net/problem/2775

제목:
부녀회장이 될테야

관련 블로그: 
https://dusxo1203.tistory.com/

*/

// #include <stdio.h>
// #pragma warning(disable:4996)

// int main(void)
// {
//     int T,k,n;
//     int numArr[15][15]={0,};

//     for(int j=0;j<15;j++)
//     {
//         numArr[0][j]==j+1;
//     }    
//     for(int i=0;i<15;i++)
//     {
//         numArr[i][0]=1;
//     }
//     for(int i=1;i<15;i++)
//     {
//         for(int j=1;j<15;j++)
//         {
//             numArr[i][j]=numArr[i-1][j]+ numArr[i][j-1];
//         }
//     }

//     // for(int j=0;j<15;j++)
//     // {
//     //     for (int i = 0; i < 15; i++) 
//     //     {
//     //         printf("%8d ", numArr[j][i]); 
//     //     } 
//     //         printf("\n"); 
//     // }

//     scanf("%d", &T); 

//     for (int i = 0; i < T; i++) 
//     { 
//         scanf("%d", &n); 
//         scanf("%d", &k); 
//         printf("%d\n", numArr[n][k-1]);
//     }

//     return 0;
// }

#include <stdio.h>
#pragma warning (disable:4996)
 
int main()
{
  int arr[15][15] = {0,};  // 아파트의 층은 14보다 작거나 같기때문에 각각 15크기의 2중배열을 선언하고 0으로 초기화.
  int test,h,w;

  for(int i=0; i<15; i++){
    arr[0][i] = i;  // 문제를 보면 0층의 i호에는 i명만큼 산다고해서 0층에는 i명으로 선언.
  }
  
  for(int i=1; i<15; i++){
    for(int j=1; j<15; j++){
      arr[i][j] = arr[i-1][j] + arr[i][j-1];
    }  // 문제에서 말한 공식대로 밑에층의 1호부터 해당호까지 사람들의 합을 arr[i][j]에 넣어준다.
  }

  scanf("%d",&test); 
  
  for(int i=0;i<test;i++){
    scanf("%d %d", &h, &w);  
    printf("%d\n", arr[h][w]);  
  }

	return 0; 
}