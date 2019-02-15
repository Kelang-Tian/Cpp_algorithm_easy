//
//  no7_8_knapsack_improved.cpp
//  chapter_7
//
//  Created by Kelang-Tian on 2019/2/8.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//
/*
 在例7_7中：
 观察状态转移的特点，我们发现 dp[i][j]的转移仅与 dp[i-1][j-
 list[i].w]和 dp[i-1][j]有关，即仅与二维数组中本行的上一行
 有关。根据这个特点，我们可以将原本的二维数组优化为一维，并用如
 下方式完成状态转移:
 dp[j] = max{dp[j−list[i].w] + list[i].v,dp[j]};
 */

/*
#include <stdio.h>
#define INF 0x7fffffff
int max(int a,int b){
    return a>b?a:b;
}
struct E{
    int w;
    int v;
}list[101];
int dp[1001];
int main(){
    int s,n;
    while (scanf("%d %d",&s,&n)!=EOF) {
        for (int i=1; i<=n ; i++) {
            scanf("%d %d",&list[i].w,&list[i].v);
        }
        for (int i=0; i<=s ; i++) {
            dp[i] = 0;
        }
        for (int i=1; i<=n ; i++) {
            for (int j=s; j>=list[i].w; j--) {
                dp[j] = max(dp[j], dp[j-list[i].w]+list[i].v);
            }
        }
        printf("%d\n",dp[s]);
    }
    return 0;
}
*/
